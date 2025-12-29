// All rights reserved to ShadowCandle Studio
#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Engine/DataTable.h"
#include "DIY_AfterBornExpDefines.generated.h"

// 规则类型：是喜欢、讨厌、还是绝对禁止？
UENUM(BlueprintType)
enum class EDIY_AffectionType : uint8
{
    Preference,   // 偏好 (数值修正：-100 到 100)
    Absolute      // 绝对禁忌/强制 (直接覆盖行为树，不参与权重计算)
};

USTRUCT(BlueprintType)
struct FDIY_ExperienceRule
{
    GENERATED_BODY()

    // 匹配的标签（可以是 Item、天气、或者行为的 Tag）
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FGameplayTag SubjectTag;

    // 规则类型
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    EDIY_AffectionType Type = EDIY_AffectionType::Preference;

    // 具体分值 (如果是 Absolute 类型，100 代表绝对要做，-100 代表绝对不做)
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float Score = 0.0f;

    // 备注（策划用：比如“因为小时候被菠菜噎过”）
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString Memo;
};

