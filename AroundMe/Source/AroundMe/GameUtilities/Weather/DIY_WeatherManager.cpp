#include "DIY_WeatherManager.h"
#include "TimerManager.h"

UDIY_WeatherManager *UDIY_WeatherManager::Get(const UObject *WorldContextObject)
{
    if (!WorldContextObject)
        return nullptr;
    UWorld *World = WorldContextObject->GetWorld();
    return World ? World->GetSubsystem<UDIY_WeatherManager>() : nullptr;
}

void UDIY_WeatherManager::Initialize(FSubsystemCollectionBase &Collection)
{
    Super::Initialize(Collection);

    // 启动一个定时器，每隔 10 秒刷新一次天气
    if (UWorld *World = GetWorld())
    {
        World->GetTimerManager().SetTimer(
            WeatherTimerHandle,
            this,
            &UDIY_WeatherManager::QueryWeatherFromAPI,
            10.0f, // 间隔（秒）
            true   // 循环
        );
    }
}

void UDIY_WeatherManager::Deinitialize()
{
    if (UWorld *World = GetWorld())
    {
        World->GetTimerManager().ClearTimer(WeatherTimerHandle);
    }
    Super::Deinitialize();
}

void UDIY_WeatherManager::QueryWeatherNow()
{
    QueryWeatherFromAPI();
}

void UDIY_WeatherManager::RegisterWeatherInsrance(AActor *InWeatherActor)
{
    ensureAlwaysMsgf(InWeatherActor, TEXT("InWeatherActor is nullptr"));
    ensureAlwaysMsgf(CurrentWorldWeatherActorInstance == nullptr, TEXT("CurrentWorldWeatherActorInstance is not nullptr"));
    CurrentWorldWeatherActorInstance = InWeatherActor;
}

void UDIY_WeatherManager::RegisterParamsStore(AActor *InParamStoreActor)
{
    ensureAlwaysMsgf(InParamStoreActor, TEXT("InParamStoreActor is nullptr"));
    ensureAlwaysMsgf(CurrentWorldParamsStoreInstance == nullptr, TEXT("CurrentParamsStoreActorInstance is not nullptr"));
    CurrentWorldParamsStoreInstance = InParamStoreActor;
}

void UDIY_WeatherManager::UnRegisterParamsStore()
{
    CurrentWorldParamsStoreInstance = nullptr;
}

void UDIY_WeatherManager::RegisterSkyInsrance(AActor *InSkyActor)
{
    ensureAlwaysMsgf(InSkyActor, TEXT("InSkyActor is nullptr"));
    ensureAlwaysMsgf(CurrentWorldSkyActorInstance == nullptr, TEXT("CurrentWorldSkyActorInstance is not nullptr"));
    CurrentWorldSkyActorInstance = InSkyActor;
}

void UDIY_WeatherManager::UnRegisterWeatherInsrance()
{
    CurrentWorldWeatherActorInstance = nullptr;
}

void UDIY_WeatherManager::UnRegisterSkyInsrance()
{
    CurrentWorldSkyActorInstance = nullptr;
}

void UDIY_WeatherManager::QueryWeatherFromAPI()
{

    UE_LOG(LogTemp, Log, TEXT("Querying real-world weather API..."));

    CurrentTemperature = FMath::RandRange(-10.0f, 35.0f);
    CurrentMoisture = FMath::FRandRange(0.f, 1.f);

    UE_LOG(LogTemp, Log, TEXT("Updated Weather -> Temp: %.1f, Moist: %.2f"), CurrentTemperature, CurrentMoisture);
}
