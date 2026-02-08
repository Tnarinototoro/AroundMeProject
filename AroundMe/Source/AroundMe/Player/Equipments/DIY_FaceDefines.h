// All rights reserved to ShadowCandle Studio

#pragma once

#include "CoreMinimal.h"
#include "DIY_FaceDefines.generated.h"

UENUM(BlueprintType)
enum class EDIY_FaceType : uint8
{
    Default UMETA(Description = "default idle"),
    Serious  UMETA(Description = "严肃认真"), 
    Speechless UMETA(Description = "无语死了"),
    Smile  UMETA(Description = "微笑"),
    Angery  UMETA(Description = "愤怒"),

    Count

};


