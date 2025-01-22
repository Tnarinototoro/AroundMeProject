#pragma once

#include "CoreMinimal.h"
#include "DIY_RobotHand_Head_Defines.generated.h"

UENUM(BlueprintType)
enum class EDIY_RobotHand_HeadType : uint8
{
    Claw_Type UMETA(Description = "抓手类型"),
    Drill_Type UMETA(Description = "钻头类型"),

    Count

};

UENUM(BlueprintType)
enum class EDIY_RobotHand_Head_State_Type : uint8
{
    Idle UMETA(Description = "turned off state"),
    Turning_On UMETA(Description = "idle to running lerping "),
    Running UMETA(Description = "working"),
    Turning_Off UMETA(Description = "working to idle lerping"),
    Count

};
