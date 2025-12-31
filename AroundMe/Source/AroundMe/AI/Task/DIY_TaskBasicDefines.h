// All rights reserved to ShadowCandle Studio

#pragma once

#include "CoreMinimal.h"
#include "DIY_TaskBasicDefines.generated.h"

USTRUCT(BlueprintType)
struct FDIY_FixedRoutineTaskConfig
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere)
    float E_Bias = 0.0f; 

    UPROPERTY(EditAnywhere)
    float N_Bias = 0.0f; 
    
};