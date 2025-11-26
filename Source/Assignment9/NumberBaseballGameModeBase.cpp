#include "NumberBaseballGameModeBase.h"
#include "NumberBaseballGameStateBase.h"
#include "NumberBaseballPlayerController.h"
#include "NumberBaseballPlayerState.h"
#include "EngineUtils.h"
#include "TimerManager.h"

void ANumberBaseballGameModeBase::BeginPlay()
{
	Super::BeginPlay();

	NumberRightAnswer = MakeSecretNumber();
	UE_LOG(LogTemp, Warning, TEXT("%s"), *NumberRightAnswer);

	GetWorldTimerManager().SetTimer(TurnTickTimerHandle, this, &ANumberBaseballGameModeBase::TickTurnTimer, 1.0f, true);

	bIsRoundActive = true;
	CurrentTurnPlayer = nullptr;
}

void ANumberBaseballGameModeBase::OnPostLogin(AController* NewPlayer)
{
	Super::OnPostLogin(NewPlayer);

	ANumberBaseballPlayerController* NBPC = Cast<ANumberBaseballPlayerController>(NewPlayer);
	if (IsValid(NBPC) == true)
	{
		NBPC->AlarmText = FText::FromString(TEXT("Connected to the game server."));

		AllPlayerControllers.Add(NBPC);

		ANumberBaseballPlayerState* NBPS = NBPC->GetPlayerState<ANumberBaseballPlayerState>();
		if (IsValid(NBPS) == true)
		{
			NBPS->PlayerNickName = TEXT("Player") + FString::FromInt(AllPlayerControllers.Num());
		}

		ANumberBaseballGameStateBase* NBGS = GetGameState<ANumberBaseballGameStateBase>();
		if (IsValid(NBGS) == true)
		{
			NBGS->MulticastRPCLogin(NBPS->PlayerNickName);
		}
	}
}

void ANumberBaseballGameModeBase::PrintChattingMessage(ANumberBaseballPlayerController* ChattingPlayerController, const FString& InChattingMessage)
{
	if (IsValid(CurrentTurnPlayer) && ChattingPlayerController != CurrentTurnPlayer)
	{
		ChattingPlayerController->AlarmText = FText::FromString(TEXT("It's not your turn!"));
		return;
	}

	FString ChattingMessages = InChattingMessage;
	int Index = InChattingMessage.Len() - 3;
	FString RightAnswerNumber = InChattingMessage.RightChop(Index);
	if (IsValidGuessNumber(RightAnswerNumber) == true)
	{
		int32 StrikeCount = 0;

		FString MakeGuessResultString = MakeGuessResult(NumberRightAnswer, RightAnswerNumber, StrikeCount);

		UpGuessCount(ChattingPlayerController);
		JudgeGame(ChattingPlayerController, StrikeCount);

		for (TActorIterator<ANumberBaseballPlayerController> It(GetWorld()); It; ++It)
		{
			ANumberBaseballPlayerController* NBPC = *It;
			if (IsValid(NBPC) == true)
			{
				FString ConnetionMessage = InChattingMessage + TEXT(" -> ") + MakeGuessResultString;
				NBPC->ClientRPC_PrintChatting(ConnetionMessage);
			}
		}
	}
	else
	{
		for (TActorIterator<ANumberBaseballPlayerController> It(GetWorld()); It; ++It)
		{
			ANumberBaseballPlayerController* NBPC = *It;
			if (IsValid(NBPC) == true)
			{
				NBPC->ClientRPC_PrintChatting(InChattingMessage);
			}
		}
	}
}

FString ANumberBaseballGameModeBase::MakeSecretNumber()
{
	TArray<int32> Numbers;
	for (int32 i = 1; i <= 9; ++i)
	{
		Numbers.Add(i);
	}

	FMath::RandInit(FDateTime::Now().GetTicks());
	Numbers = Numbers.FilterByPredicate([](int32 Num) {return Num > 0; });

	FString Result;
	for (int32 i = 0; i < 3; ++i)
	{
		int32 Index = FMath::RandRange(0, Numbers.Num() - 1);
		Result.Append(FString::FromInt(Numbers[Index]));
		Numbers.RemoveAt(Index);
	}

	return Result;
}

bool ANumberBaseballGameModeBase::IsValidGuessNumber(const FString& InGuessNumberString)
{
	bool bCanPlay = false;

	do
	{
		if (InGuessNumberString.Len() != 3)
		{
			break;
		}

		bool bIsUnique = true;
		TSet<TCHAR> UniqueDigits;
		for (TCHAR C : InGuessNumberString)
		{
			if (FChar::IsDigit(C) == false || C == '0')
			{
				bIsUnique = false;
				break;
			}

			UniqueDigits.Add(C);
		}

		if (bIsUnique == false)
		{
			break;
		}

		bCanPlay = true;
	} while (false);

	return bCanPlay;
}

FString ANumberBaseballGameModeBase::MakeGuessResult(const FString& SecretNumberString, const FString& GuessNumberString, int32& OutStrikeCount)
{
	int32 StrikeCount = 0, BallCount = 0;

	for (int32 i = 0; i < 3; ++i)
	{
		if (SecretNumberString[i] == GuessNumberString[i])
		{
			StrikeCount++;
		}
		else
		{
			FString PlayerGuessChar = FString::Printf(TEXT("%c"), GuessNumberString[i]);
			if (SecretNumberString.Contains(PlayerGuessChar))
			{
				BallCount++;
			}
		}
	}

	OutStrikeCount = StrikeCount;

	if (StrikeCount == 0 && BallCount == 0)
	{
		return TEXT("OUT");
	}

	return FString::Printf(TEXT("%dS%dB"), StrikeCount, BallCount);
}

void ANumberBaseballGameModeBase::UpGuessCount(ANumberBaseballPlayerController* InChattingPlayerController)
{
	if (!IsValid(InChattingPlayerController))
	{
		return;
	}

	ANumberBaseballPlayerState* NBPS = InChattingPlayerController->GetPlayerState<ANumberBaseballPlayerState>();
	if (!IsValid(NBPS))
	{
		return;
	}

	NBPS->CurrentNumberCount++;
	NBPS->RemainingSeconds = 0;

	const int32 NumPlayers = AllPlayerControllers.Num();
	if (NumPlayers <= 0)
	{
		return;
	}

	if (NumPlayers == 1)
	{
		NBPS->RemainingSeconds = static_cast<int32>(TurnTimeLimit);
		CurrentTurnPlayer = InChattingPlayerController;
	}
	else
	{
		const int32 CurrentIndex = AllPlayerControllers.IndexOfByKey(InChattingPlayerController);
		if (CurrentIndex != INDEX_NONE)
		{
			const int32 NextIndex = (CurrentIndex + 1) % NumPlayers;
			ANumberBaseballPlayerController* NextPC = AllPlayerControllers[NextIndex];
			if (IsValid(NextPC))
			{
				ANumberBaseballPlayerState* NextPS = NextPC->GetPlayerState<ANumberBaseballPlayerState>();
				if (IsValid(NextPS))
				{
					NextPS->RemainingSeconds = static_cast<int32>(TurnTimeLimit);
					CurrentTurnPlayer = NextPC;
				}
			}
		}
	}

	UpdateAllPlayersTimerAlarm();
}

void ANumberBaseballGameModeBase::ResetGame()
{
	NumberRightAnswer = MakeSecretNumber();
	UE_LOG(LogTemp, Warning, TEXT("%s"), *NumberRightAnswer);

	bIsRoundActive = true;
	CurrentTurnPlayer = nullptr;

	for (const auto& NumberBaseballPlayerContoller : AllPlayerControllers)
	{
		ANumberBaseballPlayerState* NBPS = NumberBaseballPlayerContoller->GetPlayerState<ANumberBaseballPlayerState>();
		if (IsValid(NBPS) == true)
		{
			NBPS->CurrentNumberCount = 0;
			NBPS->RemainingSeconds = 0;
		}
		if (IsValid(NumberBaseballPlayerContoller) == true)
		{
			NumberBaseballPlayerContoller->AlarmText = FText::FromString(TEXT("New Round!"));
		}
	}
}

void ANumberBaseballGameModeBase::JudgeGame(ANumberBaseballPlayerController* InChattingPlayerController, int StrikeCount)
{
	if (StrikeCount == 3)
	{
		ANumberBaseballPlayerState* NBPS = InChattingPlayerController->GetPlayerState<ANumberBaseballPlayerState>();

		if (IsValid(NBPS) == true)
		{
			FString ConnetionMessage = NBPS->PlayerNickName + TEXT("You Win!");

			for (const auto& NumberBaseballPlayerController : AllPlayerControllers)
			{
				if (IsValid(NumberBaseballPlayerController) == true)
				{
					NumberBaseballPlayerController->AlarmText = FText::FromString(ConnetionMessage);
				}
			}
			bIsRoundActive = false;
			CurrentTurnPlayer = nullptr;

			GetWorldTimerManager().SetTimer(RoundResetTimerHandle, this, &ANumberBaseballGameModeBase::ResetGame, RoundResetDelay, false);
		}
	}
	else
	{
		ANumberBaseballPlayerState* NBPS = InChattingPlayerController->GetPlayerState<ANumberBaseballPlayerState>();

		if (IsValid(NBPS) == true)
		{
			if (NBPS->CurrentNumberCount >= NBPS->MaxNumberCount)
			{
				for (const auto& NumberBaseballPlayerController : AllPlayerControllers)
				{
					if (IsValid(NumberBaseballPlayerController) == true)
					{
						NumberBaseballPlayerController->AlarmText = FText::FromString(TEXT("Draw..."));
					}
				}
				bIsRoundActive = false;
				CurrentTurnPlayer = nullptr;

				GetWorldTimerManager().SetTimer(RoundResetTimerHandle, this, &ANumberBaseballGameModeBase::ResetGame, RoundResetDelay, false);
			}
		}
	}
}

void ANumberBaseballGameModeBase::TickTurnTimer()
{
	if (!bIsRoundActive)
	{
		return;
	}

	for (ANumberBaseballPlayerController* NBPC : AllPlayerControllers)
	{
		if (!IsValid(NBPC))
		{
			continue;
		}
		if (NBPC != CurrentTurnPlayer)
		{
			continue;
		}

		ANumberBaseballPlayerState* NBPS = NBPC->GetPlayerState<ANumberBaseballPlayerState>();
		if (!IsValid(NBPS))
		{
			continue;
		}
		if (NBPS->RemainingSeconds > 0)
		{
			NBPS->RemainingSeconds--;

			if (NBPS->RemainingSeconds <= 0)
			{
				NBPS->CurrentNumberCount++;
					
				FString TimeOverMessage = NBPS->PlayerNickName + TEXT("Time Over!");
				for (ANumberBaseballPlayerController* OtherPC : AllPlayerControllers)
				{
					if (IsValid(OtherPC) == true)
					{
						OtherPC->AlarmText = FText::FromString(TimeOverMessage);
					}
				}

				int32 DummyStrikeCount = 0;
				JudgeGame(NBPC, DummyStrikeCount);

				if (bIsRoundActive)
				{
					const int32 NumPlayers = AllPlayerControllers.Num();
					if (NumPlayers > 0)
					{
						if (NumPlayers == 1)
						{
							NBPS->RemainingSeconds = static_cast<int32>(TurnTimeLimit);
							CurrentTurnPlayer = NBPC;
						}
						else
						{
							const int32 CurrentIndex = AllPlayerControllers.IndexOfByKey(NBPC);
							if (CurrentIndex != INDEX_NONE)
							{
								const int32 NextIndex = (CurrentIndex + 1) % NumPlayers;
								ANumberBaseballPlayerController* NextPC = AllPlayerControllers[NextIndex];
								if (IsValid(NextPC))
								{
									ANumberBaseballPlayerState* NextPS = NextPC->GetPlayerState<ANumberBaseballPlayerState>();
									if (IsValid(NextPS))
									{
										NextPS->RemainingSeconds = static_cast<int32>(TurnTimeLimit);
										CurrentTurnPlayer = NextPC;
									}
								}
							}
						}
					}
				}

				UpdateAllPlayersTimerAlarm();
				return;
			}
		}
	}

	if (bIsRoundActive)
	{
		UpdateAllPlayersTimerAlarm();
	}
}

void ANumberBaseballGameModeBase::UpdateAllPlayersTimerAlarm()
{
	FString CombinedMessage;

	for (ANumberBaseballPlayerController* NBPC : AllPlayerControllers)
	{
		if (!IsValid(NBPC))
		{
			continue;
		}

		ANumberBaseballPlayerState* NBPS = NBPC->GetPlayerState<ANumberBaseballPlayerState>();
		if (!IsValid(NBPS))
		{
			continue;
		}

		if (NBPS->RemainingSeconds <= 0)
		{
			continue;
		}

		FString Line = FString::Printf(TEXT("%s (%d / %d) - %d sec"), *NBPS->PlayerNickName, NBPS->CurrentNumberCount, NBPS->MaxNumberCount, NBPS->RemainingSeconds);
		if (!CombinedMessage.IsEmpty())
		{
			CombinedMessage.Append(TEXT("\n"));
		}
		CombinedMessage.Append(Line);
	}

	if (CombinedMessage.IsEmpty())
	{
		return;
	}

	for (ANumberBaseballPlayerController* NBPC : AllPlayerControllers)
	{
		if (IsValid(NBPC))
		{
			NBPC->AlarmText = FText::FromString(CombinedMessage);
		}
	}
}

