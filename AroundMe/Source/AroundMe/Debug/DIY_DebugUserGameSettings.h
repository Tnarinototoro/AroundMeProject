// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "UObject/Object.h"
#include "DIY_DebugUserGameSettings.generated.h"

USTRUCT(BlueprintType)
struct FDIY_DebugComboKey
{
    GENERATED_BODY()

    FDIY_DebugComboKey() {}
    FDIY_DebugComboKey(TArray<FKey> &&InKeys)
        : Keys(MoveTemp(InKeys))
    {
    }

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FKey> Keys;

    bool IsJustPressedAny(APlayerController *PC) const;
    bool IsPressedAll(APlayerController *PC) const;

    bool ShouldTrigger(APlayerController *PC) const;
};

USTRUCT(BlueprintType)
struct FDIY_DebugComboKeyArray
{
    GENERATED_BODY()
    FDIY_DebugComboKeyArray() {}
    FDIY_DebugComboKeyArray(TArray<FDIY_DebugComboKey> &&InComboKeys)
        : ComboKeys(MoveTemp(InComboKeys))
    {
    }
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FDIY_DebugComboKey> ComboKeys;
    bool ShouldTrigger(APlayerController *PC) const;
};

UCLASS(Config = Game, ProjectUserConfig)
class AROUNDME_API UDIY_DebugUserGameSettings : public UObject
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, Category = "Debug")
    FGameplayTagContainer DebugGameplayTags;

    UPROPERTY(EditAnywhere, Config, Category = "Debug")
    bool bHideImGui = false;

    UPROPERTY(EditAnywhere, Config, Category = "Debug")
    bool bUseLastWindowState = true;

    UPROPERTY(EditAnywhere, Config, Category = "Debug")
    float ImGuiDPIScale = 1.0f;
};

UCLASS(Config = Game, defaultconfig)
class AROUNDME_API UDIY_DebugGameSettings : public UObject
{
    GENERATED_BODY()

public:
    UDIY_DebugGameSettings();

    UPROPERTY(EditAnywhere, Config, Category = "Debug")
    FDIY_DebugComboKeyArray EnableImGuiShortcuts;

    UPROPERTY(EditAnywhere, Config, Category = "Debug")
    FDIY_DebugComboKeyArray EnableWindowsShortcuts;

    UPROPERTY(EditAnywhere, Config, Category = "Debug")
    FDIY_DebugComboKeyArray CaptureKeyMouseShortcuts;

    UPROPERTY(EditAnywhere, Config, Category = "Debug")
    FDIY_DebugComboKeyArray CaptureGamepadShortcuts;
};
