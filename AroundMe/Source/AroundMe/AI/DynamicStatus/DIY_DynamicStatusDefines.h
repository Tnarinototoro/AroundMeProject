#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "DIY_DynamicStatusDefines.generated.h"

USTRUCT(BlueprintType)
struct FDIY_DynamicStatus
{
    GENERATED_BODY()

    // --- 1. 基础消耗数值 (百分比 0.0 - 100.0) ---

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Status")
    float Hunger = 100.0f; // 饥饿度：越低越想吃

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Status")
    float Nutrition = 100.0f; // 营养均衡度：影响长期健康

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Status")
    float Stamina = 100.0f; // 体力：干活消耗

    // --- 2. 健康状态 (用 Gameplay Tags 标记) ---

    // 精神疾病: Status.Mental.Depression (抑郁), Status.Mental.Mania (狂躁)
    // 物理疾病: Status.Physical.Fever (发烧), Status.Physical.Disabled (残疾)
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Status")
    FGameplayTagContainer HealthTags;

    // --- 3. 辅助计算方法 ---

    // 快速判断是否有病
    bool IsSick() const { return HealthTags.HasTag(FGameplayTag::RequestGameplayTag("Status.Physical")); }
};