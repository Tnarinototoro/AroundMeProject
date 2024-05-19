#include "DIY_ItemDetector.h"
#include "Components/BoxComponent.h"

#include "AroundMe/Player/Items/DIY_Item.h"
#include "AroundMe/GameUtilities/Logs/DIY_LogHelper.h"
#include "GameFramework/Actor.h"

UDIY_ItemDetector::UDIY_ItemDetector()
{
    
    PrimaryComponentTick.bCanEverTick = false;
    SetCollisionEnabled(ECollisionEnabled::QueryOnly);
    SetCollisionObjectType(ECollisionChannel::ECC_WorldStatic);
    SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Overlap);
    //SetCollisionResponseToChannel(ECollisionChannel::ECC_Pawn, ECollisionResponse::ECR_Overlap);
    SetRelativeLocation({150.0f,0.0f,0.0f});
    BoxExtent = { 100.0f,50.f,90.0f };

      
}

// void UDIY_ItemDetector::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction)
// {


// }
void UDIY_ItemDetector::BeginPlay()
{
    Super::BeginPlay();

    this->OnComponentBeginOverlap.AddDynamic(this, &UDIY_ItemDetector::ProcessBeginOverlapEvent);
    this->OnComponentEndOverlap.AddDynamic(this, &UDIY_ItemDetector::ProcessEndOverlapEvent);
}

void UDIY_ItemDetector::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
    Super::EndPlay(EndPlayReason);

    this->OnComponentBeginOverlap.RemoveAll(this);
    this->OnComponentEndOverlap.RemoveAll(this);
    
}



AActor* UDIY_ItemDetector::GetDetectedActor() const
{
    return mDetectedActor;
}

void UDIY_ItemDetector::ProcessBeginOverlapEvent(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{

    UE_LOG(MainPlayerLog, Warning, TEXT("ProcessBeginOverlapEvent"));

    if (!mDetectedActor && OtherActor)
    {
        mDetectedActor = OtherActor;
    }
   
    ADIY_ItemBase* possible_item = Cast<ADIY_ItemBase>(OtherActor);
    if (IsValid(possible_item))
    {
        possible_item->ResumeTrinkling();
    }

    //@toDo DIY Craft platform


}

void UDIY_ItemDetector::ProcessEndOverlapEvent(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
    UE_LOG(MainPlayerLog, Warning, TEXT("ProcessEndOverlapEvent"));
    if (mDetectedActor == OtherActor)
    {
        if (IsValid(mDetectedActor))
        {
            mDetectedActor = nullptr;
        }
    }
    else
    {

    }

    ADIY_ItemBase* possible_item = Cast<ADIY_ItemBase>(OtherActor);
    if (IsValid(possible_item))
    {
        possible_item->PauseTrinkling();
    }

    //@toDo DIY Craft platform
}



