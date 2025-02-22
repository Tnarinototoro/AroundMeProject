// All rights reserved to ShadowCandle Studio

#pragma once

#include "CoreMinimal.h"
#include "DIY_CapDefines.generated.h"


UENUM(BlueprintType)
enum class EDIY_CapType : uint8
{
    Original_Type UMETA(Description = "初始冒险者款"),

    
    Count
};

UENUM(BlueprintType)
enum class EDIY_CapState_Type : uint8
{
    Idle UMETA(Description = "idle state"),



    Count

};
