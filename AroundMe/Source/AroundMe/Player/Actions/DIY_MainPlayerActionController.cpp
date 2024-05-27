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
}

void UDIY_MainPlayerActionController::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction)
{
    Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

void UDIY_MainPlayerActionController::PicUpDetectedItem(AActor* inActor, FName SocketName)
{
	if (!PickUpedActor)
	{
		if (inActor)
		{

			ADIY_ItemBase* ItemBase = Cast<ADIY_ItemBase>(inActor);
			if (ItemBase)
			{
				ItemBase->OnPickUp(GetOwner(), SocketName);
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
		ADIY_ItemBase* ItemBase = Cast<ADIY_ItemBase>(PickUpedActor);
		if (ItemBase)
		{
			ItemBase->OnPlaced();
			PickUpedActor = nullptr;
			EASY_LOG_MAINPLAYER("placed vvvvv up the actor successfully");
		}

	}
}



void UDIY_MainPlayerActionController::ProcessJumpInput()
{
    
}
