#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DIY_StylizedRenderDirector.generated.h"

class UDirectionalLightComponent;
class UExponentialHeightFogComponent;
class UMaterialParameterCollection;
class UPostProcessComponent;
class USceneComponent;
class USkyLightComponent;

UCLASS(Blueprintable)
class AROUNDME_API ADIY_StylizedRenderDirector : public AActor
{
    GENERATED_BODY()

public:
    ADIY_StylizedRenderDirector();

    virtual void BeginPlay() override;

    UFUNCTION(BlueprintCallable, Category = "AroundMe|StylizedRender")
    void ApplyStyle();

    UFUNCTION(BlueprintPure, Category = "AroundMe|StylizedRender")
    bool IsStyleEnabled() const;

private:
    void ResolveWorldLighting();
    void ResolveMaterialParameters();
    void ApplyLighting();
    void ApplyAtmosphere();
    void ApplyMaterialParameters();
    void ApplyPostProcess();
    void SetOwnedLightingVisibility(bool bVisible);

    UPROPERTY(VisibleAnywhere, Category = "StylizedRender")
    TObjectPtr<USceneComponent> Root;

    UPROPERTY(VisibleAnywhere, Category = "StylizedRender")
    TObjectPtr<UDirectionalLightComponent> OwnedSunLight;

    UPROPERTY(VisibleAnywhere, Category = "StylizedRender")
    TObjectPtr<USkyLightComponent> OwnedSkyLight;

    UPROPERTY(VisibleAnywhere, Category = "StylizedRender")
    TObjectPtr<UExponentialHeightFogComponent> OwnedFog;

    UPROPERTY(VisibleAnywhere, Category = "StylizedRender")
    TObjectPtr<UPostProcessComponent> OwnedPostProcess;

    TWeakObjectPtr<UDirectionalLightComponent> ActiveSunLight;
    TWeakObjectPtr<USkyLightComponent> ActiveSkyLight;
    TWeakObjectPtr<UExponentialHeightFogComponent> ActiveFog;
    TWeakObjectPtr<UMaterialParameterCollection> ActiveParameterCollection;
    bool bWorldLightingResolved = false;
    bool bMaterialParametersResolved = false;
};
