#include "DIY_SolidnessProcessor.h"


UDIY_SolidnessProcessor::UDIY_SolidnessProcessor()
{
   
    PrimaryComponentTick.bCanEverTick = false;



}


void UDIY_SolidnessProcessor::BeginPlay()
{
    Super::BeginPlay();

   
}

// 每帧调用
void UDIY_SolidnessProcessor::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
    Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

  
}

void UDIY_SolidnessProcessor::AcceptDamage(float inDamage, float inDamageSphereNess)
{
   
    Final_Durability -= (inDamage * sphereness * blunt_damage_susceptibility + inDamage * (1 - sphereness) * cutting_damage_susceptibility);


    if(Final_Durability<=0.f)
    {
        //@TODO output message 
    }

}

void UDIY_SolidnessProcessor::GiveDamage(AActor* inDamageTaker, float giveDamage)
{
    //@TODO calculate this from physics 
    float damage_given = 100.0f; 

    //inDamageTaker->TakeDamage(damage_given);
}

