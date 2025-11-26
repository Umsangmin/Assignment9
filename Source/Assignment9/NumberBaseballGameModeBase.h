#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "NumberBaseballGameModeBase.generated.h"

class ANumberBaseballPlayerController;

UCLASS()
class ASSIGNMENT9_API ANumberBaseballGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
public:
	virtual void BeginPlay() override;

	virtual void OnPostLogin(AController* NewPlayer) override;

	void PrintChattingMessage(ANumberBaseballPlayerController* ChattingPlayerController, const FString& InChattingMessage);

	FString MakeSecretNumber();

	bool IsValidGuessNumber(const FString& InGuessNumberString);

	FString MakeGuessResult(const FString& SecretNumberString, const FString& GuessNumberString, int32& OutStrikeCount);

	void UpGuessCount(ANumberBaseballPlayerController* InChattingPlayerController);

	void ResetGame();

	void JudgeGame(ANumberBaseballPlayerController* InChattingPlayerController, int StrikeCount);

protected:
	FString NumberRightAnswer;

	TArray<TObjectPtr<ANumberBaseballPlayerController>> AllPlayerControllers;

	FTimerHandle RoundResetTimerHandle;

	UPROPERTY(EditDefaultsOnly, Category = "Game")
	float RoundResetDelay = 5.0f;

	UPROPERTY(EditDefaultsOnly, Category = "Game")
	float TurnTimeLimit = 20.0f;

	FTimerHandle TurnTickTimerHandle;

	bool bIsRoundActive = true;

	UPROPERTY()
	TObjectPtr<ANumberBaseballPlayerController> CurrentTurnPlayer;

	UFUNCTION()
	void TickTurnTimer();

	void UpdateAllPlayersTimerAlarm();
};
