#include "NumberBaseballGameStateBase.h"
#include "Kismet/GameplayStatics.h"
#include "NumberBaseballPlayerController.h"

void ANumberBaseballGameStateBase::MulticastRPCLogin_Implementation(const FString& PlayerNameString)
{
	if (HasAuthority() == false)
	{
		APlayerController* PC = UGameplayStatics::GetPlayerController(GetWorld(), 0);
		if (IsValid(PC) == true)
		{
			ANumberBaseballPlayerController* NBPC = Cast<ANumberBaseballPlayerController>(PC);
			if (IsValid(NBPC) == true)
			{
				FString MessageAlert = PlayerNameString + TEXT("In Joing Game");
				NBPC->DisplayChattingMessage(MessageAlert);
			}
		}
	}
}
