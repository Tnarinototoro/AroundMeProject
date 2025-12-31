// All rights reserved to ShadowCandle Studio
#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Engine/DataTable.h"
#include "DIY_AfterBornExpDefines.generated.h"

UENUM(BlueprintType)
enum class EDIY_AffectionType : uint8
{
    Preference,
    Absolute
};

USTRUCT(BlueprintType)
struct FDIY_ExperienceRule
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FGameplayTag SubjectTag;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    EDIY_AffectionType Type = EDIY_AffectionType::Preference;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float Score = 0.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString Memo;
};
