#pragma once

#include "CoreMinimal.h"
#include "DIY_RobotHand_Defines.generated.h"

UENUM(BlueprintType)
enum class EDIY_RobotHandType : uint8
{
    RustOld_Type UMETA(Description = "锈迹斑斑的手臂"),
    PlantTree_Type UMETA(Description = "生化植物手臂"),

    Count

};


UENUM(BlueprintType)
enum class EDIY_RobotHand_State_Type : uint8
{
    Idle UMETA(Description = "turned off state"),
    Lerping_To_RunTask UMETA(Description = "starting the hand to work"),
    Running_Task UMETA(Description = "executing some kind of task"),
    Lerping_To_Idle UMETA(Description = "turning the hand to idle"),
    Count

};
