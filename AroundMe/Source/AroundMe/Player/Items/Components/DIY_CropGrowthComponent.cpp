// All rights reserved to ShadowCandle Studio

#include "DIY_CropGrowthComponent.h"
#include "../../../Components/DIY_ChangeStaticMeshComponent.h"
// Sets default values for this component's properties
UDIY_CropGrowthComponent::UDIY_CropGrowthComponent()
{
    // Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
    // off to improve performance if you don't need them.
    PrimaryComponentTick.bCanEverTick = false;

    // ...
}

// Called when the game starts
void UDIY_CropGrowthComponent::BeginPlay()
{
    Super::BeginPlay();

    // ...
}

bool UDIY_CropGrowthComponent::GrowWithSteps(int DeltaSteps)
{
    if (nullptr == CropChangeStaticMeshCompo)
    {
        CropChangeStaticMeshCompo = GetOwner()->FindComponentByClass<UDIY_ChangeStaticMeshComponent>();
    }
    int target_index = CropChangeStaticMeshCompo->GetCurrentStateIndex() + DeltaSteps;
    if (target_index < 0 || target_index >= CropChangeStaticMeshCompo->GetPossibleStateNum())
        return false;

    CropChangeStaticMeshCompo->ChangeState(target_index, false);
    return true;
}

// Called every frame
void UDIY_CropGrowthComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction)
{
    Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

    // ...
}
