#include "DIY_EnvSmartObject.h"
#include "Components/SphereComponent.h"
#include "Components/ArrowComponent.h"

ADIY_EnvSmartObject::ADIY_EnvSmartObject()
{
    InteractionSlot = CreateDefaultSubobject<USceneComponent>(TEXT("InteractionSlot"));
    InteractionSlot->SetupAttachment(RootComponent);

#if WITH_EDITOR

    SlotVisualizer = CreateDefaultSubobject<USphereComponent>(TEXT("SlotVisualizer"));
    if (SlotVisualizer)
    {
        SlotVisualizer->SetupAttachment(InteractionSlot);
        SlotVisualizer->SetSphereRadius(20.f);
        SlotVisualizer->SetLineThickness(2.0f);
        SlotVisualizer->ShapeColor = FColor::Cyan;
        SlotVisualizer->bDrawOnlyIfSelected = false;
        SlotVisualizer->bIsEditorOnly = true;
    }

    SlotArrow = CreateDefaultSubobject<UArrowComponent>(TEXT("SlotArrow"));
    if (SlotArrow)
    {
        SlotArrow->SetupAttachment(InteractionSlot);
        SlotArrow->ArrowSize = 1.0f;
        SlotArrow->ArrowColor = FColor::Cyan;
        SlotArrow->bIsEditorOnly = true;
    }
#endif
}

// 核心：这里的参数 SlotTag 后面绝对不能带默认值了！
FTransform ADIY_EnvSmartObject::GetInteractionSlot_Implementation(FName SlotTag) const
{

    return InteractionSlot->GetComponentTransform();
}
