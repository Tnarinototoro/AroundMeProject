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

    // --- 2. 社交与进度 (Social & Progress) ---
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float UserAffection = 0.0f; // -100 到 100 的好感度

    UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (UIMin = "0", UIMax = "23"))
    int32 CurrentHour = 0;

    // 进度/解锁功能使用 Tag 容器最方便 所以非AI本身的Tags
    // 例如：Progress.MachineRepaired, Progress.Function.MiningUnlocked
    //// 装备的能力标签：Ability.Tool.Drill, Ability.Tool.GrabbingHand
    // 使用之前说的 Env.Weather.XXX 天气类型
    //  是否认知到User
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FGameplayTagContainer ObjectiveTags;

    // --- 3. 资源与装备 (Resources & Equipment) ---
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float ConstantGoldEnergy = 0.f; // 恒金能量
};