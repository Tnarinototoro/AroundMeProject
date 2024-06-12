#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "DIY_ProjectConfig.generated.h"



UCLASS(config = Game, defaultconfig, meta = (DisplayName = "DIY Project Config"))
class AROUNDME_API UDIY_ProjectConfig:public UDeveloperSettings
{
    GENERATED_BODY()

public:
    UDIY_ProjectConfig(const FObjectInitializer& ObjectInitializer);


    UPROPERTY(EditAnywhere, config, Category = "GameInteract_Conductivity", meta = (DisplayName = "Conductivity_R_Scale", ToolTip = "for calculating heat from electricity"))
        float Conductivity_R_Scale{10.0f};
    UPROPERTY(EditAnywhere, config, Category = "GameInteract_Conductivity", meta = (DisplayName = "MoistAsBasicR_Scale_Coe", ToolTip = "for scaling up or down moisture as R if any exists"))
        float MoistAsBasicR_Scale_Coe{ 1.0f };
    UPROPERTY(EditAnywhere, config, Category = "GameInteract_TemperaturAndMoist", meta = (DisplayName = "TemperatureChangeSpeedScale_DueToMoist", ToolTip = "descripts how fast temperature changes when mosit is 0 or 1 or inbetween"))
        float TemperatureChangeSpeedScale_DueToMoist{ 1.0f };
   
    static const UDIY_ProjectConfig* GetConfigInstance();
};
