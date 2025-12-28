// All rights reserved to ShadowCandle Studio

#pragma once

#include "CoreMinimal.h"
#include "DIY_UserDefines.generated.h"

USTRUCT(BlueprintType)
struct FDIY_TouchInfo
{
    GENERATED_BODY()

    bool bIsPressed = false;
    FVector2D StartLoc = FVector2D::ZeroVector;
    FVector2D CurrentLoc = FVector2D::ZeroVector;
    FVector2D LastFrameLoc = FVector2D::ZeroVector;
    double PressTime = 0.0;

    FVector2D GetDelta() const { return CurrentLoc - LastFrameLoc; }
    FVector2D GetTotalSweep() const { return CurrentLoc - StartLoc; }
};