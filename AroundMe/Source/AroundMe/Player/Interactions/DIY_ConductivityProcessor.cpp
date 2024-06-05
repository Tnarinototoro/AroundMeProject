#include "DIY_ConductivityProcessor.h"
#include "DIY_TemperatureProcessor.h"


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
        AcquireOwnerActorOwnedUDIY_TemperatureProcessor()->OverrideOuterTemperature(temp_generated);
    }
}

// 每帧调用
void UDIY_ConductivityProcessor::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
    Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

  
}

void UDIY_ConductivityProcessor::OnInitWithConfigCopy(const FDIY_ItemDefualtConfig* inConfig)
{
}

void UDIY_ConductivityProcessor::OnConnectedToElectricity(float inAmpere)
{
    OuterWolrdGivenAmpere = FMath::Max(inAmpere, OuterWolrdGivenAmpere);
}


void UDIY_ConductivityProcessor::AddInstantElectricityAmpere(float inAmpere)
{
    AcquireOwnerActorOwnedUDIY_TemperatureProcessor()->AddEndurateTemperatureHolder(UDIY_TemperatureProcessor::ETemperatureHolderType::Self_thunder_shock,5.0f,CalculateGeneratedTemperature(inAmpere, 1.0f));
    
}

void UDIY_ConductivityProcessor::TakeDamage(float inDamageAmount)
{
}

float UDIY_ConductivityProcessor::CalculateGeneratedTemperature(float inAmpere, float deltaTime)
{
    
    return 
        inAmpere * 
        inAmpere *
        FMath::Clamp(metal_self_conductivity * metal_self_purity+
            AcquireOwnerActorOwnedUDIY_TemperatureProcessor()->GetFinalMoistureValue()*0.1f, 0.0f, 1.0f) * 
        R_scale * 
        deltaTime;
}

IMPL_GET_COMPONENT_HELPER_FOR_COMPONENT(UDIY_ConductivityProcessor, UDIY_TemperatureProcessor);