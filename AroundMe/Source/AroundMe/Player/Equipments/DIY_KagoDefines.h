// All rights reserved to ShadowCandle Studio

#pragma once

#include "CoreMinimal.h"
#include "DIY_KagoDefines.generated.h"


UENUM(BlueprintType)
enum class EDIY_KagoType : uint8
{
    RustOld_Type UMETA(Description = "锈迹斑斑的筐子"),

    
    Count
};

UENUM(BlueprintType)
enum class EDIY_KagoState_Type : uint8
{
    Idle UMETA(Description = "idle state"),



    Count

};
