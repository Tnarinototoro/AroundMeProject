#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "DIY_MainPet_Defines.h"
#include "Task/DIY_TaskBasicDefines.h"
#include "DIY_PetAIUtility.generated.h"

UCLASS()
class AROUNDME_API UDIY_PetAIUtility : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category = "Pet|Nature")
    static bool IsExtravert(EDIY_BornNature Nature) { return ((uint8)Nature & (uint8)EDIY_BornNature::E_Mask) != 0; }

    UFUNCTION(BlueprintPure, Category = "Pet|Nature")
    static bool IsIntuitive(EDIY_BornNature Nature) { return ((uint8)Nature & (uint8)EDIY_BornNature::N_Mask) != 0; }

    UFUNCTION(BlueprintPure, Category = "Pet|Nature")
    static bool IsFeeling(EDIY_BornNature Nature) { return ((uint8)Nature & (uint8)EDIY_BornNature::F_Mask) != 0; }

    UFUNCTION(BlueprintPure, Category = "Pet|Nature")
    static bool IsPerceiving(EDIY_BornNature Nature) { return ((uint8)Nature & (uint8)EDIY_BornNature::P_Mask) != 0; }

    UFUNCTION(BlueprintPure, Category = "Pet|Nature")
    static FString NatureToString(EDIY_BornNature Nature)
    {
        FString Result = "";
        Result += IsExtravert(Nature) ? "E" : "I";
        Result += IsIntuitive(Nature) ? "N" : "S";
        Result += IsFeeling(Nature) ? "F" : "T";
        Result += IsPerceiving(Nature) ? "P" : "J";
        return Result;
    }

    UFUNCTION(BlueprintPure, Category = "Pet|Nature")
    static float GetDimensionBias(EDIY_BornNature Nature, EDIY_BornNature Mask)
    {
        return (((uint8)Nature & (uint8)Mask) != 0) ? 1.0f : -1.0f;
    }

    UFUNCTION(BlueprintPure, Category = "Pet|Nature")
    float CalculateFixedRoutinePreference_BornNature(EDIY_BornNature PetNature, const FDIY_FixedRoutineTaskConfig &Config)
    {
        float Score = 100.0f;

        Score += UDIY_PetAIUtility::GetDimensionBias(PetNature, EDIY_BornNature::E_Mask) * Config.E_Bias;
        Score += UDIY_PetAIUtility::GetDimensionBias(PetNature, EDIY_BornNature::N_Mask) * Config.N_Bias;

        return Score;
    }
};