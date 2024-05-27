// All rights reserved to ShadowCandle Studio


#include "DIY_Item.h"
#include "Components/BoxComponent.h" 
#include "../../GameUtilities/Logs/DIY_LogHelper.h"
#include "../Interactions/DIY_InteractionUtility.h"

void ADIY_ItemBase::UpdateHighLight()
{
	if (BasicStaticMeshComponent)
	{
		if (isEnabledHighLighting)
		{
			BasicStaticMeshComponent->SetRenderCustomDepth(false);
			isEnabledHighLighting = false;
		}
		else
		{
			BasicStaticMeshComponent->SetRenderCustomDepth(true);
			BasicStaticMeshComponent->SetCustomDepthStencilValue(HighLightColor);
			isEnabledHighLighting = true;
		}
		
		
	}
}

ADIY_ItemBase::ADIY_ItemBase()
{
	// Set this actor to call Tick() every frame
	PrimaryActorTick.bCanEverTick = true;
	
	BasicStaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BasicStaticMeshComponent"));
	//BasicStaticMeshComponent->SetCollisionProfileName(TEXT("OverlapAll"));
	RootComponent = BasicStaticMeshComponent;
	
	
	
	
	

	
	
}

ADIY_ItemBase::~ADIY_ItemBase()
{
}

// Called when the game starts or when spawned
void ADIY_ItemBase::BeginPlay()
{
	Super::BeginPlay();
	InitWorldPosition = this->GetActorLocation();
	InitRotator = this->GetActorRotation();


	GetWorld()->GetTimerManager().
		SetTimer(
			TimerHandle_HighLight, 
			this, 
			&ADIY_ItemBase::UpdateHighLight, 
			HighLightColorTranklingInterval,
			true);
	PauseTrinkling();
}

// Called every frame
void ADIY_ItemBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ADIY_ItemBase::OnPickUp(AActor* Picker, FName SocketName)
{
	
	if (Picker)
	{
		USkeletalMeshComponent* PickerMesh = Picker->FindComponentByClass<USkeletalMeshComponent>();
		if (PickerMesh)
		{
			BasicStaticMeshComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);
			AttachToComponent(PickerMesh, FAttachmentTransformRules::KeepRelativeTransform, SocketName);
			EASY_LOG_MAINPLAYER("attached to the actor successfully");
			
		}
	}
}

void ADIY_ItemBase::OnPlaced()
{
	
	DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);
	BasicStaticMeshComponent->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	this->SetActorRotation(InitRotator);
	FVector CurLocation=this->GetActorLocation();
	CurLocation.Z = InitWorldPosition.Z;
	this->SetActorLocation(CurLocation);
	EASY_LOG_MAINPLAYER("released to ground successfully");

}

void ADIY_ItemBase::ResumeTrinkling()
{
	if (GetWorld()->GetTimerManager().IsTimerPaused(TimerHandle_HighLight))
	{
		GetWorld()->GetTimerManager().UnPauseTimer(TimerHandle_HighLight);
	}
	BasicStaticMeshComponent->SetRenderCustomDepth(true);
	BasicStaticMeshComponent->SetCustomDepthStencilValue(HighLightColor);
	isEnabledHighLighting = true;
	
}

void ADIY_ItemBase::PauseTrinkling()
{
	if (!GetWorld()->GetTimerManager().IsTimerPaused(TimerHandle_HighLight))
	{
		GetWorld()->GetTimerManager().PauseTimer(TimerHandle_HighLight);
	}
	BasicStaticMeshComponent->SetRenderCustomDepth(false);
	isEnabledHighLighting = false;
}

void ADIY_ItemBase::InitWithConfig(const FDIY_ItemDefualtConfig& inConfig)
{
	config_copy = inConfig;


	for (EDIY_InteractItemFlag cur_flag : config_copy.ConfiguredFlags)
	{
		UDIY_InteractionUtility::SetFlag(BulkInteractionFlags,cur_flag);
		EASY_LOG_MAINPLAYER("Actor spawned with flag %d",BulkInteractionFlags);
	}
	

	if (!UDIY_InteractionUtility::IsFlagSet(BulkInteractionFlags, EDIY_InteractItemFlag::Static) &&
		UDIY_InteractionUtility::IsFlagSet(BulkInteractionFlags, EDIY_InteractItemFlag::Obey_Physics_Rules)
		)
	{
		BasicStaticMeshComponent->SetCollisionProfileName(TEXT("DIY_Item_Pres"));
		BasicStaticMeshComponent->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
		BasicStaticMeshComponent->SetSimulatePhysics(true);
		EASY_LOG_MAINPLAYER("Actor successgully spawned with configs adopted");
	}



	checkf(BulkInteractionFlags >= 0,TEXT("flags are invalid"));
	
}
