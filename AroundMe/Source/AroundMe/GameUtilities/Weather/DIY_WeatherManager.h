
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Sound/SoundBase.h"
#include "Components/AudioComponent.h"
#include "Engine/DataTable.h"

#include "DIY_WeatherManager.generated.h" 



UCLASS()
class AROUNDME_API ADIY_WeatherManager : public AActor
{
    GENERATED_BODY()

public:
    ADIY_WeatherManager();
    ~ADIY_WeatherManager();
private:
    static ADIY_WeatherManager* gWeatherManagerInstance;

protected:

    
    virtual void BeginPlay() override;

   
    virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
    
   
    
public:
   
    static ADIY_WeatherManager* GetWeatherManager();
   
};