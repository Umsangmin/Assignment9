#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "NumberBaseballPlayerState.generated.h"

UCLASS()
class ASSIGNMENT9_API ANumberBaseballPlayerState : public APlayerState
{
	GENERATED_BODY()

public:
	ANumberBaseballPlayerState();

	virtual void GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const override;

	FString GetPlayerInfoString();

public:
	UPROPERTY(Replicated)
	FString PlayerNickName;

	UPROPERTY(Replicated)
	int32 CurrentNumberCount;

	UPROPERTY(Replicated)
	int32 MaxNumberCount;
	
	UPROPERTY(Replicated, BlueprintReadOnly, Category = "Turn")
	int32 RemainingSeconds;
};
