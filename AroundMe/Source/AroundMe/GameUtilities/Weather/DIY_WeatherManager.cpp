#include "DIY_WeatherManager.h"
#include "TimerManager.h"

void UDIY_WeatherManager::Initialize(FSubsystemCollectionBase& Collection)
{
    Super::Initialize(Collection);

    // 启动一个定时器，每隔 10 秒刷新一次天气
    if (UWorld* World = GetWorld())
    {
        World->GetTimerManager().SetTimer(
            WeatherTimerHandle,
            this,
            &UDIY_WeatherManager::QueryWeatherFromAPI,
            10.0f,   // 间隔（秒）
            true     // 循环
        );
    }
}

void UDIY_WeatherManager::Deinitialize()
{
    if (UWorld* World = GetWorld())
    {
        World->GetTimerManager().ClearTimer(WeatherTimerHandle);
    }
    Super::Deinitialize();
}

void UDIY_WeatherManager::QueryWeatherNow()
{
    QueryWeatherFromAPI();
}

void UDIY_WeatherManager::QueryWeatherFromAPI()
{
    
    UE_LOG(LogTemp, Log, TEXT("Querying real-world weather API..."));

   
    CurrentTemperature = FMath::RandRange(-10.0f, 35.0f);
    CurrentMoisture = FMath::FRandRange(0.f, 1.f);

    UE_LOG(LogTemp, Log, TEXT("Updated Weather -> Temp: %.1f, Moist: %.2f"), CurrentTemperature, CurrentMoisture);
}
