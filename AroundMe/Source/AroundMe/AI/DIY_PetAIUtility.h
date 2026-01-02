#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "DIY_MainPet_Defines.h"
#include "DIY_PetAIUtility.generated.h"

USTRUCT(BlueprintType)
struct FDIY_RoutineScoreDetails
{
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly)
    float NatureScore = 0.0f;
    UPROPERTY(BlueprintReadOnly)
    float SurvivalScore = 0.0f;
    UPROPERTY(BlueprintReadOnly)
    float RhythmScore = 0.0f;
    UPROPERTY(BlueprintReadOnly)
    float TagScore = 0.0f;
    UPROPERTY(BlueprintReadOnly)
    float TotalScore = 0.0f;
};

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

    /**
     * 核心评估函数：计算某个 Routine 在当前 AI 状态下的吸引力
     */
    UFUNCTION(BlueprintPure, Category = "Pet|AI|Utility")
    static float CalculateRoutineScore(
        const FDIY_PetSoulContext &PetSoulContext,
        const FDIY_RoutineConfig &RoutineConfig,
        int32 CurrentHour,
        FDIY_RoutineScoreDetails &OutDetails);
};