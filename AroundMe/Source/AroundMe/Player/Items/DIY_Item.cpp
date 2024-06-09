// All rights reserved to ShadowCandle Studio


#include "DIY_Item.h"
#include "Components/BoxComponent.h" 
#include "../../GameUtilities/Logs/DIY_LogHelper.h"
#include "DrawDebugHelpers.h"
#include "../Interactions/DIY_InteractionUtility.h"
#include "Components/WidgetComponent.h"
#include "../../UIWidgets/DIY_ItemStateWidget.h"
#include "../Interactions/DIY_SolidnessProcessor.h"
#include "../Interactions/DIY_TemperatureProcessor.h"
#include "../Interactions/DIY_ConductivityProcessor.h"


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
	
	PrimaryActorTick.bCanEverTick = true;
	
	BasicStaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BasicStaticMeshComponent"));
	
	RootComponent = BasicStaticMeshComponent;
	
	
	
	//FStringClassReference MyWidgetClassRef(TEXT("/Game/UI/DIY_UI_ResourceRemaing.DIY_UI_ResourceRemaing_C"));

	/*if (UClass* MyWidgetClass = MyWidgetClassRef.TryLoadClass<UUserWidget>())
	{
		
	}
	*/
	ItemStateWidgetComponent = CreateDefaultSubobject<UWidgetComponent>(TEXT("ItemStateWidgetComponent"));


	ItemStateWidgetComponent->SetupAttachment(BasicStaticMeshComponent);
	ItemStateWidgetComponent->SetWidgetSpace(EWidgetSpace::Screen);
	ItemStateWidgetComponent->SetDrawAtDesiredSize(false);
	//here the widget is created
	ItemStateWidgetComponent->SetWidgetClass(UDIY_ItemStateWidget::StaticClass());
	
	ItemStateWidgetComponent->SetPivot(FVector2D(0.5f, 0.5f));
	ItemStateWidgetComponent->SetVisibility(true);
	

	
	
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


	UpdateStateWidgetInfo(DeltaTime);
	
	if (HasImpulseTask&&PossiblePicker==nullptr)
	{
		//HasImpulseTask = false;
		//BasicStaticMeshComponent->AddImpulse(PulseVec, NAME_None, true);
	}


	if (TargetPhysicsState == 1 )
	{
		BasicStaticMeshComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);
		BasicStaticMeshComponent->SetCollisionResponseToChannel(ECollisionChannel::ECC_Pawn, ECollisionResponse::ECR_Overlap);
		TargetPhysicsState = -1;


	}

	if (TargetPhysicsState==0)
	{
		BasicStaticMeshComponent->SetSimulatePhysics(true);
		BasicStaticMeshComponent->SetCollisionResponseToChannel(ECollisionChannel::ECC_Pawn, ECollisionResponse::ECR_Block);
		TargetPhysicsState = -1;

	}
}

void ADIY_ItemBase::OnPickUp(AActor* Picker, FName SocketName)
{
	
	if (Picker)
	{
		PossiblePicker = Picker;
		USkeletalMeshComponent* PickerMesh = Picker->FindComponentByClass<USkeletalMeshComponent>();
		if (PickerMesh)
		{
			
			
			BasicStaticMeshComponent->SetSimulatePhysics(false);
			//BasicStaticMeshComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);
			
			AttachToComponent(PickerMesh, FAttachmentTransformRules::KeepRelativeTransform, SocketName);
			EASY_LOG_MAINPLAYER("attached to the actor successfully");

			TargetPhysicsState = 1;
			
		}
	}
}

void ADIY_ItemBase::OnPlaced()
{
	
	

	checkf(PossiblePicker != nullptr,TEXT("Item is not attached to actor"));


	FVector pulse_dir= PossiblePicker->GetActorForwardVector()+PossiblePicker->GetActorUpVector();
	
	

	

	pulse_dir=pulse_dir.GetSafeNormal();
	
	DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);
	
	FVector StartLocation = GetActorLocation();
	FVector EndLocation = StartLocation + pulse_dir*1000.0f;

	// 箭头颜色
	FColor ArrowColor = FColor::Red;

	// 箭头尺寸
	float ArrowSize = 10.0f;

	// 持续时间（秒），0 表示只在当前帧绘制
	float Duration = 2.0f;

	// 厚度
	float Thickness = 2.0f;

	
	// 绘制箭头
	//DrawDebugLine(GetWorld(), StartLocation, EndLocation, ArrowColor, true, 2.0f, 0, Thickness);

	HasImpulseTask = true;
	PulseVec = pulse_dir * 2000;
	
	

	EASY_LOG_MAINPLAYER("released to ground successfully");

	PossiblePicker = nullptr;

	BasicStaticMeshComponent->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	
	
	TargetPhysicsState = 0;

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
		UDIY_InteractionUtility::SetFlag(BulkInteractionFlags, (uint8)cur_flag);
		EASY_LOG_MAINPLAYER("Actor spawned with flag %d",BulkInteractionFlags);
	}
	

	if (!UDIY_InteractionUtility::IsFlagSet(BulkInteractionFlags, (uint8)EDIY_InteractItemFlag::Static) &&
		UDIY_InteractionUtility::IsFlagSet(BulkInteractionFlags, (uint8)EDIY_InteractItemFlag::Obey_Physics_Rules)
		)
	{
		BasicStaticMeshComponent->SetCollisionProfileName(TEXT("DIY_Item_Pres"));
		BasicStaticMeshComponent->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
		BasicStaticMeshComponent->SetSimulatePhysics(true);
		BasicStaticMeshComponent->SetMassOverrideInKg(NAME_None, config_copy.ItemMass,true);
		BasicStaticMeshComponent->SetPhysMaterialOverride(config_copy.ItemPhysicsMtl);

	
		BasicStaticMeshComponent->SetLinearDamping(config_copy.LinearDamping);
		BasicStaticMeshComponent->SetAngularDamping(config_copy.AngualrDamping);
		EASY_LOG_MAINPLAYER("Actor successgully spawned with configs adopted");
	}

	BasicStaticMeshComponent->SetCollisionResponseToChannel(ECollisionChannel::ECC_Camera,ECollisionResponse::ECR_Ignore);

	checkf(BulkInteractionFlags >= 0,TEXT("flags are invalid"));

	if (UDIY_InteractionUtility::IsFlagSet(BulkInteractionFlags, (uint8)EDIY_InteractItemFlag::Can_Be_Destroyed))
	{
		// dynamically added components
		Possible_Solidness_Processor = Cast<UDIY_SolidnessProcessor>(AddComponentByClass(UDIY_SolidnessProcessor::StaticClass(), false, FTransform(), false));

		if (Possible_Solidness_Processor)
		{
			
			Possible_Solidness_Processor->RegisterComponent();
		
		
			Possible_Solidness_Processor->OnInitWithConfigCopy(&config_copy);

			
			AddInstanceComponent(Possible_Solidness_Processor);
		}

	}

	if (UDIY_InteractionUtility::IsFlagSet(BulkInteractionFlags, (uint8)EDIY_InteractItemFlag::React_To_Temperature))
	{
		// dynamically added components
		Possible_Temperature_Processor = Cast<UDIY_TemperatureProcessor>(AddComponentByClass(UDIY_TemperatureProcessor::StaticClass(), false, FTransform(), false));

		if (Possible_Temperature_Processor)
		{

			Possible_Temperature_Processor->RegisterComponent();


			Possible_Temperature_Processor->OnInitWithConfigCopy(&config_copy);


			AddInstanceComponent(Possible_Temperature_Processor);
		}
	}

	if (UDIY_InteractionUtility::IsFlagSet(BulkInteractionFlags, (uint8)EDIY_InteractItemFlag::Has_Any_Conductivity))
	{
		// dynamically added components
		Possible_Conductivity_Processor = Cast<UDIY_ConductivityProcessor>(AddComponentByClass(UDIY_ConductivityProcessor::StaticClass(), false, FTransform(), false));

		if (Possible_Conductivity_Processor)
		{

			Possible_Conductivity_Processor->RegisterComponent();


			Possible_Conductivity_Processor->OnInitWithConfigCopy(&config_copy);


			AddInstanceComponent(Possible_Conductivity_Processor);
		}
	}

	
}

void ADIY_ItemBase::SetCollisionProfileName_Recursively(USceneComponent* inFirstCompo, FName InCollisionProfileName)
{
	UStaticMeshComponent* cur_first_static_mesh_compo = Cast<UStaticMeshComponent>(inFirstCompo);

	cur_first_static_mesh_compo->SetCollisionProfileName(InCollisionProfileName);
	checkf(cur_first_static_mesh_compo, TEXT("first compo is not static mesh or anything"));


	TArray<USceneComponent*> cur_all_children_compos;
	cur_first_static_mesh_compo->GetChildrenComponents(true, cur_all_children_compos);
	for (USceneComponent* cur_compo : cur_all_children_compos)
	{
		if (UStaticMeshComponent* cur_static = Cast<UStaticMeshComponent>(cur_compo))
		{
			cur_static->SetCollisionProfileName(InCollisionProfileName);
		}
	}
}

void ADIY_ItemBase::SetCollisionEnabled_Recursively(USceneComponent* inFirstCompo, ECollisionEnabled::Type NewType)
{
	UStaticMeshComponent* cur_first_static_mesh_compo = Cast<UStaticMeshComponent>(inFirstCompo);

	cur_first_static_mesh_compo->SetCollisionEnabled(NewType);
	checkf(cur_first_static_mesh_compo, TEXT("first compo is not static mesh or anything"));


	TArray<USceneComponent*> cur_all_children_compos;
	cur_first_static_mesh_compo->GetChildrenComponents(true, cur_all_children_compos);
	for (USceneComponent* cur_compo : cur_all_children_compos)
	{
		if (UStaticMeshComponent* cur_static = Cast<UStaticMeshComponent>(cur_compo))
		{
			cur_static->SetCollisionEnabled(NewType);
		}
	}
}

void ADIY_ItemBase::SetSimulatePhysics_Recursively(USceneComponent* inFirstCompo, bool inEnable)
{
	UStaticMeshComponent* cur_first_static_mesh_compo = Cast<UStaticMeshComponent>(inFirstCompo);

	cur_first_static_mesh_compo->SetSimulatePhysics(inEnable);
	checkf(cur_first_static_mesh_compo, TEXT("first compo is not static mesh or anything"));


	TArray<USceneComponent*> cur_all_children_compos;
	cur_first_static_mesh_compo->GetChildrenComponents(true, cur_all_children_compos);
	for (USceneComponent* cur_compo : cur_all_children_compos)
	{
		if (UStaticMeshComponent* cur_static = Cast<UStaticMeshComponent>(cur_compo))
		{
			cur_static->SetSimulatePhysics(inEnable);
		}
	}
}

void ADIY_ItemBase::UpdateWidgetText_Internal(const FString& NewText)
{
	if (StateDisplayWidget)
	{
		StateDisplayWidget->UpdateText(NewText);

		return;
	}
	

	if (UUserWidget* Widget = ItemStateWidgetComponent->GetUserWidgetObject())
	{
		StateDisplayWidget = Cast<UDIY_ItemStateWidget>(Widget);
		if (StateDisplayWidget)
		{
			StateDisplayWidget->UpdateText(NewText);
		}
	}
}

void ADIY_ItemBase::UpdateStateWidgetInfo(float inDeltaTime)
{
	
	
	FString updated_text{};
	if (UDIY_InteractionUtility::IsFlagSet(BulkInteractionFlags, (uint8)EDIY_InteractItemFlag::React_To_Temperature)&&nullptr!=Possible_Temperature_Processor)
	{
		updated_text += FString::Printf(TEXT("Temp: temp %f, moist %f \n"), Possible_Temperature_Processor->GetFinalTemperatureValue(), Possible_Temperature_Processor->GetFinalMoistureValue());
	}

	if (UDIY_InteractionUtility::IsFlagSet(BulkInteractionFlags, (uint8)EDIY_InteractItemFlag::Has_Any_Conductivity)&&nullptr!=Possible_Conductivity_Processor)
	{
		updated_text += FString::Printf(TEXT("Conduc: AmpereInten %f , State %s \n"), Possible_Conductivity_Processor->GetFinal_ElectricityIntensityAmpere(),
			*UEnum::GetValueAsString(Possible_Conductivity_Processor->GetCurrentConductivityState()));


		
		
		
		
		
	}


	if (UDIY_InteractionUtility::IsFlagSet(BulkInteractionFlags, (uint8)EDIY_InteractItemFlag::Can_Be_Destroyed)&&nullptr!=Possible_Solidness_Processor)
	{
		updated_text += FString::Printf(TEXT("Solid: Durab %f \n"), Possible_Solidness_Processor->GetFinal_Durability());
	}

	UpdateWidgetText_Internal(updated_text);

}
