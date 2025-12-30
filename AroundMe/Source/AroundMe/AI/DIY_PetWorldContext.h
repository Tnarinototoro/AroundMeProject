#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "DIY_PetWorldContext.generated.h"

USTRUCT(BlueprintType)
struct FDIY_PetWorldContext
{
    GENERATED_BODY()

    // --- 1. 环境感知 (Environment) ---
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float Temperature = 25.0f; // 温度

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float Humidity = 0.5f; // 湿度

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float LightIntensity = 1.0f; // 光照强度

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FGameplayTag CurrentWeather; // 使用之前说的 Env.Weather.XXX 天气类型

    // --- 2. 社交与进度 (Social & Progress) ---
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float UserAffection = 0.0f; // -100 到 100 的好感度

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool bIsUserRecognized = false; // 是否认知到User

    // 进度/解锁功能使用 Tag 容器最方便
    // 例如：Progress.MachineRepaired, Progress.Function.MiningUnlocked
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FGameplayTagContainer ProgressTags;

    // --- 3. 资源与装备 (Resources & Equipment) ---
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 ConstantGoldEnergy = 0; // 恒金能量

    // 装备的能力标签：Ability.Tool.Drill, Ability.Tool.GrabbingHand
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FGameplayTagContainer EquipmentAbilities;
};