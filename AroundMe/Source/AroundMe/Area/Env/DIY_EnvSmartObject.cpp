#include "DIY_EnvSmartObject.h"

ADIY_EnvSmartObject::ADIY_EnvSmartObject()
{
    InteractionSlot = CreateDefaultSubobject<USceneComponent>(TEXT("InteractionSlot"));
    InteractionSlot->SetupAttachment(RootComponent);
}

FTransform ADIY_EnvSmartObject::GetInteractionSlot() const
{
    return InteractionSlot->GetComponentTransform();
}