#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DIY_TemperatureProcessor.generated.h"

UCLASS(ClassGroup=(Player), meta=(BlueprintSpawnableComponent))
class AROUNDME_API UDIY_TemperatureProcessor : public UActorComponent
{
    GENERATED_BODY()

public:    
   
    UDIY_TemperatureProcessor();

protected:
    // Called when the game starts
    virtual void BeginPlay() override;

public:    
    // Called every frame
    virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

   
protected:
    UPROPERTY(BlueprintReadOnly)
    float Final_TemperaturValue{0.f};


private:

    //self emissive temperature , config type 
    float InternalSelfEmissive_Temperature{0.0f};
    //self emissive temperature , lasting duration
    float InternalSelfEmissive_Temperature_LastingDuration{9999.0f};


    //damage from outside
    //from pokemon or any force damage
    float damage_addon{0.0f};

    //weather change 
    float weather_addon{0.0f};

    //item impact 
    float itemimpact_addon{0.f};

    float initial_temperature{0.0f};


    float objectself_impactor{0.f};





    float moist_value_weather{0.0f};
    
    
    float moist_value_weather_geo{0.0f};
    float moist_value_damageaddon{0.0f};
    float moist_value_itemaddon{0.0f};
    float moist_value_initial{0.0f};




    // wood ? burnable? plastic?
    int item_object_type{0};

    //pieces? 
    int item_quality_type{0};

    float combustible_temperature{999.00};

    float thaw_temparature{26.0f};

    float frozen_temperature{-1.0f};

};