#include "NumberBaseballPlayerState.h"
#include "Net/UnrealNetwork.h"

ANumberBaseballPlayerState::ANumberBaseballPlayerState()
	: PlayerNickName(TEXT("None")),
	CurrentNumberCount(0),
	MaxNumberCount(5),
	RemainingSeconds(0)
{
	bReplicates = true;
}

void ANumberBaseballPlayerState::GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ThisClass, PlayerNickName);
	DOREPLIFETIME(ThisClass, CurrentNumberCount);
	DOREPLIFETIME(ThisClass, MaxNumberCount);
	DOREPLIFETIME(ThisClass, RemainingSeconds);
}

FString ANumberBaseballPlayerState::GetPlayerInfoString()
{
	FString PlayerInfoString = PlayerNickName + TEXT("(") + FString::FromInt(CurrentNumberCount) + TEXT("/") + FString::FromInt(MaxNumberCount) + TEXT(")");
	return PlayerInfoString;
}
