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
}

void UDIY_RoughEnvScanner::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
    Super::EndPlay(EndPlayReason);

    this->OnComponentBeginOverlap.RemoveAll(this);
    this->OnComponentEndOverlap.RemoveAll(this);
}

AActor *UDIY_RoughEnvScanner::GetNearest_DetectedActor() const
{
    return mDetectedNearest_Actor;
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

    if (nullptr==mDetectedNearest_Actor || mDetectedNearest_Actor->GetDistanceTo(OwnerActor)>OtherActor->GetDistanceTo(OwnerActor))
    {
        //always choose and keep the nearest actor
        mDetectedNearest_Actor = OtherActor;
        DrawDebugSphere(GetWorld(),OtherActor->GetActorLocation(),100.0f,12,FColor::Green,false,1.0f);
    }
 
   

   
}

void UDIY_RoughEnvScanner::ProcessEndOverlapEvent(UPrimitiveComponent *OverlappedComponent, AActor *OtherActor, UPrimitiveComponent *OtherComp, int32 OtherBodyIndex)
{
   
     ADIY_ItemBase* ItemActor = Cast<ADIY_ItemBase>(OtherActor);

    //ignore non item actor
    if(nullptr==ItemActor)
    {
        return;
    }
    
    if (mDetectedNearest_Actor == OtherActor)
    {
        if (IsValid(mDetectedNearest_Actor))
        {
            mDetectedNearest_Actor = nullptr;
            DrawDebugSphere(GetWorld(),OtherActor->GetActorLocation(),100.0f,12,FColor::Yellow,false,1.0f);
        }
    }
    else
    {
        DrawDebugSphere(GetWorld(),OtherActor->GetActorLocation(),100.0f,12,FColor::Red,false,1.0f);
    }
   

   
}
