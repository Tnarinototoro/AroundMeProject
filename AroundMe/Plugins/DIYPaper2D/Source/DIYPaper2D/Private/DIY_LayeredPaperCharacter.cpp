// Copyright Epic Games, Inc. All Rights Reserved.

#include "DIY_LayeredPaperCharacter.h"

#include "Camera/CameraActor.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "Engine/Engine.h"
#include "EngineUtils.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/PlayerController.h"
#include "Materials/MaterialInterface.h"
#include "PaperFlipbookComponent.h"
#include "UObject/ConstructorHelpers.h"

#include "DIY_EquipmentVisualData.h"
#include "DIY_FlipbookSyncComponent.h"
#include "DIYPaper2DLog.h"

namespace
{
	constexpr float FeetOffsetZ = -88.0f;

	struct FLayerDef
	{
		EDIY_EquipSlot Slot;
		FName ComponentName;
		int32 SortPriority;
	};

	const FLayerDef GLayerDefs[] = {
		{ EDIY_EquipSlot::Legs, TEXT("LegsLayer"), 0 },
		{ EDIY_EquipSlot::Torso, TEXT("TorsoLayer"), 1 },
		{ EDIY_EquipSlot::LeftArm, TEXT("LeftArmLayer"), 2 },
		{ EDIY_EquipSlot::RightArm, TEXT("RightArmLayer"), 3 },
		{ EDIY_EquipSlot::Shoes, TEXT("ShoesLayer"), 4 },
		{ EDIY_EquipSlot::Head, TEXT("HeadLayer"), 5 },
		{ EDIY_EquipSlot::Shirt, TEXT("ShirtLayer"), 6 },
		{ EDIY_EquipSlot::Hat, TEXT("HatLayer"), 7 }
	};
}

ADIY_LayeredPaperCharacter::ADIY_LayeredPaperCharacter()
{
	PrimaryActorTick.bCanEverTick = true;

	GetCapsuleComponent()->InitCapsuleSize(34.0f, 88.0f);

	// The inherited PaperCharacter sprite is unused; the humanoid is made of dedicated part layers.
	GetSprite()->SetVisibility(false);
	GetSprite()->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	LegsLayer = CreatePaperLayer(TEXT("LegsLayer"));
	TorsoLayer = CreatePaperLayer(TEXT("TorsoLayer"));
	LeftArmLayer = CreatePaperLayer(TEXT("LeftArmLayer"));
	RightArmLayer = CreatePaperLayer(TEXT("RightArmLayer"));
	HeadLayer = CreatePaperLayer(TEXT("HeadLayer"));
	ShirtLayer = CreatePaperLayer(TEXT("ShirtLayer"));
	HatLayer = CreatePaperLayer(TEXT("HatLayer"));
	ShoesLayer = CreatePaperLayer(TEXT("ShoesLayer"));

	SyncComponent = CreateDefaultSubobject<UDIY_FlipbookSyncComponent>(TEXT("FlipbookSync"));

	// Fallback only; the PoC map provides a fixed ACameraActor tagged PoCCamera.
	PoCCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("PoCCamera"));
	PoCCamera->SetupAttachment(GetCapsuleComponent());
	PoCCamera->SetRelativeLocation(FVector(0.0f, -900.0f, 360.0f));
	PoCCamera->SetRelativeRotation(FRotator(-25.0f, 90.0f, 0.0f));
	PoCCamera->SetProjectionMode(ECameraProjectionMode::Orthographic);
	PoCCamera->SetOrthoWidth(620.0f);
	PoCCamera->bUsePawnControlRotation = false;

	static ConstructorHelpers::FObjectFinder<UMaterialInterface> UnlitFinder(TEXT("/Paper2D/TranslucentUnlitSpriteMaterial.TranslucentUnlitSpriteMaterial"));
	if (UnlitFinder.Succeeded())
	{
		UnlitMaterial = UnlitFinder.Object;
	}

	static ConstructorHelpers::FObjectFinder<UMaterialInterface> LitFinder(TEXT("/Paper2D/TranslucentLitSpriteMaterial.TranslucentLitSpriteMaterial"));
	if (LitFinder.Succeeded())
	{
		LitMaterial = LitFinder.Object;
	}

	GetCharacterMovement()->bOrientRotationToMovement = false;
	GetCharacterMovement()->bUseControllerDesiredRotation = false;

	// Safety net: even if the level GameMode override is lost, the placed pawn still gets input.
	AutoPossessPlayer = EAutoReceiveInput::Player0;
}

UPaperFlipbookComponent* ADIY_LayeredPaperCharacter::CreatePaperLayer(FName Name)
{
	UPaperFlipbookComponent* Component = CreateDefaultSubobject<UPaperFlipbookComponent>(Name);
	Component->SetupAttachment(GetCapsuleComponent());
	Component->SetRelativeLocation(FVector(0.0f, 0.0f, FeetOffsetZ));
	Component->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	Component->SetLooping(false);
	Component->SetPlayRate(1.0f);
	Component->Stop();
	return Component;
}

void ADIY_LayeredPaperCharacter::RegisterLayers()
{
	if (SyncComponent == nullptr)
	{
		return;
	}

	SyncComponent->RegisterLayer(EDIY_EquipSlot::Head, HeadLayer);
	SyncComponent->RegisterLayer(EDIY_EquipSlot::Torso, TorsoLayer);
	SyncComponent->RegisterLayer(EDIY_EquipSlot::LeftArm, LeftArmLayer);
	SyncComponent->RegisterLayer(EDIY_EquipSlot::RightArm, RightArmLayer);
	SyncComponent->RegisterLayer(EDIY_EquipSlot::Legs, LegsLayer);
	SyncComponent->RegisterLayer(EDIY_EquipSlot::Shirt, ShirtLayer);
	SyncComponent->RegisterLayer(EDIY_EquipSlot::Hat, HatLayer);
	SyncComponent->RegisterLayer(EDIY_EquipSlot::Shoes, ShoesLayer);
}

void ADIY_LayeredPaperCharacter::BeginPlay()
{
	Super::BeginPlay();

	for (const FLayerDef& Def : GLayerDefs)
	{
		UPaperFlipbookComponent* Layer = nullptr;
		switch (Def.Slot)
		{
		case EDIY_EquipSlot::Head: Layer = HeadLayer; break;
		case EDIY_EquipSlot::Torso: Layer = TorsoLayer; break;
		case EDIY_EquipSlot::LeftArm: Layer = LeftArmLayer; break;
		case EDIY_EquipSlot::RightArm: Layer = RightArmLayer; break;
		case EDIY_EquipSlot::Legs: Layer = LegsLayer; break;
		case EDIY_EquipSlot::Shirt: Layer = ShirtLayer; break;
		case EDIY_EquipSlot::Hat: Layer = HatLayer; break;
		case EDIY_EquipSlot::Shoes: Layer = ShoesLayer; break;
		default: break;
		}

		if (Layer != nullptr)
		{
			Layer->Stop();
			Layer->SetLooping(false);
			Layer->SetPlayRate(1.0f);
			Layer->SetTranslucentSortPriority(Def.SortPriority);
		}
	}

	if (UCharacterMovementComponent* Movement = GetCharacterMovement())
	{
		Movement->MaxWalkSpeed = WalkSpeed;
		Movement->bOrientRotationToMovement = false;
	}

	if (APlayerController* PlayerController = Cast<APlayerController>(GetController()))
	{
		PlayerController->SetViewTarget(this);
		bViewTargetSet = true;
	}

	if (SyncComponent != nullptr)
	{
		// Load the PoC loadout lazily instead of in the constructor: the assets are generated by
		// the commandlet, so a constructor-time FObjectFinder would cache a failure on first launch.
		if (DefaultEquipment.Num() == 0)
		{
			auto LoadEquip = [this](EDIY_EquipSlot Slot, const TCHAR* Path) -> UDIY_EquipmentVisualData*
			{
				UDIY_EquipmentVisualData* Visual = LoadObject<UDIY_EquipmentVisualData>(nullptr, Path);
				if (Visual != nullptr)
				{
					FDIY_DefaultEquipment Entry;
					Entry.Slot = Slot;
					Entry.Visual = Visual;
					DefaultEquipment.Add(Entry);
				}
				else
				{
					UE_LOG(LogDIYPaper2D, Error, TEXT("[PaperLayers] Missing visual: %s"), Path);
				}
				return Visual;
			};

			LoadEquip(EDIY_EquipSlot::Head, TEXT("/DIYPaper2D/PaperPoC/Data/DA_Part_Head.DA_Part_Head"));
			LoadEquip(EDIY_EquipSlot::Torso, TEXT("/DIYPaper2D/PaperPoC/Data/DA_Part_Torso.DA_Part_Torso"));
			LoadEquip(EDIY_EquipSlot::LeftArm, TEXT("/DIYPaper2D/PaperPoC/Data/DA_Part_ArmL.DA_Part_ArmL"));
			LoadEquip(EDIY_EquipSlot::RightArm, TEXT("/DIYPaper2D/PaperPoC/Data/DA_Part_ArmR.DA_Part_ArmR"));
			LoadEquip(EDIY_EquipSlot::Legs, TEXT("/DIYPaper2D/PaperPoC/Data/DA_Part_Legs.DA_Part_Legs"));
			LoadEquip(EDIY_EquipSlot::Shirt, TEXT("/DIYPaper2D/PaperPoC/Data/DA_Equip_Shirt.DA_Equip_Shirt"));
			LoadEquip(EDIY_EquipSlot::Shoes, TEXT("/DIYPaper2D/PaperPoC/Data/DA_Equip_Shoes.DA_Equip_Shoes"));
			UDIY_EquipmentVisualData* Helmet = LoadEquip(EDIY_EquipSlot::Hat, TEXT("/DIYPaper2D/PaperPoC/Data/DA_Equip_Helmet.DA_Equip_Helmet"));
			if (Helmet != nullptr)
			{
				HatVariants.AddUnique(Helmet);
			}

			if (UDIY_EquipmentVisualData* Cap = LoadObject<UDIY_EquipmentVisualData>(nullptr, TEXT("/DIYPaper2D/PaperPoC/Data/DA_Equip_Cap.DA_Equip_Cap")))
			{
				HatVariants.AddUnique(Cap);
			}
		}

		RegisterLayers();

		for (const FDIY_DefaultEquipment& Entry : DefaultEquipment)
		{
			if (Entry.Visual != nullptr)
			{
				SyncComponent->EquipVisual(Entry.Slot, Entry.Visual);
			}
		}

		if (!SyncComponent->SetAnimationState(IdleState))
		{
			UE_LOG(LogDIYPaper2D, Warning, TEXT("[PaperLayers] %s could not start state '%s'"), *GetName(), *IdleState.ToString());
		}
	}

	SetLitMode(false);
}

void ADIY_LayeredPaperCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	if (PlayerInputComponent == nullptr)
	{
		return;
	}

	PlayerInputComponent->BindAxisKey(EKeys::W, this, &ADIY_LayeredPaperCharacter::InputW);
	PlayerInputComponent->BindAxisKey(EKeys::S, this, &ADIY_LayeredPaperCharacter::InputS);
	PlayerInputComponent->BindAxisKey(EKeys::A, this, &ADIY_LayeredPaperCharacter::InputA);
	PlayerInputComponent->BindAxisKey(EKeys::D, this, &ADIY_LayeredPaperCharacter::InputD);

	PlayerInputComponent->BindKey(EKeys::LeftShift, IE_Pressed, this, &ADIY_LayeredPaperCharacter::InputSprintPressed);
	PlayerInputComponent->BindKey(EKeys::LeftShift, IE_Released, this, &ADIY_LayeredPaperCharacter::InputSprintReleased);
	PlayerInputComponent->BindKey(EKeys::RightShift, IE_Pressed, this, &ADIY_LayeredPaperCharacter::InputSprintPressed);
	PlayerInputComponent->BindKey(EKeys::RightShift, IE_Released, this, &ADIY_LayeredPaperCharacter::InputSprintReleased);

	PlayerInputComponent->BindAxisKey(EKeys::MouseWheelAxis, this, &ADIY_LayeredPaperCharacter::InputZoom);

	PlayerInputComponent->BindKey(EKeys::SpaceBar, IE_Pressed, this, &ADIY_LayeredPaperCharacter::CycleHat);
	PlayerInputComponent->BindKey(EKeys::L, IE_Pressed, this, &ADIY_LayeredPaperCharacter::ToggleLitMode);
}

void ADIY_LayeredPaperCharacter::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	if (!bViewTargetSet)
	{
		if (APlayerController* PlayerController = Cast<APlayerController>(GetController()))
		{
			PlayerController->SetViewTarget(this);
			bViewTargetSet = true;
		}
	}

	UpdateMovementAndAnimation(DeltaSeconds);
}

void ADIY_LayeredPaperCharacter::UpdateMovementAndAnimation(float DeltaSeconds)
{
	const float Forward = InputForward - InputBackward;
	const float Right = InputRight - InputLeft;

	FVector Direction(Right, Forward, 0.0f);
	if (!Direction.IsNearlyZero())
	{
		Direction.Normalize();
		AddMovementInput(Direction, 1.0f);
	}

	if (UCharacterMovementComponent* Movement = GetCharacterMovement())
	{
		Movement->MaxWalkSpeed = bSprintHeld ? RunSpeed : WalkSpeed;
	}

	// Keep the character inside the fixed camera shot.
	const FVector Location = GetActorLocation();
	const FVector Clamped(
		FMath::Clamp(Location.X, -StageHalfWidth, StageHalfWidth),
		FMath::Clamp(Location.Y, StageMinY, StageMaxY),
		Location.Z);
	if (!Location.Equals(Clamped, 0.1f))
	{
		SetActorLocation(Clamped, false);
	}

	if (SyncComponent == nullptr)
	{
		return;
	}

	const float Speed = GetVelocity().Size2D();
	FName DesiredState = IdleState;
	if (Speed > MovingSpeedThreshold)
	{
		DesiredState = bSprintHeld ? RunState : WalkState;
	}

	if (SyncComponent->GetCurrentState() != DesiredState)
	{
		SyncComponent->SetAnimationState(DesiredState);
	}

	// Left/right input switches to the profile views; W/S only move in depth.
	if (FMath::Abs(Right) > 0.1f)
	{
		const EDIY_Facing DesiredFacing = Right > 0.0f ? EDIY_Facing::Right : EDIY_Facing::Left;
		if (SyncComponent->GetCurrentFacing() != DesiredFacing)
		{
			SyncComponent->SetFacing(DesiredFacing);
		}
	}

#if !UE_BUILD_SHIPPING
	if (GEngine != nullptr)
	{
		GEngine->AddOnScreenDebugMessage(1, 0.0f, FColor::Cyan, FString::Printf(
			TEXT("State %s | frame %d / %d | %.0f fps | speed %.0f | layers: %s"),
			*SyncComponent->GetCurrentState().ToString(),
			SyncComponent->GetCurrentFrame(),
			SyncComponent->GetCanonicalFrameCount(),
			SyncComponent->GetEffectiveFPS(),
			Speed,
			SyncComponent->AreLayersInSync() ? TEXT("SYNC") : TEXT("DESYNC")));
		GEngine->AddOnScreenDebugMessage(2, 0.0f, FColor::White,
			TEXT("WASD: move    Shift: run    Mouse wheel: zoom    Space: swap hat    L: lit/unlit"));
	}
#endif
}

void ADIY_LayeredPaperCharacter::InputW(float Value)
{
	InputForward = Value;
}

void ADIY_LayeredPaperCharacter::InputS(float Value)
{
	InputBackward = Value;
}

void ADIY_LayeredPaperCharacter::InputA(float Value)
{
	InputLeft = Value;
}

void ADIY_LayeredPaperCharacter::InputD(float Value)
{
	InputRight = Value;
}

void ADIY_LayeredPaperCharacter::InputSprintPressed()
{
	bSprintHeld = true;
}

void ADIY_LayeredPaperCharacter::InputSprintReleased()
{
	bSprintHeld = false;
}

void ADIY_LayeredPaperCharacter::InputZoom(float Value)
{
	if (FMath::IsNearlyZero(Value))
	{
		return;
	}

	UCameraComponent* CameraComponent = FixedCameraActor.IsValid()
		? FixedCameraActor->GetCameraComponent()
		: PoCCamera.Get();

	if (CameraComponent != nullptr)
	{
		const float NewWidth = FMath::Clamp(CameraComponent->OrthoWidth * (1.0f - Value * 0.12f), 240.0f, 1600.0f);
		CameraComponent->SetOrthoWidth(NewWidth);
	}
}

bool ADIY_LayeredPaperCharacter::EquipSlot(EDIY_EquipSlot Slot, UDIY_EquipmentVisualData* Visual)
{
	return SyncComponent != nullptr && SyncComponent->EquipVisual(Slot, Visual);
}

bool ADIY_LayeredPaperCharacter::SetAnimationState(FName State)
{
	return SyncComponent != nullptr && SyncComponent->SetAnimationState(State);
}

bool ADIY_LayeredPaperCharacter::SetFacing(EDIY_Facing Facing)
{
	return SyncComponent != nullptr && SyncComponent->SetFacing(Facing);
}

void ADIY_LayeredPaperCharacter::CycleHat()
{
	if (SyncComponent == nullptr || HatVariants.Num() == 0)
	{
		return;
	}

	CurrentHatIndex = (CurrentHatIndex + 1) % HatVariants.Num();
	EquipSlot(EDIY_EquipSlot::Hat, HatVariants[CurrentHatIndex]);
}

void ADIY_LayeredPaperCharacter::ToggleIdleWalk()
{
	if (SyncComponent == nullptr)
	{
		return;
	}

	const FName Next = (SyncComponent->GetCurrentState() == WalkState) ? IdleState : WalkState;
	SetAnimationState(Next);
}

void ADIY_LayeredPaperCharacter::SetLitMode(bool bLit)
{
	bLitMode = bLit;

	UMaterialInterface* Material = bLit ? LitMaterial : UnlitMaterial;
	if (Material == nullptr)
	{
		return;
	}

	UPaperFlipbookComponent* MaterialLayers[] = {
		HeadLayer, TorsoLayer, LeftArmLayer, RightArmLayer,
		LegsLayer, ShirtLayer, HatLayer, ShoesLayer
	};

	for (UPaperFlipbookComponent* Layer : MaterialLayers)
	{
		if (Layer != nullptr)
		{
			Layer->SetMaterial(0, Material);
		}
	}
}

void ADIY_LayeredPaperCharacter::ToggleLitMode()
{
	SetLitMode(!bLitMode);
}

