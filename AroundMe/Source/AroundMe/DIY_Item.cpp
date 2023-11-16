// All rights reserved to ShadowCandle Studio


#include "DIY_Item.h"
#include "Components/BoxComponent.h" 


ADIY_ItemBase::ADIY_ItemBase()
{
	// Set this actor to call Tick() every frame
	PrimaryActorTick.bCanEverTick = true;
	
	BasicStaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BasicStaticMeshComponent")); // ���滻����ʵ�ʵ������
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
	
}

// Called every frame
void ADIY_ItemBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ADIY_ItemBase::OnPickUp(APawn* Picker, FName SocketName)
{
	// ���磬�����帽�ӵ� Picker �� socket ��
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
}
