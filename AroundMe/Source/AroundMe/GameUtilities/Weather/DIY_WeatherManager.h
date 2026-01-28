#pragma once

#include "CoreMinimal.h"
#include "../../System/DIY_WorldSubsystem.h"

#include "DIY_WeatherManager.generated.h"

UENUM(BlueprintType)
enum class E_DIY_WeatherState : uint8
{
    ClearSky UMETA(DisplayName = "Clear Sky (0)"),
    MainlyClear UMETA(DisplayName = "Mainly Clear (1)"),
    PartlyCloudy UMETA(DisplayName = "Partly Cloudy (2)"),
    Overcast UMETA(DisplayName = "Overcast (3)"),

    Fog UMETA(DisplayName = "Fog (45)"),
    DepositingRimeFog UMETA(DisplayName = "Depositing Rime Fog (48)"),

    DrizzleLight UMETA(DisplayName = "Drizzle: Light (51)"),
    DrizzleModerate UMETA(DisplayName = "Drizzle: Moderate (53)"),
    DrizzleDense UMETA(DisplayName = "Drizzle: Dense (55)"),

    FreezingDrizzle UMETA(DisplayName = "Freezing Drizzle (56, 57)"),

    RainSlight UMETA(DisplayName = "Rain: Slight (61)"),
    RainModerate UMETA(DisplayName = "Rain: Moderate (63)"),
    RainHeavy UMETA(DisplayName = "Rain: Heavy (65)"),

    FreezingRain UMETA(DisplayName = "Freezing Rain (66, 67)"),

    SnowSlight UMETA(DisplayName = "Snow: Slight (71)"),
    SnowModerate UMETA(DisplayName = "Snow: Moderate (73)"),
    SnowHeavy UMETA(DisplayName = "Snow: Heavy (75)"),
    SnowGrains UMETA(DisplayName = "Snow Grains (77)"),

    RainShowersSlight UMETA(DisplayName = "Rain Showers: Slight (80)"),
    RainShowersModerate UMETA(DisplayName = "Rain Showers: Moderate (81)"),
    RainShowersViolent UMETA(DisplayName = "Rain Showers: Violent (82)"),

    SnowShowers UMETA(DisplayName = "Snow Showers (85, 86)"),

    Thunderstorm UMETA(DisplayName = "Thunderstorm (95)"),
    ThunderstormWithHail UMETA(DisplayName = "Thunderstorm With Hail (96, 99)"),

    Unknown UMETA(DisplayName = "Unknown")
};

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
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnWeatherManager_SimpleTrigger);

    UPROPERTY(BlueprintAssignable, Category = "Weather")
    FOnWeatherManager_SimpleTrigger OnSyncRealWorldInfoFinished;

    UPROPERTY(Transient, BlueprintReadOnly)
    class UDIY_WeatherManagerHelperBase *SubsystemHelper;

    UFUNCTION(BlueprintCallable, Category = "Weather")
    void BroadcastSyncRealWorldInfoFinished();

    // ✅ 提供给蓝图 Helper 的 Setter
    UFUNCTION(BlueprintCallable, Category = "Weather")
    void UpdateLocationJson(class UVaRestJsonObject *NewJson) { LocationDataJson = NewJson; }

    UFUNCTION(BlueprintCallable, Category = "Weather")
    E_DIY_WeatherState ParseWMOCode(int32 Code);

    UFUNCTION(BlueprintCallable, Category = "Weather")
    void UpdateWeatherJson(class UVaRestJsonObject *NewJson) { WeatherDataJson = NewJson; }

    class UVaRestJsonObject *GetLocationJson() const { return LocationDataJson; }
    class UVaRestJsonObject *GetWeatherJson() const { return WeatherDataJson; }

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