// All rights reserved to ShadowCandle Studio

#include "DIY_Item.h"
#include "Components/BoxComponent.h"
#include "../../GameUtilities/Logs/DIY_LogHelper.h"
#include "DrawDebugHelpers.h"
#include "../Interactions/DIY_InteractionUtility.h"
#include "Components/WidgetComponent.h"
#include "../../UIWidgets/DIY_ItemStateWidget.h"
#include "../Interactions/DIY_SolidnessProcessor.h"
#include "../Interactions/DIY_TemperatureProcessor.h"
#include "../Interactions/DIY_ConductivityProcessor.h"
#include "AroundMe/Debug/DIY_GlobalDebugSettings.h"

void ADIY_ItemBase::UpdateHighLight()
{
    if (BasicStaticMeshComponent)
    {
        if (isEnabledHighLighting)
        {
            BasicStaticMeshComponent->SetRenderCustomDepth(false);
            isEnabledHighLighting = false;
        }
        else
        {
            BasicStaticMeshComponent->SetRenderCustomDepth(true);
            BasicStaticMeshComponent->SetCustomDepthStencilValue(HighLightColor);
            isEnabledHighLighting = true;
        }
    }
}

ADIY_ItemBase::ADIY_ItemBase()
{

    PrimaryActorTick.bCanEverTick = true;

    BasicStaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BasicStaticMeshComponent"));
    BasicStaticMeshComponent->SetUseCCD(true);
    BasicStaticMeshComponent->SetCanEverAffectNavigation(false);
    RootComponent = BasicStaticMeshComponent;

#if UE_BUILD_DEVELOPMENT || UE_BUILD_DEBUG
    ItemStateWidgetComponent = CreateDefaultSubobject<UWidgetComponent>(TEXT("ItemStateWidgetComponent"));
    ItemStateWidgetComponent->SetupAttachment(BasicStaticMeshComponent);
    ItemStateWidgetComponent->SetWidgetSpace(EWidgetSpace::Screen);
    ItemStateWidgetComponent->SetDrawAtDesiredSize(false);
    ItemStateWidgetComponent->SetPivot(FVector2D(0.5f, 0.5f));
    ItemStateWidgetComponent->SetVisibility(true);
    ItemStateWidgetComponent->SetCanEverAffectNavigation(false);
#endif
}

ADIY_ItemBase::~ADIY_ItemBase()
{
}

// Called when the game starts or when spawned
void ADIY_ItemBase::BeginPlay()
{
    Super::BeginPlay();
#if UE_BUILD_DEVELOPMENT || UE_BUILD_DEBUG
    ItemStateWidgetComponent->SetWidgetClass(UDIY_ItemStateWidget::StaticClass());
#endif
    GetWorld()->GetTimerManager().SetTimer(
        TimerHandle_HighLight,
        this,
        &ADIY_ItemBase::UpdateHighLight,
        HighLightColorTranklingInterval,
        true);
    PauseTrinkling();
}

// Called every frame
void ADIY_ItemBase::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

#if UE_BUILD_DEVELOPMENT || UE_BUILD_DEBUG
    UpdateStateWidgetInfo(DeltaTime);
#endif
}

void ADIY_ItemBase::ResumeTrinkling()
{
    if (GetWorld()->GetTimerManager().IsTimerPaused(TimerHandle_HighLight))
    {
        GetWorld()->GetTimerManager().UnPauseTimer(TimerHandle_HighLight);
    }
    BasicStaticMeshComponent->SetRenderCustomDepth(true);
    BasicStaticMeshComponent->SetCustomDepthStencilValue(HighLightColor);
    isEnabledHighLighting = true;
}

void ADIY_ItemBase::PauseTrinkling()
{
    if (!GetWorld()->GetTimerManager().IsTimerPaused(TimerHandle_HighLight))
    {
        GetWorld()->GetTimerManager().PauseTimer(TimerHandle_HighLight);
    }
    BasicStaticMeshComponent->SetRenderCustomDepth(false);
    isEnabledHighLighting = false;
}
bool ADIY_ItemBase::CheckItemFlag(EDIY_InteractItemFlag inFlag)
{
    return UDIY_InteractionUtility::IsFlagSet(BulkInteractionFlags, (uint8)inFlag);
}
const FDIY_ItemDefualtConfig &ADIY_ItemBase::GetItemDefualtConfig()
{
    return this->config_copy;
}
void ADIY_ItemBase::InitWithConfig(const FDIY_ItemDefualtConfig &inConfig)
{
    config_copy = inConfig;
    BulkInteractionFlags = 0;
    for (EDIY_InteractItemFlag cur_flag : config_copy.ConfiguredFlags)
    {

        UDIY_InteractionUtility::SetFlag(BulkInteractionFlags, (uint8)cur_flag);
        EASY_LOG_MAINPLAYER("Actor spawned with flag %s", *UEnum::GetValueAsString(cur_flag));
    }
    // for (EDIY_InteractItemFlag cur_flag : inConfig.ConfiguredFlags)
    // {

    //     UDIY_InteractionUtility::SetFlag(BulkInteractionFlags, (uint8)cur_flag);
    //     EASY_LOG_MAINPLAYER("xxxx Actor spawned with flag %s", *UEnum::GetValueAsString(cur_flag));
    // }

    if (UDIY_InteractionUtility::IsFlagSet(BulkInteractionFlags, (uint8)EDIY_InteractItemFlag::Obey_Physics_Rules))
    {
        BasicStaticMeshComponent->SetCollisionProfileName(TEXT("DIY_Item_Pres"));
        BasicStaticMeshComponent->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
        BasicStaticMeshComponent->SetSimulatePhysics(true);
        BasicStaticMeshComponent->SetMassOverrideInKg(NAME_None, config_copy.ItemMass, true);
        BasicStaticMeshComponent->SetPhysMaterialOverride(config_copy.ItemPhysicsMtl);

        BasicStaticMeshComponent->SetLinearDamping(config_copy.LinearDamping);
        BasicStaticMeshComponent->SetAngularDamping(config_copy.AngualrDamping);
        EASY_LOG_MAINPLAYER("Actor successgully spawned with physics configs adopted");
    }

    if (UDIY_InteractionUtility::IsFlagSet(BulkInteractionFlags, (uint8)EDIY_InteractItemFlag::Static))
    {
        BasicStaticMeshComponent->SetCollisionProfileName(TEXT("DIY_Item_Pres"));
        BasicStaticMeshComponent->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
        BasicStaticMeshComponent->SetSimulatePhysics(false);
        // BasicStaticMeshComponent->SetMassOverrideInKg(NAME_None, config_copy.ItemMass, true);
        // BasicStaticMeshComponent->SetPhysMaterialOverride(config_copy.ItemPhysicsMtl);

        // BasicStaticMeshComponent->SetLinearDamping(config_copy.LinearDamping);
        // BasicStaticMeshComponent->SetAngularDamping(config_copy.AngualrDamping);
    }

    BasicStaticMeshComponent->SetCollisionResponseToChannel(ECollisionChannel::ECC_Camera, ECollisionResponse::ECR_Ignore);

    checkf(BulkInteractionFlags >= 0, TEXT("flags are invalid"));

    if (UDIY_InteractionUtility::IsFlagSet(BulkInteractionFlags, (uint8)EDIY_InteractItemFlag::Can_Be_Destroyed))
    {
        Possible_Solidness_Processor = FindComponentByClass<UDIY_SolidnessProcessor>();
        if (nullptr != Possible_Solidness_Processor)
        {
            Possible_Solidness_Processor->OnInitWithConfigCopy(&config_copy);
            Possible_Solidness_Processor->OnResetComponentValues();
        }
        else
        {
            Possible_Solidness_Processor = Cast<UDIY_SolidnessProcessor>(AddComponentByClass(UDIY_SolidnessProcessor::StaticClass(), false, FTransform(), false));
            if (Possible_Solidness_Processor)
            {
                Possible_Solidness_Processor->RegisterComponent();
                Possible_Solidness_Processor->OnInitWithConfigCopy(&config_copy);

                AddInstanceComponent(Possible_Solidness_Processor);
            }
        }
    }

    if (UDIY_InteractionUtility::IsFlagSet(BulkInteractionFlags, (uint8)EDIY_InteractItemFlag::React_To_Temperature))
    {
        Possible_Temperature_Processor = FindComponentByClass<UDIY_TemperatureProcessor>();
        if (nullptr != Possible_Temperature_Processor)
        {
            Possible_Solidness_Processor->OnInitWithConfigCopy(&config_copy);
            Possible_Solidness_Processor->OnResetComponentValues();
        }
        else
        {
            // dynamically added components
            Possible_Temperature_Processor = Cast<UDIY_TemperatureProcessor>(AddComponentByClass(UDIY_TemperatureProcessor::StaticClass(), false, FTransform(), false));
            if (Possible_Temperature_Processor)
            {
                Possible_Temperature_Processor->RegisterComponent();
                Possible_Temperature_Processor->OnInitWithConfigCopy(&config_copy);
                AddInstanceComponent(Possible_Temperature_Processor);
            }
        }
    }

    if (UDIY_InteractionUtility::IsFlagSet(BulkInteractionFlags, (uint8)EDIY_InteractItemFlag::Has_Any_Conductivity))
    {
        Possible_Conductivity_Processor = FindComponentByClass<UDIY_ConductivityProcessor>();

        if (nullptr != Possible_Conductivity_Processor)
        {
            Possible_Conductivity_Processor->OnInitWithConfigCopy(&config_copy);
            Possible_Conductivity_Processor->OnResetComponentValues();
        }
        else
        {
            // dynamically added components
            Possible_Conductivity_Processor = Cast<UDIY_ConductivityProcessor>(AddComponentByClass(UDIY_ConductivityProcessor::StaticClass(), false, FTransform(), false));
            if (Possible_Conductivity_Processor)
            {
                Possible_Conductivity_Processor->RegisterComponent();
                Possible_Conductivity_Processor->OnInitWithConfigCopy(&config_copy);
                AddInstanceComponent(Possible_Conductivity_Processor);
            }
        }
    }
}

bool ADIY_ItemBase::SwitchCycleState(EItemLifeCycleState targetState, bool ForceOverride)
{

    return false;
}

#if UE_BUILD_DEVELOPMENT || UE_BUILD_DEBUG
void ADIY_ItemBase::UpdateWidgetText_Internal(const FString &NewText)
{
    if (StateDisplayWidget)
    {
        StateDisplayWidget->UpdateText(NewText);

        return;
    }

    if (UUserWidget *Widget = ItemStateWidgetComponent->GetUserWidgetObject())
    {
        StateDisplayWidget = Cast<UDIY_ItemStateWidget>(Widget);
        if (StateDisplayWidget)
        {
            StateDisplayWidget->UpdateText(NewText);
        }
    }
}

void ADIY_ItemBase::UpdateStateWidgetInfo(float inDeltaTime)
{
    
    if (!FDIY_GlobalDebugSettings::sInstance.item.bShowItemState)
    {
        if (ItemStateWidgetComponent)
        {
            ItemStateWidgetComponent->SetVisibility(false);
        }

        return;
    }

    ItemStateWidgetComponent->SetVisibility(true);
    FString updated_text{};

    updated_text += FString::Printf(TEXT("ItemID: %s \n"),
                                    *UEnum::GetValueAsString(config_copy.ItemID));
    if (UDIY_InteractionUtility::IsFlagSet(BulkInteractionFlags, (uint8)EDIY_InteractItemFlag::React_To_Temperature) && nullptr != Possible_Temperature_Processor)
    {
        updated_text += FString::Printf(TEXT("Temp: State %s \n temp %f \n moist %f \n self_burn %f \n self_freeze %f \n self_thaw %f \n"),
                                        *UEnum::GetValueAsString(Possible_Temperature_Processor->GetCurrentState()),
                                        Possible_Temperature_Processor->GetFinalTemperatureValue(),
                                        Possible_Temperature_Processor->GetFinalMoistureValue(),
                                        Possible_Temperature_Processor->GetTemperatureAndMoistAttrs().self_combustible_temperature,
                                        Possible_Temperature_Processor->GetTemperatureAndMoistAttrs().self_frozen_temperature,
                                        Possible_Temperature_Processor->GetTemperatureAndMoistAttrs().self_thaw_temparature);
    }

    if (UDIY_InteractionUtility::IsFlagSet(BulkInteractionFlags, (uint8)EDIY_InteractItemFlag::Has_Any_Conductivity) && nullptr != Possible_Conductivity_Processor)
    {
        updated_text += FString::Printf(TEXT("Conduc: State %s \n  AmpereInten %f \n Metalic %f \n Purity %f \n"),
                                        *UEnum::GetValueAsString(Possible_Conductivity_Processor->GetCurrentConductivityState()),
                                        Possible_Conductivity_Processor->GetFinal_ElectricityIntensityAmpere(),

                                        Possible_Conductivity_Processor->GetConductivityAttr().MetalSelf_Conductivity,
                                        Possible_Conductivity_Processor->GetConductivityAttr().Metal_Self_Purity

        );
    }

    if (UDIY_InteractionUtility::IsFlagSet(BulkInteractionFlags, (uint8)EDIY_InteractItemFlag::Can_Be_Destroyed) && nullptr != Possible_Solidness_Processor)
    {
        updated_text += FString::Printf(TEXT("Solid: State %s \n Durab %f \n Sphereness %f \n Solidness %f \n Suscep_Cut %f Suscep_Blunt %f \n"),

                                        *UEnum::GetValueAsString(Possible_Solidness_Processor->GetCurrentState()),
                                        Possible_Solidness_Processor->GetFinal_Durability(),
                                        Possible_Solidness_Processor->GetSolidNessAttrs().sphereness,
                                        Possible_Solidness_Processor->GetSolidNessAttrs().fresh_born_solidness,
                                        Possible_Solidness_Processor->GetSolidNessAttrs().cutting_damage_susceptibility,
                                        Possible_Solidness_Processor->GetSolidNessAttrs().blunt_damage_susceptibility);
    }
    UpdateWidgetText_Internal(updated_text);
}

#endif
