// All rights reserved to ShadowCandle Studio

#pragma once

#include "CoreMinimal.h"
#include "DIY_MainCamDefines.generated.h"


UENUM(BlueprintType)
enum class EDIY_MainBaseCamLocType : uint8
{
    Type_Around_Cam_outSide,
    Type_0_Lobby UMETA(Description = "大厅"),
    Type_1_Attic UMETA(Description = "阁楼吊顶"),
    Type_2_Test UMETA(Description = "测试"),
    
    Count
};


UENUM(BlueprintType)
enum class EDIY_MainBaseLightLocType : uint8
{
    Type_0 ,
    Type_1 ,
    Type_2 ,
    Type_3 ,
    Type_4 ,
    Type_5 ,
    Count
};
