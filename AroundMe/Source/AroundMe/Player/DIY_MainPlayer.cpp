// All rights reserved to ShadowCandle Studio
#include "DIY_MainPlayer.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"

#include "Components/CapsuleComponent.h"
#include "Components/ArrowComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Engine/StreamableManager.h"
#include "Items/DIY_Item.h"
#include "Engine/AssetManager.h"
#include "Actions/DIY_MainPlayerInputController.h"
#include "AroundMe/GameUtilities/DIY_HelperMacros.h"



// Sets default values
ADIY_MainPlayer::ADIY_MainPlayer()
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;



	HairComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("HairComponent"));
	HairComponent->SetupAttachment(GetMesh());

	
	HatComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("HatComponent"));
	

	HatComponent->SetupAttachment(GetMesh(),TEXT("headSocket"));

	
}

// Called when the game starts or when spawned
void ADIY_MainPlayer::BeginPlay()
{
	Super::BeginPlay();



	APlayerController* PC = Cast<APlayerController>(GetController());
	if (PC)
	{
		PC->PlayerCameraManager->ViewPitchMin = -45.0f; 
		PC->PlayerCameraManager->ViewPitchMax = 45.0f;   
		
	}

	AcquireOwnerActorOwnedUDIY_MainPlayerInputController()->TriggerProcessJumpInput.AddDynamic(this,&ADIY_MainPlayer::DoJumpAction);

}

void ADIY_MainPlayer::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);

	AcquireOwnerActorOwnedUDIY_MainPlayerInputController()->TriggerProcessJumpInput.RemoveDynamic(this,&ADIY_MainPlayer::DoJumpAction);

}

void ADIY_MainPlayer::PawnClientRestart()
{
	Super::PawnClientRestart();
	// Get the Enhanced Input Local Player Subsystem from the Local Player related to our Player Controller.
   

	if (APlayerController* PC = Cast<APlayerController>(GetController()))
	{
		AcquireOwnerActorOwnedUDIY_MainPlayerInputController()->RegisterInputMappings(PC);
	}
	UE_LOG(MainPlayerLog, Warning, TEXT("is enbled for input %d"),InputEnabled());
}


void ADIY_MainPlayer::UpdateTPSCamera(float deltaTime)
{
	

	
	
	FVector ActorLocation = GetActorLocation();
	FVector EndLocation = ActorLocation + (GetActorForwardVector() * 100);
	//DrawDebugLine(GetWorld(), ActorLocation, EndLocation, FColor::Green, false, -1, 0, 5);

	//if there is any input from player
	if (AcquireOwnerActorOwnedUDIY_MainPlayerInputController()->inPutVector2D.Length() > 0.1f && AcquireOwnerActorOwnedUDIY_MainPlayerInputController()->IsInputingMove)
	{
		
		FRotator CameraRot =AcquireOwnerActorOwnedUDIY_MainPlayerCameraController()->FollowCamera->GetComponentRotation();




		
		FRotator CurrentRotation = GetActorRotation();

		
		float InterpSpeed = 5.0f; 
		FRotator Target_Rotator = AcquireOwnerActorOwnedUDIY_MainPlayerInputController()->DesiredDir_ByPlayerInput_FollowCamView.Rotation();
		Target_Rotator.Pitch = 0.f;
		Target_Rotator.Roll = 0.f;
		
		FRotator NewRotation = FMath::RInterpTo(CurrentRotation, Target_Rotator, deltaTime, InterpSpeed);
	
		SetActorRotation(NewRotation);
	}
}

void ADIY_MainPlayer::UpdatePlayerMove(float deltaTime)
{
	if (AcquireOwnerActorOwnedUDIY_MainPlayerInputController()->inPutVector2D.Length() > 0.1f &&AcquireOwnerActorOwnedUDIY_MainPlayerInputController()->IsInputingMove)
	{
		AddMovementInput(AcquireOwnerActorOwnedUDIY_MainPlayerInputController()->DesiredDir_ByPlayerInput_FollowCamView);
	}
}

void ADIY_MainPlayer::DoJumpAction(const FInputActionValue &Value)
{
	Jump();
}

// Called every frame
void ADIY_MainPlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	

	UpdateTPSCamera(DeltaTime);
	
	UpdatePlayerMove(DeltaTime);
	
}


// Called to bind functionality to input
void ADIY_MainPlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	UE_LOG(MainPlayerLog, Warning, TEXT("PlayerInputComponent binded"));
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	
	AcquireOwnerActorOwnedUDIY_MainPlayerInputController()->SetupPlayerInputComponent(PlayerInputComponent);
	
}


IMPL_GET_COMPONENT_HELPER_FOR_ACTOR(ADIY_MainPlayer,UDIY_MainPlayerCameraController)

IMPL_GET_COMPONENT_HELPER_FOR_ACTOR(ADIY_MainPlayer,UDIY_MainPlayerInputController)


void ADIY_MainPlayer::ChangeHair(EHairType NewHairType)
{
	FSoftObjectPath HairMeshToLoad = GetHairMeshReferenceFromType(NewHairType);
	LoadAndSetSkeletalMesh(HairComponent, HairMeshToLoad);
}

void ADIY_MainPlayer::ChangeHat(EHatType NewHatType)
{
	FSoftObjectPath HatMeshToLoad = GetHatMeshReferenceFromType(NewHatType);
	LoadAndSetSkeletalMesh(HatComponent, HatMeshToLoad);
}
void ADIY_MainPlayer::PicUpDetectedItem(AActor* inActor,FName SocketName)
{
	if (!PickUpedActor)
	{
		if (inActor)
		{
			
			ADIY_ItemBase* ItemBase = Cast<ADIY_ItemBase>(inActor);
			if (ItemBase)
			{
				ItemBase->OnPickUp(this, SocketName);
				PickUpedActor = inActor;
			}


		}
	}
	
}
//this will null the pickedUpActor Pointer
void ADIY_MainPlayer::PlacePickedUpItem()
{
	if (PickUpedActor)
	{
		ADIY_ItemBase* ItemBase = Cast<ADIY_ItemBase>(PickUpedActor);
		if (ItemBase)
		{
			ItemBase->OnPlaced();
			PickUpedActor = nullptr;
		}
		
	}
}
void ADIY_MainPlayer::LoadAndSetSkeletalMesh(USkeletalMeshComponent* Component, const FSoftObjectPath& AssetToLoad)
{
	if (Component && AssetToLoad.IsValid())
	{
		FStreamableManager& StreamableManager = UAssetManager::GetStreamableManager();
		StreamableManager.RequestAsyncLoad(AssetToLoad, FStreamableDelegate::CreateUObject(this, &ADIY_MainPlayer::OnMeshLoaded, Component, AssetToLoad));
	}
}

void ADIY_MainPlayer::OnMeshLoaded(USkeletalMeshComponent* Component, FSoftObjectPath AssetLoaded)
{
	if (Component)
	{
		USkeletalMesh* LoadedMesh = Cast<USkeletalMesh>(AssetLoaded.TryLoad());
		if (LoadedMesh)
		{
			Component->SetSkeletalMesh(LoadedMesh);
		}
	}
}

FSoftObjectPath ADIY_MainPlayer::GetHairMeshReferenceFromType(EHairType HairType)
{
	const FSoftObjectPath* MeshReference = HairMeshesMap.Find(HairType);
	return MeshReference ? *MeshReference : FSoftObjectPath();
}

FSoftObjectPath ADIY_MainPlayer::GetHatMeshReferenceFromType(EHatType HatType)
{
	const FSoftObjectPath* MeshReference = HatMeshesMap.Find(HatType);
	return MeshReference ? *MeshReference : FSoftObjectPath();
}