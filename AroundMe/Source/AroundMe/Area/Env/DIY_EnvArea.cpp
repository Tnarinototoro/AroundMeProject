#include "DIY_EnvArea.h"
#include "Components/BoxComponent.h"

ADIY_EnvArea::ADIY_EnvArea()
{
    // 默认创建一个 Box 碰撞，方便在场景里划定房间范围
    AreaCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("AreaCollision"));
    AreaCollision->SetupAttachment(RootComponent);
    

    // 设置碰撞预设为 Trigger
    AreaCollision->SetCollisionProfileName(TEXT("Trigger"));
}

void ADIY_EnvArea::BeginPlay()
{
    Super::BeginPlay();
    AreaCollision->OnComponentBeginOverlap.AddDynamic(this, &ADIY_EnvArea::OnOverlapBegin);
    AreaCollision->OnComponentEndOverlap.AddDynamic(this, &ADIY_EnvArea::OnOverlapEnd);
}

void ADIY_EnvArea::OnOverlapBegin(UPrimitiveComponent *OverlappedComp, AActor *OtherActor, UPrimitiveComponent *OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult &SweepResult)
{
}

void ADIY_EnvArea::OnOverlapEnd(UPrimitiveComponent *OverlappedComp, AActor *OtherActor, UPrimitiveComponent *OtherComp, int32 OtherBodyIndex)
{
}
