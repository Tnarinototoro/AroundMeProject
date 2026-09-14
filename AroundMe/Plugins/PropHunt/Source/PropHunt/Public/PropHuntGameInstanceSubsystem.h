#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "PropHuntTypes.h"
#include "PropHuntGameInstanceSubsystem.generated.h"

// 跨地图（ServerTravel）保存选边结果。GameInstance 是 persistent 的，Subsystem 随其存活。
UCLASS()
class PROPHUNT_API UPropHuntGameInstanceSubsystem : public UGameInstanceSubsystem
{
    GENERATED_BODY()

public:
    void SetTeamSelection(const FString& PlayerName, EPropHuntRole Role);
    EPropHuntRole GetTeamSelection(const FString& PlayerName) const;

private:
    TMap<FString, EPropHuntRole> TeamSelections;
};
