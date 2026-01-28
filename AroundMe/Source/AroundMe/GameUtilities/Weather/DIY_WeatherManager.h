#pragma once

#include "CoreMinimal.h"
#include "../../System/DIY_WorldSubsystem.h"

#include "DIY_WeatherManager.generated.h"

UCLASS()
class AROUNDME_API UDIY_WeatherManager : public UDIY_WorldSubsystem
{
    GENERATED_BODY()

    TSubclassOf<class UDIY_WeatherManagerHelperBase> SubsystemHelperClass;

    // virtual class UWorld* GetWorld() const override;
    UPROPERTY(BlueprintReadOnly, Category = "Weather", meta = (AllowPrivateAccess = "true"))
    class UVaRestJsonObject *LocationDataJson;

    UPROPERTY(BlueprintReadOnly, Category = "Weather", meta = (AllowPrivateAccess = "true"))
    class UVaRestJsonObject *WeatherDataJson;

    UPROPERTY()
    TWeakObjectPtr<AActor> CurrentWorldWeatherActorInstance{nullptr};

    UPROPERTY()
    TWeakObjectPtr<AActor> CurrentWorldSkyActorInstance{nullptr};

    UPROPERTY()
    TWeakObjectPtr<AActor> CurrentWorldParamsStoreInstance{nullptr};

    FTimerHandle WeatherTimerHandle;
    float CurrentTemperature = 0.0f;
    float CurrentMoisture = 0.0f;

    void QueryWeatherFromAPI(); // 实际访问 API 的逻辑



protected:
public:



    UPROPERTY(Transient, BlueprintReadOnly)
    class UDIY_WeatherManagerHelperBase *SubsystemHelper;

    // ✅ 提供给蓝图 Helper 的 Setter
    UFUNCTION(BlueprintCallable, Category = "Weather")
    void UpdateLocationJson(class UVaRestJsonObject *NewJson) { LocationDataJson = NewJson; }

    UFUNCTION(BlueprintCallable, Category = "Weather")
    void UpdateWeatherJson(class UVaRestJsonObject *NewJson) { WeatherDataJson = NewJson; }


    UFUNCTION(BlueprintCallable, Category = "Weather")
    void ManuallySyncRealWorldInfo();

    UFUNCTION(BlueprintCallable, Category = "Weather", meta = (WorldContext = "WorldContextObject"))
    static UDIY_WeatherManager *Get(const UObject *WorldContextObject);

    virtual void Initialize(FSubsystemCollectionBase &Collection) override;
    virtual void Deinitialize() override;

    UDIY_WeatherManager();

    UFUNCTION(BlueprintCallable, Category = "Weather")
    float GetTemperature() const { return CurrentTemperature; }

    UFUNCTION(BlueprintCallable, Category = "Weather")
    float GetMoisture() const { return CurrentMoisture; }

    UFUNCTION(BlueprintCallable, Category = "Weather")
    void RegisterWeatherInsrance(AActor *InWeatherActor);

    UFUNCTION(BlueprintCallable, Category = "Weather")
    void RegisterParamsStore(AActor *InParamStoreActor);

    UFUNCTION(BlueprintCallable, Category = "Weather")
    void UnRegisterParamsStore();

    UFUNCTION(BlueprintCallable, Category = "Weather")
    void RegisterSkyInsrance(AActor *InSkyActor);

    UFUNCTION(BlueprintCallable, Category = "Weather")
    void UnRegisterWeatherInsrance();

    UFUNCTION(BlueprintCallable, Category = "Weather")
    void UnRegisterSkyInsrance();

    UFUNCTION(BlueprintCallable, Category = "Weather")
    AActor *GetWorldWeatherActorInstance() const { return CurrentWorldWeatherActorInstance.Get(); }

    UFUNCTION(BlueprintCallable, Category = "Weather")
    AActor *GetWorldSkyActorInstance() const { return CurrentWorldSkyActorInstance.Get(); }

    UFUNCTION(BlueprintCallable, Category = "Weather")
    AActor *GetWorldParamsStoreInstance() const { return CurrentWorldParamsStoreInstance.Get(); }
};

// Subsystem helper
UCLASS(Abstract, Blueprintable, MinimalAPI, meta = (ShowWorldContextPin))
class UDIY_WeatherManagerHelperBase : public UObject
{
    GENERATED_BODY()

protected:
public:
    friend class UDIY_WeatherManager;

    void Initialize();

#if 1 // test.
    // sync real user world info including weather, lat, lon, city, etc.
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SyncRealWorldInfo();

    // Test Function 2
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TestFunction2(const int32 &MyInt);

    // Test Function 3
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FString TestFunction3();
#endif
};