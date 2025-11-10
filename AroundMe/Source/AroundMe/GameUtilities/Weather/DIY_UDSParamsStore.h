// All rights reserved to ShadowCandle Studio

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"

#include "DIY_UDSParamsStore.generated.h"

UCLASS()
class AROUNDME_API ADIY_UDSParamsStore : public AActor
{
    GENERATED_BODY()

public:
    ADIY_UDSParamsStore();
    ~ADIY_UDSParamsStore();

private:
protected:
public:
    UFUNCTION(BlueprintImplementableEvent, Category = "DIY_UDSParamsStore")
    void SetParam_TimeOfDay(float InTimeOfDay);

    UFUNCTION(BlueprintImplementableEvent, Category = "DIY_UDSParamsStore")
    void SetParam_OverallIntensity(float InOverallIntensity);

    UFUNCTION(BlueprintImplementableEvent, Category = "DIY_UDSParamsStore")
    void SetParam_Contrast(float InContrast);

    UFUNCTION(BlueprintImplementableEvent, Category = "DIY_UDSParamsStore")
    void SetParam_Saturation(float InSaturation);

    UFUNCTION(BlueprintImplementableEvent, Category = "DIY_UDSParamsStore")
    void SetParam_WeatherPresetType(int32 InWeatherPresetType);

    UFUNCTION(BlueprintImplementableEvent, Category = "DIY_UDSParamsStore")
    void SetParam_EnableAnimatedTime(bool InEnableAnimatedTime);

    UFUNCTION(BlueprintImplementableEvent, Category = "DIY_UDSParamsStore")
    void SetParam_AnimatedTimeSpeed(float InAnimatedTimeSpeed);
};