#include "PropHuntGameInstanceSubsystem.h"

void UPropHuntGameInstanceSubsystem::SetTeamSelection(const FString& PlayerName, EPropHuntRole Role)
{
    TeamSelections.FindOrAdd(PlayerName) = Role;
}

EPropHuntRole UPropHuntGameInstanceSubsystem::GetTeamSelection(const FString& PlayerName) const
{
    const EPropHuntRole* Found = TeamSelections.Find(PlayerName);
    return Found ? *Found : EPropHuntRole::Spectator;
}
