// All rights reserved to ShadowCandle Studio

#include "DIY_WeatherManager.h"

ADIY_WeatherManager *ADIY_WeatherManager::gWeatherManagerInstance = nullptr;
ADIY_WeatherManager::ADIY_WeatherManager()
{
    PrimaryActorTick.bCanEverTick = false;
    UE_LOG(LogTemp, Warning, TEXT("Hello, World!"));
}

ADIY_WeatherManager::~ADIY_WeatherManager()
{
}

ADIY_WeatherManager *ADIY_WeatherManager::GetWeatherManager()
{
    checkf(nullptr != gWeatherManagerInstance, TEXT("gWeatherManagerInstance can not be inited her"));

    return ADIY_WeatherManager::gWeatherManagerInstance;
}

float ADIY_WeatherManager::InquireCurrentEnvTemperature() const
{
    //@TODO get temperature from weather api
    return 26.0f;
}

float ADIY_WeatherManager::InquireCurrentEnvMoist() const
{
    //@TODO get moist from weather api
    return 0.3f;
}

void ADIY_WeatherManager::BeginPlay()
{
    Super::BeginPlay();
    checkf(ADIY_WeatherManager::gWeatherManagerInstance == nullptr, TEXT("More than one WeatherManagerInstance is created now which is not allowed"));
    ADIY_WeatherManager::gWeatherManagerInstance = this;
}

void ADIY_WeatherManager::EndPlay(const EEndPlayReason::Type EndPlayReason)
{

    ADIY_WeatherManager::gWeatherManagerInstance = nullptr;
}
