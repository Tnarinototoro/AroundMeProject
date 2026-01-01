#include "DIY_SolidnessProcessor.h"
#include "../../GameUtilities/Logs/DIY_LogHelper.h"
#include "../../GameUtilities/DIY_Utilities.h"
#include "../Items/DIY_ItemManager.h"

UDIY_SolidnessProcessor::UDIY_SolidnessProcessor()
{

    PrimaryComponentTick.bCanEverTick = false;
}

void UDIY_SolidnessProcessor::BeginPlay()
{
    Super::BeginPlay();

    OnResetComponentValues();
}

// 每帧调用
void UDIY_SolidnessProcessor::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction)
{
    Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

void UDIY_SolidnessProcessor::OnInitWithConfigCopy(const FDIY_ItemDefaultConfig *inConfig)
{
    solidness_attr = inConfig->PossibleSolidnessConfig;
}

void UDIY_SolidnessProcessor::OnResetComponentValues()
{
    Final_Durability = solidness_attr.fresh_born_solidness;
}

void UDIY_SolidnessProcessor::AcceptDamage(float inDamage, float inDamageSphereNess)
{

    inDamageSphereNess = FMath::Clamp<float>(inDamageSphereNess, 0.f, 1.0f);
    float damage_loss = (inDamage * inDamageSphereNess * solidness_attr.blunt_damage_susceptibility + inDamage * (1 - inDamageSphereNess) * solidness_attr.cutting_damage_susceptibility);
    Final_Durability -= damage_loss;

    EASY_LOG_MAINPLAYER("Actor: %s damage durability loss of %f", *this->GetOwner()->GetName(), damage_loss);

    if (Final_Durability <= 0.f)
    {
        UDIY_Utilities::DIY_GetItemManagerInstance(GetWorld())->RequestRecycleItem(GetOwner());
        this->DestroyComponent();
    }
}

void UDIY_SolidnessProcessor::GiveDamage(AActor *inDamageTaker, float giveDamage)
{
    //@TODO calculate this from physics
    float damage_given = 100.0f;

    // inDamageTaker->TakeDamage(damage_given);
}
