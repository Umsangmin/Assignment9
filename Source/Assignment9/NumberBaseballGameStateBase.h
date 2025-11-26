#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "NumberBaseballGameStateBase.generated.h"

UCLASS()
class ASSIGNMENT9_API ANumberBaseballGameStateBase : public AGameStateBase
{
	GENERATED_BODY()
	
public:
	UFUNCTION(NetMulticast, Reliable)
	void MulticastRPCLogin(const FString& PlayerNameString = FString(TEXT("XXXXXXX")));
};
