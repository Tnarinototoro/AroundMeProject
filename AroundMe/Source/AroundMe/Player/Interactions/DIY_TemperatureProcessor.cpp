#include "DIY_TemperatureProcessor.h"
#include "../Items/DIY_ItemDefines.h"
#include "../../GameUtilities/Logs/DIY_LogHelper.h"
#include "../../DIY_ProjectConfig.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Engine/StreamableManager.h"
#include "Engine/AssetManager.h"
#include "Particles/ParticleSystemComponent.h"
#include "Kismet/GameplayStatics.h"
#include "../../GameUtilities/Weather/DIY_WeatherManager.h"
#include "../../GameUtilities/DIY_Utilities.h"
#include "../Items/DIY_ItemManager.h"
UDIY_TemperatureProcessor::UDIY_TemperatureProcessor()
{

    PrimaryComponentTick.bCanEverTick = true;
}

void UDIY_TemperatureProcessor::OnInitWithConfigCopy(const FDIY_ItemDefualtConfig *inConfig)
{
    copy_TemperatureAndMoistureAttr = inConfig->PossibleTempAndMoistConfig;
}

void UDIY_TemperatureProcessor::OnResetComponentValues()
{
    //@Todo get init weater moisture
    Final_MoistureValue = OuterWolrdMoistureValue = ADIY_WeatherManager::GetWeatherManager()->InquireCurrentEnvMoist();

    SpawnedEffectCompo = {nullptr};
    EffectResource = {nullptr};

    // / target_moist= (moist_value_weather(moist_value_weather_geo));

    Final_TemperatureValue = OuterWolrdTemperatureValue = ADIY_WeatherManager::GetWeatherManager()->InquireCurrentEnvTemperature();

    // need to get weathre temperature from world
}

void UDIY_TemperatureProcessor::BeginPlay()
{
    Super::BeginPlay();

    OnResetComponentValues();
}

void UDIY_TemperatureProcessor::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction)
{
    Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

    UpdateParams(DeltaTime);
    UpdateStateMachine(DeltaTime);
}

void UDIY_TemperatureProcessor::OverrideOuterMoisture(float inMoisture)
{

    OuterWolrdMoistureValue = FMath::Max(OuterWolrdMoistureValue, FMath::Clamp(inMoisture, 0.0f, 1.0f));
}

void UDIY_TemperatureProcessor::AddInstantMoistureChange(float inChange)
{
    Final_MoistureValue += FMath::Clamp(inChange, -1.0f, 1.0f);
    Final_MoistureValue = FMath::Clamp(Final_MoistureValue, 0.f, 1.0f);
}

void UDIY_TemperatureProcessor::AddEndurateMoistureHolder(float inDuration, float inMoisture)
{
    if (LastDominant_MoistHolder_RemainingTime <= 0.f)
    {

        LastDominant_MoistHolder_RemainingTime = inDuration;
        LastDominant_MoistHolder_RealMoist = inMoisture;

        return;
    }

    if (inDuration > LastDominant_MoistHolder_RemainingTime && inMoisture > Final_MoistureValue)
    {
        LastDominant_MoistHolder_RemainingTime = inDuration;
        LastDominant_MoistHolder_RealMoist = inMoisture;
    }
}

void UDIY_TemperatureProcessor::AddInstantTemperatureChange(float inChange)
{
    Final_TemperatureValue += inChange;
    Final_TemperatureValue = FMath::Clamp(Final_TemperatureValue, -200.f, 5000.0f);
}

void UDIY_TemperatureProcessor::SwitchToNextState(ETemperatureRelatedState inState)
{
    if (inState == CurrentState)
        return;
    CurrentState = inState;
    CurrentStateFirstTimeSign = true;
    CurrentStateElapedTime = 0.f;
}

void UDIY_TemperatureProcessor::OverrideOuterTemperature(float inTemperature)
{

    OuterWolrdTemperatureValue = (FMath::Clamp(inTemperature, -200, 5000.f) + OuterWolrdTemperatureValue) / 2.0f;
}

void UDIY_TemperatureProcessor::AddEndurateTemperatureHolder(float inEndurateTime, float inLastingTemperature)
{
    if (LastDominant_TemperatureHolder_RemainingTime <= 0.f)
    {

        LastDominant_TemperatureHolder_RemainingTime = inEndurateTime;
        LastDominant_TemperatureHolder_RealTemperature = inLastingTemperature;

        return;
    }

    if (inEndurateTime > LastDominant_TemperatureHolder_RemainingTime)
    {
        LastDominant_TemperatureHolder_RemainingTime = inEndurateTime;
        LastDominant_TemperatureHolder_RealTemperature = inLastingTemperature;
    }
}

void UDIY_TemperatureProcessor::UpdateParams(float inDeltaTime)
{

    {
        if (SpawnedEffectCompo != nullptr)
        {
            if (IsValid(SpawnedEffectCompo))
            {
                SpawnedEffectCompo->SetWorldLocation(GetOwner()->GetActorLocation());
            }
        }
    }
    // moisture updates
    {

        if (LastDominant_MoistHolder_RemainingTime > 0.f)
        {
            LastDominant_MoistHolder_RemainingTime -= inDeltaTime;
            OverrideOuterMoisture(LastDominant_MoistHolder_RealMoist);

            if (LastDominant_TemperatureHolder_RemainingTime <= 0.f)
            {
                OverrideOuterMoisture(ADIY_WeatherManager::GetWeatherManager()->InquireCurrentEnvMoist());

                // reset to the weather temperature
            }
        }

        float clamped_temperature = FMath::Clamp<float>(Final_TemperatureValue, 0.0f, 5000.0f);

        // moisture_change_speed 0.0001->1.0
        float moisture_change_speed = (clamped_temperature - 0.0f) / (5000.0f - 0.0f);
        moisture_change_speed = 0.0002f + (1.0f - 0.0002f) * moisture_change_speed;

        if (!FMath::IsNearlyEqual(Final_MoistureValue, OuterWolrdMoistureValue, 0.05f))
        {
            Final_MoistureValue = FMath::FInterpTo<float>(Final_MoistureValue, OuterWolrdMoistureValue, inDeltaTime, moisture_change_speed * MoistureChangeSpeedScale);
        }
    }

    // temerature updates
    {
        if (LastDominant_TemperatureHolder_RemainingTime > 0.f)
        {
            LastDominant_TemperatureHolder_RemainingTime -= inDeltaTime;
            OverrideOuterTemperature(LastDominant_TemperatureHolder_RealTemperature);

            if (LastDominant_TemperatureHolder_RemainingTime <= 0.f)
            {
                OverrideOuterTemperature(ADIY_WeatherManager::GetWeatherManager()->InquireCurrentEnvTemperature());

                // reset to the weather temperature
            }
        }

        if (!FMath::IsNearlyEqual(Final_TemperatureValue, OuterWolrdTemperatureValue, 0.1f))
        {
            Final_TemperatureValue = FMath::FInterpTo<float>(Final_TemperatureValue, OuterWolrdTemperatureValue, inDeltaTime, Final_MoistureValue * UDIY_ProjectConfig::GetConfigInstance()->TemperatureChangeSpeedScale_DueToMoist);
        }
    }
}

void UDIY_TemperatureProcessor::UpdateStateMachine(float inDeltaTime)
{
    switch (CurrentState)
    {
    case ETemperatureRelatedState::TS_Normal:
        if (CurrentStateFirstTimeSign)
        {

            break;
        }

        if (Final_TemperatureValue >= copy_TemperatureAndMoistureAttr.self_combustible_temperature)
        {
            SwitchToNextState(ETemperatureRelatedState::TS_Burning);
            return;
        }

        if (Final_TemperatureValue <= copy_TemperatureAndMoistureAttr.self_frozen_temperature)
        {
            SwitchToNextState(ETemperatureRelatedState::TS_Frozen);
            return;
        }

        break;
    case ETemperatureRelatedState::TS_Burning:
        if (CurrentStateFirstTimeSign)
        {

            SelfIgnite_AndAroundItems();
            SpawnTemperatureEffectAttached(UDIY_ProjectConfig::GetConfigInstance()->BurningEffectPath);

            break;
        }

        if (CurrentStateElapedTime > copy_TemperatureAndMoistureAttr.self_emissive_AddonTemperature_LastingDuration_config)
        {
            SwitchToNextState(ETemperatureRelatedState::TS_BurntOver);

            return;
        }
        else
        {
            // EASY_LOG_MAINPLAYER("Cur burning time %f outerworld temperature %f",CurrentStateElapedTime,OuterWolrdTemperatureValue);
        }
        break;
    case ETemperatureRelatedState::TS_BurntOver:
        if (CurrentStateFirstTimeSign)
        {
            SpawnTemperatureEffectAttached(UDIY_ProjectConfig::GetConfigInstance()->BurntOverEffectPath);

            break;
        }

        if (CurrentStateElapedTime > 4.0f)
        {
            if (SpawnedEffectCompo != nullptr && IsValid(SpawnedEffectCompo))
            {
                SpawnedEffectCompo->DestroyComponent();
                SpawnedEffectCompo = nullptr;
            }
            UDIY_Utilities::DIY_GetItemManagerInstance()->RequestRecycleItem(GetOwner());
            SwitchToNextState(ETemperatureRelatedState::TS_Normal);
            this->DestroyComponent();
        }
        break;
    case ETemperatureRelatedState::TS_Frozen:
        if (CurrentStateFirstTimeSign)
        {

            break;
        }

        if (Final_TemperatureValue >= copy_TemperatureAndMoistureAttr.self_thaw_temparature)
        {
            SwitchToNextState(ETemperatureRelatedState::TS_Normal);
            return;
        }

        break;
    case ETemperatureRelatedState::TS_Count:
        break;
    default:
        break;
    }

    CurrentStateFirstTimeSign = false;
    CurrentStateElapedTime += inDeltaTime;
}

void UDIY_TemperatureProcessor::SelfIgnite_AndAroundItems()
{
    AddEndurateTemperatureHolder(copy_TemperatureAndMoistureAttr.self_emissive_AddonTemperature_LastingDuration_config, copy_TemperatureAndMoistureAttr.self_emissive_AddonTemperature_config);

    AActor *OwnerActor = GetOwner();

    ensureMsgf(OwnerActor != nullptr, TEXT("the owner actor is null weird!"));
    FVector Origin = OwnerActor->GetActorLocation();
    TArray<AActor *> OverlappedActors;
    TArray<AActor *> IgnoreActors;
    IgnoreActors.Add(OwnerActor);
    FName CollisionProfileName = TEXT("DIY_Item_Pres");
    float ExplosionRadius = 300.0f;
    // debug
    DrawDebugSphere(GetWorld(), Origin, ExplosionRadius, 32, FColor::Red, false, 2.0f);

    UKismetSystemLibrary::SphereOverlapActors(
        GetWorld(),
        Origin,
        ExplosionRadius,
        TArray<TEnumAsByte<EObjectTypeQuery>>(),
        AActor::StaticClass(),
        IgnoreActors,
        OverlappedActors);

    for (AActor *Actor : OverlappedActors)
    {
        UDIY_TemperatureProcessor *poss_temp_compo = Actor->FindComponentByClass<UDIY_TemperatureProcessor>();
        if (nullptr != poss_temp_compo)
        {
            EASY_LOG_MAINPLAYER("Current actor with temperature compo is %s", *Actor->GetName());
            poss_temp_compo->AddEndurateTemperatureHolder(copy_TemperatureAndMoistureAttr.self_emissive_AddonTemperature_LastingDuration_config, copy_TemperatureAndMoistureAttr.self_emissive_AddonTemperature_config);
        }
    }
}

void UDIY_TemperatureProcessor::SpawnTemperatureEffectAttached(const FSoftObjectPath &inEffectPath)
{
    if (SpawnedEffectCompo != nullptr)
    {
        SpawnedEffectCompo->DestroyComponent();
        SpawnedEffectCompo = nullptr;
    }

    LoadEffectResource(inEffectPath);
}

void UDIY_TemperatureProcessor::LoadEffectResource(const FSoftObjectPath &inEffectPath)
{

    if (inEffectPath.IsValid())
    {

        FStreamableManager &StreamableManager = UAssetManager::GetStreamableManager();
        StreamableManager.RequestAsyncLoad(inEffectPath, FStreamableDelegate::CreateUObject(this, &UDIY_TemperatureProcessor::OnEffectLoaded, inEffectPath));
    }
}

void UDIY_TemperatureProcessor::OnEffectLoaded(FSoftObjectPath inEffectPath)
{
    FStreamableManager &StreamableManager = UAssetManager::GetStreamableManager();
    EffectResource = Cast<UParticleSystem>(StreamableManager.LoadSynchronous(inEffectPath));

    ensureMsgf(EffectResource.IsValid(), TEXT("Effect resource is invalid"));
    ensureMsgf(SpawnedEffectCompo == nullptr, TEXT("you have to destroy the previous particle instanece before spawning new one"));

    SpawnedEffectCompo = UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), EffectResource.Get(), GetOwner()->GetActorLocation());

    SpawnedEffectCompo->bAutoDestroy = false;
}
