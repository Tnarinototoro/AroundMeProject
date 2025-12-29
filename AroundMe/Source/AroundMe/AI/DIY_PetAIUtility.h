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
    // --- 基础判断接口 ---

    UFUNCTION(BlueprintPure, Category = "Pet|Nature")
    static bool IsExtravert(EDIY_BornNature Nature) { return ((uint8)Nature & (uint8)EDIY_BornNature::E_Mask) != 0; }

    UFUNCTION(BlueprintPure, Category = "Pet|Nature")
    static bool IsIntuitive(EDIY_BornNature Nature) { return ((uint8)Nature & (uint8)EDIY_BornNature::N_Mask) != 0; }

    UFUNCTION(BlueprintPure, Category = "Pet|Nature")
    static bool IsFeeling(EDIY_BornNature Nature) { return ((uint8)Nature & (uint8)EDIY_BornNature::F_Mask) != 0; }

    UFUNCTION(BlueprintPure, Category = "Pet|Nature")
    static bool IsPerceiving(EDIY_BornNature Nature) { return ((uint8)Nature & (uint8)EDIY_BornNature::P_Mask) != 0; }

    // --- 辅助工具 ---

    /** 将人格转换为字符串，方便 Debug 显示 (如 "INTJ") */
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

    /** 权重计算辅助：匹配返回 1，不匹配返回 -1 */
    UFUNCTION(BlueprintPure, Category = "Pet|Nature")
    static float GetDimensionBias(EDIY_BornNature Nature, EDIY_BornNature Mask)
    {
        return (((uint8)Nature & (uint8)Mask) != 0) ? 1.0f : -1.0f;
    }
    /** 权重计算辅助：匹配返回 1，不匹配返回 -1 */
    UFUNCTION(BlueprintPure, Category = "Pet|Nature")
    float CalculateFixedRoutinePreference_BornNature(EDIY_BornNature PetNature, const FDIY_FixedRoutineTaskConfig& Config)
    {
        float Score = 100.0f; // 基础分

        // 使用宏或函数库快速累加
        Score += UDIY_PetAIUtility::GetDimensionBias(PetNature, EDIY_BornNature::E_Mask) * Config.E_Bias;
        Score += UDIY_PetAIUtility::GetDimensionBias(PetNature, EDIY_BornNature::N_Mask) * Config.N_Bias;

        return Score;
    }
};