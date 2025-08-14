#include "DIY_RoughEnvScanner.h"
#include "Components/BoxComponent.h"

#include "../Items/DIY_Item.h"
#include "../../GameUtilities/Logs/DIY_LogHelper.h"
#include "GameFramework/Actor.h"
#include "../Interactions/DIY_InteractionUtility.h"

UDIY_RoughEnvScanner::UDIY_RoughEnvScanner()
{

    PrimaryComponentTick.bCanEverTick = false;
    SetCollisionEnabled(ECollisionEnabled::QueryOnly);
    SetCollisionObjectType(ECollisionChannel::ECC_WorldStatic);
    SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Overlap);
    
   
    
}
  void UDIY_RoughEnvScanner::BeginPlay()
{
    Super::BeginPlay();

    this->OnComponentBeginOverlap.AddDynamic(this, &UDIY_RoughEnvScanner::ProcessBeginOverlapEvent);
    this->OnComponentEndOverlap.AddDynamic(this, &UDIY_RoughEnvScanner::ProcessEndOverlapEvent);

    
    GetOverlappingActors(mDetectedActors,TSubclassOf<ADIY_ItemBase>());

    GetNearest_DetectedActor();

    
    
}

void UDIY_RoughEnvScanner::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
    Super::EndPlay(EndPlayReason);

    this->OnComponentBeginOverlap.RemoveAll(this);
    this->OnComponentEndOverlap.RemoveAll(this);
}

AActor *UDIY_RoughEnvScanner::GetNearest_DetectedActor() const
{
    if(mDetectedActors.Num() == 0)
    {
        return nullptr;
    }

    AActor* OwnerActor=GetOwner();

    if(OwnerActor == nullptr)
    {
        return nullptr;
    }

    float nearest_distance = FLT_MAX;

    AActor* nearest_actor = nullptr;

    FVector OwnerActorForwardVector =OwnerActor->GetActorForwardVector();


    
    for(AActor* CurActor : mDetectedActors)
    {
        if(!IsValid(CurActor))
        {
            continue;

        }
        ADIY_ItemBase* ItemActor = Cast<ADIY_ItemBase>(CurActor);
        if(nullptr==ItemActor)
        {
            if (!ItemActor->CheckItemFlag(EDIY_InteractItemFlag::Can_Be_PickUped) && !ItemActor->CheckItemFlag(EDIY_InteractItemFlag::Can_Be_Drilled))
                continue;
        }

        float cur_distance = CurActor->GetDistanceTo(OwnerActor);
        if(cur_distance >= nearest_distance)
        {
            continue;
        }
        FVector CurActorToOwnerActor = CurActor->GetActorLocation() - OwnerActor->GetActorLocation();
        //added to avoid selecting item behind the player
        if(CurActorToOwnerActor.Dot(OwnerActorForwardVector) <= 0.0f)
        {
            continue;
        }
        
        
        nearest_distance = cur_distance;
        nearest_actor=CurActor;
        
    }
    if(nullptr!=nearest_actor)
    {
        DrawDebugSphere(GetWorld(), nearest_actor->GetActorLocation(), 100.0f,12,FColor::Black,false,0.1f);
    }
    
    return nearest_actor;
   
}

void UDIY_RoughEnvScanner::RemoveAllInvalidActors()
{
    mDetectedActors.RemoveAll([](AActor* CurActor)
    {
    return !IsValid(CurActor);
    });
}

void UDIY_RoughEnvScanner::ProcessBeginOverlapEvent(UPrimitiveComponent *OverlappedComponent, AActor *OtherActor, UPrimitiveComponent *OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult &SweepResult)
{
    EASY_LOG_MAINPLAYER("Item %s begin overlap with %s",*this->GetName(),*OtherActor->GetName());
    AActor* OwnerActor = GetOwner();

    if(nullptr==OwnerActor)
    {
        ensureMsgf(false,TEXT("DIY_RoughEnvScanner::ProcessBeginOverlapEvent: OwnerActor is null"));
        return;
    }

    
    ADIY_ItemBase* ItemActor = Cast<ADIY_ItemBase>(OtherActor);

    //ignore non item actor
    if(nullptr==ItemActor)
    {
        return;
    }

    //aalready  detected
    if(mDetectedActors.Contains(OtherActor))
    {
        return;
    }

    mDetectedActors.Add(OtherActor);
    RemoveAllInvalidActors();
    
    DrawDebugSphere(GetWorld(),OtherActor->GetActorLocation(),100.0f,12,FColor::Green,false,1.0f);
   

   
}

void UDIY_RoughEnvScanner::ProcessEndOverlapEvent(UPrimitiveComponent *OverlappedComponent, AActor *OtherActor, UPrimitiveComponent *OtherComp, int32 OtherBodyIndex)
{
   
     ADIY_ItemBase* ItemActor = Cast<ADIY_ItemBase>(OtherActor);

    //ignore non item actor
    if(nullptr==ItemActor)
    {
        return;
    }
    
    
    DrawDebugSphere(GetWorld(),OtherActor->GetActorLocation(),100.0f,12,FColor::Red,false,1.0f);
    
    
    mDetectedActors.RemoveSingleSwap(ItemActor);
    
    RemoveAllInvalidActors();


}
