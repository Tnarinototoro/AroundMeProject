#include "PropHuntPlayerState.h"
#include "Net/UnrealNetwork.h"

APropHuntPlayerState::APropHuntPlayerState()
{
}

void APropHuntPlayerState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    DOREPLIFETIME(APropHuntPlayerState, TeamRole);
}
