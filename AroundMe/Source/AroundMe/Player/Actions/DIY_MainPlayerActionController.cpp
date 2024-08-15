#include "DIY_MainPlayerActionController.h"
#include "AroundMe/Player/Items/DIY_Item.h"
#include "AroundMe/GameUtilities/Logs/DIY_LogHelper.h"

UDIY_MainPlayerActionController::UDIY_MainPlayerActionController()
{

    PrimaryComponentTick.bCanEverTick = true;
}

void UDIY_MainPlayerActionController::BeginPlay()
{
    Super::BeginPlay();

    InitWorldPosition = this->GetOwner()->GetActorLocation();
    InitRotator = this->GetOwner()->GetActorRotation();
}
void UDIY_MainPlayerActionController::SetCollisionProfileName_Recursively(USceneComponent *inFirstCompo, FName InCollisionProfileName)
{
    UStaticMeshComponent *cur_first_static_mesh_compo = Cast<UStaticMeshComponent>(inFirstCompo);

    cur_first_static_mesh_compo->SetCollisionProfileName(InCollisionProfileName);
    checkf(cur_first_static_mesh_compo, TEXT("first compo is not static mesh or anything"));

    TArray<USceneComponent *> cur_all_children_compos;
    cur_first_static_mesh_compo->GetChildrenComponents(true, cur_all_children_compos);
    for (USceneComponent *cur_compo : cur_all_children_compos)
    {
        if (UStaticMeshComponent *cur_static = Cast<UStaticMeshComponent>(cur_compo))
        {
            cur_static->SetCollisionProfileName(InCollisionProfileName);
        }
    }
}

void UDIY_MainPlayerActionController::SetCollisionEnabled_Recursively(USceneComponent *inFirstCompo, ECollisionEnabled::Type NewType)
{
    UStaticMeshComponent *cur_first_static_mesh_compo = Cast<UStaticMeshComponent>(inFirstCompo);

    cur_first_static_mesh_compo->SetCollisionEnabled(NewType);
    checkf(cur_first_static_mesh_compo, TEXT("first compo is not static mesh or anything"));

    TArray<USceneComponent *> cur_all_children_compos;
    cur_first_static_mesh_compo->GetChildrenComponents(true, cur_all_children_compos);
    for (USceneComponent *cur_compo : cur_all_children_compos)
    {
        if (UStaticMeshComponent *cur_static = Cast<UStaticMeshComponent>(cur_compo))
        {
            cur_static->SetCollisionEnabled(NewType);
        }
    }
}

void UDIY_MainPlayerActionController::SetSimulatePhysics_Recursively(USceneComponent *inFirstCompo, bool inEnable)
{
    UStaticMeshComponent *cur_first_static_mesh_compo = Cast<UStaticMeshComponent>(inFirstCompo);

    cur_first_static_mesh_compo->SetSimulatePhysics(inEnable);
    checkf(cur_first_static_mesh_compo, TEXT("first compo is not static mesh or anything"));

    TArray<USceneComponent *> cur_all_children_compos;
    cur_first_static_mesh_compo->GetChildrenComponents(true, cur_all_children_compos);
    for (USceneComponent *cur_compo : cur_all_children_compos)
    {
        if (UStaticMeshComponent *cur_static = Cast<UStaticMeshComponent>(cur_compo))
        {
            cur_static->SetSimulatePhysics(inEnable);
        }
    }
}

void UDIY_MainPlayerActionController::UpdateStateMachine(float inDelta)
{
}

void UDIY_MainPlayerActionController::UpdateParams(float inDelta)
{

    if (nullptr != PickUpedActor)
    {

        UStaticMeshComponent *BasicStaticMeshComponent = Cast<UStaticMeshComponent>(PickUpedActor->GetRootComponent());

        if (nullptr != BasicStaticMeshComponent && HasImpulseTask && BasicStaticMeshComponent->IsSimulatingPhysics())
        {
            HasImpulseTask = false;
            EASY_LOG_MAINPLAYER("YYYYYYYYYYYY item launched!!!!");
            // BasicStaticMeshComponent->AddImpulse(PulseVec, NAME_None, true);

            BasicStaticMeshComponent->SetPhysicsLinearVelocity(PulseVec * mPickActionVelocityCoe);
            PickUpedActor = nullptr;
        }
        if (nullptr != BasicStaticMeshComponent)
        {
            if (TargetPhysicsState == 1)
            {
                BasicStaticMeshComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);
                BasicStaticMeshComponent->SetCollisionResponseToChannel(ECollisionChannel::ECC_Pawn, ECollisionResponse::ECR_Overlap);
                TargetPhysicsState = -1;
            }

            if (TargetPhysicsState == 0)
            {
                BasicStaticMeshComponent->SetSimulatePhysics(true);
                BasicStaticMeshComponent->SetCollisionResponseToChannel(ECollisionChannel::ECC_Pawn, ECollisionResponse::ECR_Block);
                TargetPhysicsState = -1;
            }
        }
    }
}

void UDIY_MainPlayerActionController::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction)
{
    Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

    UpdateParams(DeltaTime);
    UpdateStateMachine(DeltaTime);
}

void UDIY_MainPlayerActionController::PicUpDetectedItem(AActor *inActor, FName SocketName)
{
    if (!PickUpedActor)
    {
        if (inActor)
        {

            ADIY_ItemBase *ItemBase = Cast<ADIY_ItemBase>(inActor);
            if (ItemBase)
            {
                UStaticMeshComponent *PickedUpActorBasicStaticMeshCompo = Cast<UStaticMeshComponent>(inActor->GetRootComponent());
                USkeletalMeshComponent *picker_mesh = GetOwner()->FindComponentByClass<USkeletalMeshComponent>();
                if (nullptr != PickedUpActorBasicStaticMeshCompo)
                {

                    PickedUpActorBasicStaticMeshCompo->SetSimulatePhysics(false);
                    // BasicStaticMeshComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);

                    inActor->AttachToComponent(picker_mesh, FAttachmentTransformRules::KeepRelativeTransform, SocketName);
                    EASY_LOG_MAINPLAYER("attached to the actor successfully");

                    TargetPhysicsState = 1;
                }

                PickUpedActor = inActor;
                EASY_LOG_MAINPLAYER("Picked up the actor successfully");
            }
        }
    }
}

void UDIY_MainPlayerActionController::PlacePickedUpItem()
{
    if (PickUpedActor)
    {
        ADIY_ItemBase *ItemBase = Cast<ADIY_ItemBase>(PickUpedActor);

        if (ItemBase)
        {

            UStaticMeshComponent *PlacedActorBasicStaticMeshCompo = Cast<UStaticMeshComponent>(ItemBase->GetRootComponent());

            if (nullptr == PlacedActorBasicStaticMeshCompo)
                return;

            FVector pulse_dir = GetOwner()->GetActorForwardVector() + GetOwner()->GetActorUpVector();

            pulse_dir = pulse_dir.GetSafeNormal();

            ItemBase->DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);

            FVector StartLocation = ItemBase->GetActorLocation();
            FVector EndLocation = StartLocation + pulse_dir * 1000.0f;

            // 箭头颜色
            FColor ArrowColor = FColor::Red;

            // 箭头尺寸
            float ArrowSize = 10.0f;

            // 持续时间（秒），0 表示只在当前帧绘制
            float Duration = 2.0f;

            // 厚度
            float Thickness = 2.0f;

            // 绘制箭头
            DrawDebugLine(GetWorld(), StartLocation, EndLocation, ArrowColor, true, 2.0f, 0, Thickness);

            HasImpulseTask = true;
            PulseVec = pulse_dir;
            // ItemBase->GetItemDefualtConfig().ItemMass * mPickActionVelocityCoe;

            EASY_LOG_MAINPLAYER("released to ground successfully");

            PlacedActorBasicStaticMeshCompo->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);

            TargetPhysicsState = 0;

            EASY_LOG_MAINPLAYER("placed vvvvv up the actor successfully");
        }
    }
}

void UDIY_MainPlayerActionController::ProcessJumpInput()
{
}
