#include "DIY_ItemDetector.h"
#include "Components/BoxComponent.h"

#include "../Items/DIY_Item.h"
#include "../../GameUtilities/Logs/DIY_LogHelper.h"
#include "GameFramework/Actor.h"
#include "../Interactions/DIY_InteractionUtility.h"

UDIY_ItemDetector::UDIY_ItemDetector()
{

    PrimaryComponentTick.bCanEverTick = false;
    SetCollisionEnabled(ECollisionEnabled::QueryOnly);
    SetCollisionObjectType(ECollisionChannel::ECC_WorldStatic);
    SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Overlap);
    // SetCollisionResponseToChannel(ECollisionChannel::ECC_Pawn, ECollisionResponse::ECR_Overlap);
    SetRelativeLocation({150.0f, 0.0f, 0.0f});
    BoxExtent = {100.0f, 50.f, 90.0f};
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

AActor *UDIY_ItemDetector::GetDetectedActor() const
{
    return mDetectedActor;
}

void UDIY_ItemDetector::ProcessBeginOverlapEvent(UPrimitiveComponent *OverlappedComponent, AActor *OtherActor, UPrimitiveComponent *OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult &SweepResult)
{
    EASY_LOG_MAINPLAYER("ProcessBeginOverlapEvent");

    if (!mDetectedActor && OtherActor)
    {
        mDetectedActor = OtherActor;
        // FDIY_DamageInfo temp_info;
        // temp_info.DamageGiver = GetOwner();
        // temp_info.DamageTaker = OtherActor;
        // temp_info.DamageAmount = 100.0f;
        // UDIY_InteractionUtility::SetFlag(temp_info.BulkDamageFlags, (uint8)EDIY_DamageInfoFlag::Is_Fire_Damage);
        // UDIY_InteractionUtility::SetFlag(temp_info.BulkDamageFlags, (uint8)EDIY_DamageInfoFlag::Is_One_Shot_Type);
        // //UDIY_InteractionUtility::SetFlag(temp_info.BulkDamageFlags, (uint8)EDIY_DamageInfoFlag::Is_Solid_Damage);
        // //speherness setup
        // temp_info.Damage_Float_0 = 0.6f;
        // UDIY_InteractionUtility::ApplyDamage(temp_info);
    }

    ADIY_ItemBase *possible_item = Cast<ADIY_ItemBase>(OtherActor);
    if (IsValid(possible_item))
    {
        possible_item->ResumeTrinkling();
    }

    //@toDo DIY Craft platform
}

void UDIY_ItemDetector::ProcessEndOverlapEvent(UPrimitiveComponent *OverlappedComponent, AActor *OtherActor, UPrimitiveComponent *OtherComp, int32 OtherBodyIndex)
{
    EASY_LOG_MAINPLAYER("ProcessEndOverlapEvent");
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

    ADIY_ItemBase *possible_item = Cast<ADIY_ItemBase>(OtherActor);
    if (IsValid(possible_item))
    {
        possible_item->PauseTrinkling();
    }

    //@toDo DIY Craft platform
}
