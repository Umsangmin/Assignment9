#include "NumberBaseballPlayerController.h"
#include "ChatInputWidget.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "NumberBaseballGameModeBase.h"
#include "NumberBaseballPlayerState.h"
#include "EngineUtils.h"
#include "Net/UnrealNetwork.h"

ANumberBaseballPlayerController::ANumberBaseballPlayerController()
{
	bReplicates = true;
}

void ANumberBaseballPlayerController::GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ThisClass, AlarmText);
}

void ANumberBaseballPlayerController::BeginPlay()
{
	Super::BeginPlay();

	if (IsLocalController() == false)
	{
		return;
	}
	FInputModeUIOnly InputModeUIOnly;
	SetInputMode(InputModeUIOnly);

	if (IsValid(ChatInputWidgetClass) == true)
	{
		ChatInputWidgetInstance = CreateWidget<UChatInputWidget>(this, ChatInputWidgetClass);
		if (IsValid(ChatInputWidgetInstance) == true)
		{
			ChatInputWidgetInstance->AddToViewport();
		}
	}
	if (IsValid(AlarmTextWidgetClass) == true)
	{
		AlarmTextWidgetInstance = CreateWidget<UUserWidget>(this, AlarmTextWidgetClass);
		if (IsValid(AlarmTextWidgetInstance) == true)
		{
			AlarmTextWidgetInstance->AddToViewport();
		}
	}
}

void ANumberBaseballPlayerController::SetChattingMessage(const FString& InChattingMessage)
{
	ChattingMessage = InChattingMessage;

	if (IsLocalController() == true)
	{
		ANumberBaseballPlayerState* NBPS = GetPlayerState<ANumberBaseballPlayerState>();
		if (IsValid(NBPS) == true)
		{
			FString ConnetionMessage = NBPS->GetPlayerInfoString() + TEXT(": ") + InChattingMessage;

			ServerRPC_PrintChatting(ConnetionMessage);
		}
	}
}

void ANumberBaseballPlayerController::DisplayChattingMessage(const FString& InChattingMessage)
{
	UKismetSystemLibrary::PrintString(this, InChattingMessage, true, true, FLinearColor::White, 5.0f);
}

void ANumberBaseballPlayerController::ClientRPC_PrintChatting_Implementation(const FString& InChattingMessage)
{
	DisplayChattingMessage(InChattingMessage);
}

void ANumberBaseballPlayerController::ServerRPC_PrintChatting_Implementation(const FString& InChattingMessage)
{
	AGameModeBase* GM = UGameplayStatics::GetGameMode(this);
	if (IsValid(GM) == true)
	{
		ANumberBaseballGameModeBase* NBGM = Cast<ANumberBaseballGameModeBase>(GM);
		if (IsValid(NBGM) == true)
		{
			NBGM->PrintChattingMessage(this, InChattingMessage);
		}
	}
}
