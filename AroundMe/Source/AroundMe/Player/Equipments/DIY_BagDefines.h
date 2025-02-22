// All rights reserved to ShadowCandle Studio

#pragma once

#include "CoreMinimal.h"
#include "DIY_BagDefines.generated.h"


UENUM(BlueprintType)
enum class EDIY_BagType : uint8
{
    RustOld_Type UMETA(Description = "锈迹斑斑的背包"),
    

    Count

};

UENUM(BlueprintType)
enum class EDIY_BagState_Type : uint8
{
    Idle UMETA(Description = "idle state "),
   
    Count

};
