// All rights reserved to ShadowCandle Studio


#include "DIY_Item.h"
#include "Components/BoxComponent.h" 


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
	
	BasicStaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BasicStaticMeshComponent")); // 请替换成你实际的组件类
	BasicStaticMeshComponent->SetCollisionProfileName(TEXT("OverlapAll"));
	RootComponent = BasicStaticMeshComponent;
	
	// Create and attach a Box Collision component as the root component
	BoxCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxCollision"));
	//BoxCollision->SetSimulatePhysics(true);
	BoxCollision->SetCollisionProfileName(TEXT("DIY_Item_Pres"));
	//BoxCollision->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	BoxCollision->SetupAttachment(RootComponent);
	
	
	

	
	
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

void ADIY_ItemBase::OnPickUp(APawn* Picker, FName SocketName)
{
	// 例如，将物体附加到 Picker 的 socket 上
	if (Picker)
	{
		USkeletalMeshComponent* PickerMesh = Picker->FindComponentByClass<USkeletalMeshComponent>();
		if (PickerMesh)
		{
			BoxCollision->SetCollisionEnabled(ECollisionEnabled::NoCollision);
			AttachToComponent(PickerMesh, FAttachmentTransformRules::SnapToTargetNotIncludingScale, SocketName);
		}
	}
}

void ADIY_ItemBase::OnPlaced()
{
	DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);
	BoxCollision->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	this->SetActorRotation(InitRotator);
	FVector CurLocation=this->GetActorLocation();
	CurLocation.Z = InitWorldPosition.Z;
	this->SetActorLocation(CurLocation);
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
