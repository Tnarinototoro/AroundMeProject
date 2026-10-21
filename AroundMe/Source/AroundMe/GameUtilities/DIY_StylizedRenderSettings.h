#pragma once

#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "UObject/SoftObjectPath.h"
#include "DIY_StylizedRenderSettings.generated.h"

UCLASS(config = Game, defaultconfig, meta = (DisplayName = "AroundMe Stylized Render"))
class AROUNDME_API UDIY_StylizedRenderSettings : public UDeveloperSettings
{
    GENERATED_BODY()

public:
    UDIY_StylizedRenderSettings(const FObjectInitializer &ObjectInitializer);

    static const UDIY_StylizedRenderSettings *Get();

    UPROPERTY(EditAnywhere, config, Category = "Runtime")
    bool bEnable = true;

    UPROPERTY(EditAnywhere, config, Category = "Runtime")
    bool bUseExistingWorldLighting = true;

    UPROPERTY(EditAnywhere, config, Category = "Runtime")
    bool bApplyPostProcess = true;

    UPROPERTY(EditAnywhere, config, Category = "Material", meta = (AllowedClasses = "MaterialParameterCollection"))
    FSoftObjectPath StyleParameterCollectionPath = FSoftObjectPath(TEXT("/Game/AroundMe/Rendering/MPC_AroundMeStylized.MPC_AroundMeStylized"));

    UPROPERTY(EditAnywhere, config, Category = "Material")
    bool bApplyMaterialParameters = true;

    UPROPERTY(EditAnywhere, config, Category = "Lighting")
    FRotator SunRotation = FRotator(-50.0f, -35.0f, 0.0f);

    UPROPERTY(EditAnywhere, config, Category = "Lighting", meta = (ClampMin = "0.0"))
    float SunIntensity = 4.0f;

    UPROPERTY(EditAnywhere, config, Category = "Lighting")
    FLinearColor SunColor = FLinearColor(1.0f, 0.88f, 0.72f, 1.0f);

    UPROPERTY(EditAnywhere, config, Category = "Lighting", meta = (ClampMin = "0.0"))
    float SkyIntensity = 0.8f;

    UPROPERTY(EditAnywhere, config, Category = "Lighting")
    FLinearColor SkyColor = FLinearColor(0.45f, 0.58f, 0.82f, 1.0f);

    UPROPERTY(EditAnywhere, config, Category = "Lighting", meta = (ClampMin = "0.0"))
    float ShadowDistance = 12000.0f;

    UPROPERTY(EditAnywhere, config, Category = "Atmosphere", meta = (ClampMin = "0.0"))
    float FogDensity = 0.006f;

    UPROPERTY(EditAnywhere, config, Category = "Atmosphere", meta = (ClampMin = "0.0"))
    float FogHeightFalloff = 0.2f;

    UPROPERTY(EditAnywhere, config, Category = "Atmosphere")
    float FogStartDistance = 1500.0f;

    UPROPERTY(EditAnywhere, config, Category = "Atmosphere")
    FLinearColor FogColor = FLinearColor(0.55f, 0.67f, 0.82f, 1.0f);

    UPROPERTY(EditAnywhere, config, Category = "Material")
    FLinearColor ShadowColor = FLinearColor(0.25f, 0.31f, 0.42f, 1.0f);

    UPROPERTY(EditAnywhere, config, Category = "Material")
    float ToonBandThreshold = 0.45f;

    UPROPERTY(EditAnywhere, config, Category = "Material", meta = (ClampMin = "0.001"))
    float ToonBandSoftness = 0.12f;

    UPROPERTY(EditAnywhere, config, Category = "Color")
    FVector4 ColorSaturation = FVector4(1.05f, 1.03f, 0.98f, 1.0f);

    UPROPERTY(EditAnywhere, config, Category = "Color")
    FVector4 ColorContrast = FVector4(1.04f, 1.04f, 1.04f, 1.0f);

    UPROPERTY(EditAnywhere, config, Category = "Color")
    FVector4 ColorGain = FVector4(1.02f, 1.0f, 0.97f, 1.0f);

    UPROPERTY(EditAnywhere, config, Category = "Color", meta = (ClampMin = "0.0", ClampMax = "1.0"))
    float ToneCurveAmount = 0.75f;

    UPROPERTY(EditAnywhere, config, Category = "Color", meta = (ClampMin = "0.0"))
    float BloomIntensity = 0.08f;

    UPROPERTY(EditAnywhere, config, Category = "Color")
    float ExposureBias = 0.0f;
};
