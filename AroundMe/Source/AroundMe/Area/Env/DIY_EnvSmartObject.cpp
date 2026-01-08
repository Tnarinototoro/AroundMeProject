#include "DIY_EnvSmartObject.h"
#include "Components/SphereComponent.h"
#include "Components/ArrowComponent.h"

ADIY_EnvSmartObject::ADIY_EnvSmartObject()
{
    InteractionSlot = CreateDefaultSubobject<USceneComponent>(TEXT("InteractionSlot"));
    InteractionSlot->SetupAttachment(RootComponent);

#if WITH_EDITOR
    // 1. 创建圆环视觉效果（用 Sphere 模拟，设置只显示线框）
    SlotVisualizer = CreateDefaultSubobject<USphereComponent>(TEXT("SlotVisualizer"));
    if (SlotVisualizer)
    {
        SlotVisualizer->SetupAttachment(InteractionSlot);
        SlotVisualizer->SetSphereRadius(20.f);
        SlotVisualizer->SetLineThickness(2.0f);
        SlotVisualizer->ShapeColor = FColor::Cyan;
        SlotVisualizer->bDrawOnlyIfSelected = false; // 始终显示
        SlotVisualizer->bIsEditorOnly  = true;
    }

    // 2. 创建方向箭头
    SlotArrow = CreateDefaultSubobject<UArrowComponent>(TEXT("SlotArrow"));
    if (SlotArrow)
    {
        SlotArrow->SetupAttachment(InteractionSlot);
        SlotArrow->ArrowSize = 1.0f;
        SlotArrow->ArrowColor = FColor::Cyan;
        SlotArrow->bIsEditorOnly = true;
        // 箭头默认是指向 X 轴的，这正是 AI 交互的正前方
    }
#endif
}

FTransform ADIY_EnvSmartObject::GetInteractionSlot() const
{
    return InteractionSlot->GetComponentTransform();
}