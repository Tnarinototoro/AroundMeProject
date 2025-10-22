#pragma once

#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "DIY_WeatherManager.generated.h"

UCLASS()
class AROUNDME_API UDIY_WeatherManager : public UWorldSubsystem
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintCallable, Category="Weather", meta=(WorldContext="WorldContextObject"))
    static UDIY_WeatherManager* Get(const UObject* WorldContextObject)
    {
        if (!WorldContextObject) return nullptr;
        UWorld* World = WorldContextObject->GetWorld();
        return World ? World->GetSubsystem<UDIY_WeatherManager>() : nullptr;
    }

    virtual void Initialize(FSubsystemCollectionBase& Collection) override;
    virtual void Deinitialize() override;

    UFUNCTION(BlueprintCallable, Category="Weather")
    float GetTemperature() const { return CurrentTemperature; }

    UFUNCTION(BlueprintCallable, Category="Weather")
    float GetMoisture() const { return CurrentMoisture; }

    // 调用一次立即刷新
    UFUNCTION(BlueprintCallable, Category="Weather")
    void QueryWeatherNow();


    UFUNCTION(BlueprintCallable, Category="Weather")
    void RegisterWeatherInsrance(AActor* InWeatherActor);

    UFUNCTION(BlueprintCallable, Category="Weather")
    void RegisterParamsStore(AActor* InParamStoreActor);

    UFUNCTION(BlueprintCallable, Category="Weather")
    void UnRegisterParamsStore();

    UFUNCTION(BlueprintCallable, Category="Weather")
    void RegisterSkyInsrance(AActor* InSkyActor);

    UFUNCTION(BlueprintCallable, Category="Weather")
    void UnRegisterWeatherInsrance();

    UFUNCTION(BlueprintCallable, Category="Weather")
    void UnRegisterSkyInsrance();


    UFUNCTION(BlueprintCallable, Category="Weather")
    AActor* GetWorldWeatherActorInstance() const { return CurrentWorldWeatherActorInstance.Get(); }

    UFUNCTION(BlueprintCallable, Category="Weather")
    AActor* GetWorldSkyActorInstance() const { return CurrentWorldSkyActorInstance.Get(); }

    UFUNCTION(BlueprintCallable, Category="Weather")
    AActor* GetWorldParamsStoreInstance() const { return CurrentWorldParamsStoreInstance.Get(); }

private:
    void QueryWeatherFromAPI(); // 实际访问 API 的逻辑

    FTimerHandle WeatherTimerHandle;
    float CurrentTemperature = 0.0f;
    float CurrentMoisture = 0.0f;

   
    UPROPERTY()
    TWeakObjectPtr<AActor> CurrentWorldWeatherActorInstance{nullptr};

    UPROPERTY()
    TWeakObjectPtr<AActor> CurrentWorldSkyActorInstance{nullptr};

    UPROPERTY()
    TWeakObjectPtr<AActor> CurrentWorldParamsStoreInstance{nullptr};

};