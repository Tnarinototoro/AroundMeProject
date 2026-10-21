#include "DIY_StylizedRenderDirector.h"

#include "DIY_StylizedRenderSettings.h"
#include "Components/DirectionalLightComponent.h"
#include "Components/ExponentialHeightFogComponent.h"
#include "Components/PostProcessComponent.h"
#include "Components/SceneComponent.h"
#include "Components/SkyLightComponent.h"
#include "Engine/DirectionalLight.h"
#include "Engine/ExponentialHeightFog.h"
#include "Engine/SkyLight.h"
#include "EngineUtils.h"
#include "Materials/MaterialParameterCollection.h"
#include "Materials/MaterialParameterCollectionInstance.h"
#include "Math/RotationMatrix.h"
#include "UObject/SoftObjectPath.h"

namespace
{
    const FName StylizedSunDirectionName(TEXT("StylizedSunDirection"));
    const FName StylizedLightColorName(TEXT("StylizedLightColor"));
    const FName StylizedShadowColorName(TEXT("StylizedShadowColor"));
    const FName StylizedBandThresholdName(TEXT("StylizedBandThreshold"));
    const FName StylizedBandSoftnessName(TEXT("StylizedBandSoftness"));
}

ADIY_StylizedRenderDirector::ADIY_StylizedRenderDirector()
{
    PrimaryActorTick.bCanEverTick = false;

    Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    RootComponent = Root;

    OwnedSunLight = CreateDefaultSubobject<UDirectionalLightComponent>(TEXT("OwnedSunLight"));
    OwnedSunLight->SetupAttachment(Root);
    OwnedSunLight->SetMobility(EComponentMobility::Movable);
    OwnedSunLight->CastShadows = true;

    OwnedSkyLight = CreateDefaultSubobject<USkyLightComponent>(TEXT("OwnedSkyLight"));
    OwnedSkyLight->SetupAttachment(Root);
    OwnedSkyLight->SetMobility(EComponentMobility::Movable);
    OwnedSkyLight->bRealTimeCapture = false;

    OwnedFog = CreateDefaultSubobject<UExponentialHeightFogComponent>(TEXT("OwnedFog"));
    OwnedFog->SetupAttachment(Root);

    OwnedPostProcess = CreateDefaultSubobject<UPostProcessComponent>(TEXT("OwnedPostProcess"));
    OwnedPostProcess->SetupAttachment(Root);
    OwnedPostProcess->bUnbound = true;
    OwnedPostProcess->Priority = 1000.0f;
    OwnedPostProcess->BlendWeight = 1.0f;
}

void ADIY_StylizedRenderDirector::BeginPlay()
{
    Super::BeginPlay();

    ResolveWorldLighting();
    ResolveMaterialParameters();
    ApplyStyle();
}

bool ADIY_StylizedRenderDirector::IsStyleEnabled() const
{
    const UDIY_StylizedRenderSettings *Settings = UDIY_StylizedRenderSettings::Get();
    return Settings && Settings->bEnable;
}

void ADIY_StylizedRenderDirector::ResolveWorldLighting()
{
    if (bWorldLightingResolved || !GetWorld())
    {
        return;
    }

    ActiveSunLight = OwnedSunLight;
    ActiveSkyLight = OwnedSkyLight;
    ActiveFog = OwnedFog;

    const UDIY_StylizedRenderSettings *Settings = UDIY_StylizedRenderSettings::Get();
    if (Settings && Settings->bUseExistingWorldLighting)
    {
        for (TActorIterator<ADirectionalLight> It(GetWorld()); It; ++It)
        {
            if (UDirectionalLightComponent *Component = It->FindComponentByClass<UDirectionalLightComponent>())
            {
                ActiveSunLight = Component;
                break;
            }
        }

        for (TActorIterator<ASkyLight> It(GetWorld()); It; ++It)
        {
            if (USkyLightComponent *Component = It->FindComponentByClass<USkyLightComponent>())
            {
                ActiveSkyLight = Component;
                break;
            }
        }

        for (TActorIterator<AExponentialHeightFog> It(GetWorld()); It; ++It)
        {
            if (UExponentialHeightFogComponent *Component = It->FindComponentByClass<UExponentialHeightFogComponent>())
            {
                ActiveFog = Component;
                break;
            }
        }
    }

    SetOwnedLightingVisibility(
        ActiveSunLight.Get() == OwnedSunLight ||
        ActiveSkyLight.Get() == OwnedSkyLight ||
        ActiveFog.Get() == OwnedFog);
    bWorldLightingResolved = true;
}

void ADIY_StylizedRenderDirector::ResolveMaterialParameters()
{
    if (bMaterialParametersResolved)
    {
        return;
    }

    const UDIY_StylizedRenderSettings *Settings = UDIY_StylizedRenderSettings::Get();
    if (Settings && !Settings->StyleParameterCollectionPath.IsNull())
    {
        ActiveParameterCollection = Cast<UMaterialParameterCollection>(
            Settings->StyleParameterCollectionPath.TryLoad());
    }

    bMaterialParametersResolved = true;
}

void ADIY_StylizedRenderDirector::SetOwnedLightingVisibility(bool bVisible)
{
    OwnedSunLight->SetVisibility(ActiveSunLight.Get() == OwnedSunLight && bVisible);
    OwnedSkyLight->SetVisibility(ActiveSkyLight.Get() == OwnedSkyLight && bVisible);
    OwnedFog->SetVisibility(ActiveFog.Get() == OwnedFog && bVisible);
}

void ADIY_StylizedRenderDirector::ApplyStyle()
{
    const UDIY_StylizedRenderSettings *Settings = UDIY_StylizedRenderSettings::Get();
    if (!Settings)
    {
        return;
    }

    ResolveWorldLighting();

    if (!Settings->bEnable)
    {
        SetOwnedLightingVisibility(false);
        OwnedPostProcess->SetVisibility(false);
        return;
    }

    SetOwnedLightingVisibility(true);
    ApplyLighting();
    ApplyAtmosphere();

    if (Settings->bApplyMaterialParameters)
    {
        ApplyMaterialParameters();
    }

    if (Settings->bApplyPostProcess)
    {
        ApplyPostProcess();
        OwnedPostProcess->SetVisibility(true);
    }
    else
    {
        OwnedPostProcess->SetVisibility(false);
    }
}

void ADIY_StylizedRenderDirector::ApplyLighting()
{
    const UDIY_StylizedRenderSettings *Settings = UDIY_StylizedRenderSettings::Get();
    if (!Settings)
    {
        return;
    }

    if (UDirectionalLightComponent *SunLight = ActiveSunLight.Get())
    {
        SunLight->SetWorldRotation(Settings->SunRotation);
        SunLight->SetIntensity(Settings->SunIntensity);
        SunLight->SetLightColor(Settings->SunColor);
        SunLight->SetCastShadows(true);
        SunLight->SetDynamicShadowDistanceMovableLight(Settings->ShadowDistance);
    }

    if (USkyLightComponent *SkyLight = ActiveSkyLight.Get())
    {
        SkyLight->SetIntensity(Settings->SkyIntensity);
        SkyLight->SetLightColor(Settings->SkyColor);
    }
}

void ADIY_StylizedRenderDirector::ApplyAtmosphere()
{
    const UDIY_StylizedRenderSettings *Settings = UDIY_StylizedRenderSettings::Get();
    if (!Settings)
    {
        return;
    }

    if (UExponentialHeightFogComponent *Fog = ActiveFog.Get())
    {
        Fog->FogDensity = Settings->FogDensity;
        Fog->FogHeightFalloff = Settings->FogHeightFalloff;
        Fog->StartDistance = Settings->FogStartDistance;
        Fog->SetFogInscatteringColor(Settings->FogColor);
        Fog->bEnableVolumetricFog = false;
        Fog->MarkRenderStateDirty();
    }
}

void ADIY_StylizedRenderDirector::ApplyMaterialParameters()
{
    const UDIY_StylizedRenderSettings *Settings = UDIY_StylizedRenderSettings::Get();
    UWorld *World = GetWorld();
    UMaterialParameterCollection *Collection = ActiveParameterCollection.Get();
    if (!Settings || !World || !Collection)
    {
        return;
    }

    UMaterialParameterCollectionInstance *Instance = World->GetParameterCollectionInstance(Collection);
    if (!Instance)
    {
        return;
    }

    FVector SunDirection = -FRotationMatrix(Settings->SunRotation).GetUnitAxis(EAxis::X);
    if (const UDirectionalLightComponent *SunLight = ActiveSunLight.Get())
    {
        SunDirection = -SunLight->GetForwardVector();
    }
    SunDirection.Normalize();

    Instance->SetVectorParameterValue(
        StylizedSunDirectionName,
        FLinearColor(SunDirection.X, SunDirection.Y, SunDirection.Z, 1.0f));
    Instance->SetVectorParameterValue(StylizedLightColorName, Settings->SunColor);
    Instance->SetVectorParameterValue(StylizedShadowColorName, Settings->ShadowColor);
    Instance->SetScalarParameterValue(StylizedBandThresholdName, Settings->ToonBandThreshold);
    Instance->SetScalarParameterValue(StylizedBandSoftnessName, Settings->ToonBandSoftness);
}

void ADIY_StylizedRenderDirector::ApplyPostProcess()
{
    const UDIY_StylizedRenderSettings *Settings = UDIY_StylizedRenderSettings::Get();
    if (!Settings || !OwnedPostProcess)
    {
        return;
    }

    FPostProcessSettings &PostSettings = OwnedPostProcess->Settings;
    PostSettings = FPostProcessSettings();

    PostSettings.bOverride_AutoExposureMethod = true;
    PostSettings.AutoExposureMethod = EAutoExposureMethod::AEM_Manual;
    PostSettings.bOverride_AutoExposureBias = true;
    PostSettings.AutoExposureBias = Settings->ExposureBias;

    PostSettings.bOverride_ColorSaturation = true;
    PostSettings.ColorSaturation = Settings->ColorSaturation;
    PostSettings.bOverride_ColorContrast = true;
    PostSettings.ColorContrast = Settings->ColorContrast;
    PostSettings.bOverride_ColorGain = true;
    PostSettings.ColorGain = Settings->ColorGain;
    PostSettings.bOverride_ToneCurveAmount = true;
    PostSettings.ToneCurveAmount = Settings->ToneCurveAmount;
    PostSettings.bOverride_BloomIntensity = true;
    PostSettings.BloomIntensity = Settings->BloomIntensity;
    PostSettings.bOverride_VignetteIntensity = true;
    PostSettings.VignetteIntensity = 0.0f;
    PostSettings.bOverride_SceneFringeIntensity = true;
    PostSettings.SceneFringeIntensity = 0.0f;
    PostSettings.bOverride_MotionBlurAmount = true;
    PostSettings.MotionBlurAmount = 0.0f;
}
