#pragma once

#include "CoreMinimal.h"
#include "PropHuntTypes.generated.h"

UENUM(BlueprintType)
enum class EPropHuntRole : uint8
{
    Hunter     UMETA(DisplayName = "Hunter"),
    Ghost      UMETA(DisplayName = "Ghost"),
    Spectator  UMETA(DisplayName = "Spectator")
};

UENUM(BlueprintType)
enum class EPropHuntMatchPhase : uint8
{
    WaitingForPlayers  UMETA(DisplayName = "Waiting For Players"),
    InProgress         UMETA(DisplayName = "In Progress"),
    Ended              UMETA(DisplayName = "Ended")
};

UENUM(BlueprintType)
enum class EPropHuntQTEKey : uint8
{
    Space  UMETA(DisplayName = "Space"),
    F      UMETA(DisplayName = "F"),
    Shift  UMETA(DisplayName = "Shift")
};
