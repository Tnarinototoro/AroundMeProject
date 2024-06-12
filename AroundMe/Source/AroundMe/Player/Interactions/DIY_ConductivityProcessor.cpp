#include "DIY_ConductivityProcessor.h"
#include "DIY_TemperatureProcessor.h"
#include "../../DIY_ProjectConfig.h"

UDIY_ConductivityProcessor::UDIY_ConductivityProcessor()
{
   
    PrimaryComponentTick.bCanEverTick = false;



}


void UDIY_ConductivityProcessor::BeginPlay()
{
    Super::BeginPlay();

   
}

void UDIY_ConductivityProcessor::UpdateParams(float inDeltaTime)
{
    if (OuterWolrdGivenAmpere > 0.f)
    {
        float temp_generated=CalculateGeneratedTemperature(OuterWolrdGivenAmpere, inDeltaTime);
        AcquireOwnerActorOwnedUDIY_TemperatureProcessor()->AddInstantTemperatureChange(temp_generated);
    }
}

void UDIY_ConductivityProcessor::UpdateStateMachine(float inDeltaTime)
{
    switch (CurrentConductivityState)
    {
    case EConductivityState::CS_Normal:
        break;
    case EConductivityState::CS_OnAmpere:
        
        break;
    case EConductivityState::CS_Count:
        break;
    default:
        break;
    }
}

// 每帧调用
void UDIY_ConductivityProcessor::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
    Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

  
}

void UDIY_ConductivityProcessor::OnInitWithConfigCopy(const FDIY_ItemDefualtConfig* inConfig)
{
    copy_conduct_Attr = inConfig->PossibleConductivityConfig;
}

void UDIY_ConductivityProcessor::OnConnectedToElectricity(float inAmpere)
{
    OuterWolrdGivenAmpere = FMath::Max(inAmpere, OuterWolrdGivenAmpere);
}


void UDIY_ConductivityProcessor::AddInstantElectricityAmpere(float inAmpere)
{
    AcquireOwnerActorOwnedUDIY_TemperatureProcessor()->AddEndurateTemperatureHolder(5.0f,CalculateGeneratedTemperature(inAmpere, 1.0f));
    
}

void UDIY_ConductivityProcessor::TakeDamage(float inDamageAmount)
{
}

float UDIY_ConductivityProcessor::CalculateGeneratedTemperature(float inAmpere, float deltaTime)
{
    
    return 
        inAmpere * 
        inAmpere *
        FMath::Clamp(copy_conduct_Attr.MetalSelf_Conductivity * copy_conduct_Attr.Metal_Self_Purity +
            AcquireOwnerActorOwnedUDIY_TemperatureProcessor()->GetFinalMoistureValue()* UDIY_ProjectConfig::GetConfigInstance()->MoistAsBasicR_Scale_Coe, 0.0f, 1.0f) *
        UDIY_ProjectConfig::GetConfigInstance()->Conductivity_R_Scale *
        deltaTime;
}

IMPL_GET_COMPONENT_HELPER_FOR_COMPONENT(UDIY_ConductivityProcessor, UDIY_TemperatureProcessor);