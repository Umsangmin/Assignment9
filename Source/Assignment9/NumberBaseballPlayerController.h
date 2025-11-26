#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "NumberBaseballPlayerController.generated.h"

class UChatInputWidget;

UCLASS()
class ASSIGNMENT9_API ANumberBaseballPlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:
	ANumberBaseballPlayerController();

	virtual void GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const override;

	virtual void BeginPlay() override;

	void SetChattingMessage(const FString& InChattingMessage);

	void DisplayChattingMessage(const FString& InChattingMessage);

	UFUNCTION(Client, Reliable)
	void ClientRPC_PrintChatting(const FString& InChattingMessage);

	UFUNCTION(Server, Reliable)
	void ServerRPC_PrintChatting(const FString& InChattingMessage);

protected:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UChatInputWidget> ChatInputWidgetClass;

	UPROPERTY()
	TObjectPtr<UChatInputWidget> ChatInputWidgetInstance;

	FString ChattingMessage;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UUserWidget> AlarmTextWidgetClass;

	UPROPERTY()
	TObjectPtr<UUserWidget> AlarmTextWidgetInstance;

public:
	UPROPERTY(Replicated, BlueprintReadOnly)
	FText AlarmText;
};
