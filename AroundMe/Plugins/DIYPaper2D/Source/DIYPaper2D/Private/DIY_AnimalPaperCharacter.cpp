// Copyright Epic Games, Inc. All Rights Reserved.

#include "DIY_AnimalPaperCharacter.h"

#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "Engine/Engine.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/PlayerController.h"
#include "Materials/MaterialInterface.h"
#include "PaperFlipbookComponent.h"
#include "UObject/Class.h"
#include "UObject/ConstructorHelpers.h"

#include "DIY_EquipmentVisualData.h"
#include "DIY_FlipbookSyncComponent.h"
#include "DIYPaper2DLog.h"

ADIY_AnimalPaperCharacter::ADIY_AnimalPaperCharacter()
{
	PrimaryActorTick.bCanEverTick = true;

	GetCapsuleComponent()->InitCapsuleSize(34.0f, 88.0f);
	GetSprite()->SetVisibility(false);
	GetSprite()->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	BodyLayer = CreateDefaultSubobject<UPaperFlipbookComponent>(TEXT("AnimalBodyLayer"));
	BodyLayer->SetupAttachment(GetCapsuleComponent());
	BodyLayer->SetRelativeLocation(FVector(0.0f, 0.0f, -88.0f));
	BodyLayer->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	BodyLayer->SetLooping(false);
	BodyLayer->SetPlayRate(1.0f);
	BodyLayer->Stop();
	BodyLayer->SetTranslucentSortPriority(0);

	SyncComponent = CreateDefaultSubobject<UDIY_FlipbookSyncComponent>(TEXT("FlipbookSync"));

	PoCCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("PoCCamera"));
	PoCCamera->SetupAttachment(GetCapsuleComponent());
	PoCCamera->SetRelativeLocation(FVector(0.0f, -900.0f, 450.0f));
	PoCCamera->SetRelativeRotation(FRotator(-25.0f, 90.0f, 0.0f));
	PoCCamera->SetProjectionMode(ECameraProjectionMode::Orthographic);
	PoCCamera->SetOrthoWidth(620.0f);
	PoCCamera->bUsePawnControlRotation = false;

	GetCharacterMovement()->bOrientRotationToMovement = false;
	GetCharacterMovement()->bUseControllerDesiredRotation = false;

	AutoPossessPlayer = EAutoReceiveInput::Player0;

	static ConstructorHelpers::FObjectFinder<UMaterialInterface> UnlitFinder(TEXT("/Paper2D/TranslucentUnlitSpriteMaterial.TranslucentUnlitSpriteMaterial"));
	if (UnlitFinder.Succeeded())
	{
		UnlitMaterial = UnlitFinder.Object;
	}
}

void ADIY_AnimalPaperCharacter::BeginPlay()
{
	Super::BeginPlay();

	BodyLayer->SetMaterial(0, UnlitMaterial);

	if (SyncComponent != nullptr)
	{
		SyncComponent->RegisterLayer(EDIY_EquipSlot::Torso, BodyLayer);

		if (UDIY_EquipmentVisualData* Dog = LoadObject<UDIY_EquipmentVisualData>(nullptr, TEXT("/DIYPaper2D/PaperPoC/Data/DA_Animal_Dog.DA_Animal_Dog")))
		{
			Animals.Add(Dog);
		}
		if (UDIY_EquipmentVisualData* Bird = LoadObject<UDIY_EquipmentVisualData>(nullptr, TEXT("/DIYPaper2D/PaperPoC/Data/DA_Animal_Bird.DA_Animal_Bird")))
		{
			Animals.Add(Bird);
		}

		if (Animals.Num() > 0)
		{
			CurrentAnimalIndex = 0;
			SyncComponent->EquipVisual(EDIY_EquipSlot::Torso, Animals[CurrentAnimalIndex]);
		}

		if (!SyncComponent->SetAnimationState(IdleState))
		{
			UE_LOG(LogDIYPaper2D, Warning, TEXT("[Paper2D] Animal could not start state '%s'"), *IdleState.ToString());
		}
	}

	if (APlayerController* PlayerController = Cast<APlayerController>(GetController()))
	{
		PlayerController->SetViewTarget(this);
		bViewTargetSet = true;
	}
}

void ADIY_AnimalPaperCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	if (PlayerInputComponent == nullptr)
	{
		return;
	}

	PlayerInputComponent->BindAxisKey(EKeys::W, this, &ADIY_AnimalPaperCharacter::InputW);
	PlayerInputComponent->BindAxisKey(EKeys::S, this, &ADIY_AnimalPaperCharacter::InputS);
	PlayerInputComponent->BindAxisKey(EKeys::A, this, &ADIY_AnimalPaperCharacter::InputA);
	PlayerInputComponent->BindAxisKey(EKeys::D, this, &ADIY_AnimalPaperCharacter::InputD);
	PlayerInputComponent->BindAxisKey(EKeys::MouseWheelAxis, this, &ADIY_AnimalPaperCharacter::InputZoom);

	PlayerInputComponent->BindKey(EKeys::LeftShift, IE_Pressed, this, &ADIY_AnimalPaperCharacter::InputSprintPressed);
	PlayerInputComponent->BindKey(EKeys::LeftShift, IE_Released, this, &ADIY_AnimalPaperCharacter::InputSprintReleased);
	PlayerInputComponent->BindKey(EKeys::RightShift, IE_Pressed, this, &ADIY_AnimalPaperCharacter::InputSprintPressed);
	PlayerInputComponent->BindKey(EKeys::RightShift, IE_Released, this, &ADIY_AnimalPaperCharacter::InputSprintReleased);
	PlayerInputComponent->BindKey(EKeys::Tab, IE_Pressed, this, &ADIY_AnimalPaperCharacter::CycleAnimal);
	PlayerInputComponent->BindKey(EKeys::One, IE_Pressed, this, &ADIY_AnimalPaperCharacter::SelectDog);
	PlayerInputComponent->BindKey(EKeys::Two, IE_Pressed, this, &ADIY_AnimalPaperCharacter::SelectBird);
}

void ADIY_AnimalPaperCharacter::Tick(float DeltaSeconds)
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

void ADIY_AnimalPaperCharacter::UpdateMovementAndAnimation(float DeltaSeconds)
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

	EDIY_Facing DesiredFacing = SyncComponent->GetCurrentFacing();
	bool bHasFacing = false;
	if (FMath::Abs(Right) > 0.1f)
	{
		DesiredFacing = Right > 0.0f ? EDIY_Facing::Right : EDIY_Facing::Left;
		bHasFacing = true;
	}
	else if (FMath::Abs(Forward) > 0.1f)
	{
		DesiredFacing = Forward > 0.0f ? EDIY_Facing::Back : EDIY_Facing::Front;
		bHasFacing = true;
	}
	if (bHasFacing && SyncComponent->GetCurrentFacing() != DesiredFacing)
	{
		SyncComponent->SetFacing(DesiredFacing);
	}

#if !UE_BUILD_SHIPPING
	if (GEngine != nullptr)
	{
		GEngine->AddOnScreenDebugMessage(1, 0.0f, FColor::Cyan, FString::Printf(
			TEXT("%s | state %s | frame %d / %d | facing %s | speed %.0f | layers: %s"),
			CurrentAnimalIndex == 0 ? TEXT("Dog") : TEXT("Bird"),
			*SyncComponent->GetCurrentState().ToString(),
			SyncComponent->GetCurrentFrame(),
			SyncComponent->GetCanonicalFrameCount(),
			*StaticEnum<EDIY_Facing>()->GetNameStringByValue(static_cast<int64>(SyncComponent->GetCurrentFacing())),
			Speed,
			SyncComponent->AreLayersInSync() ? TEXT("SYNC") : TEXT("DESYNC")));
		GEngine->AddOnScreenDebugMessage(2, 0.0f, FColor::White,
			TEXT("WASD: move    Shift: run    Tab/1/2: Dog/Bird    Mouse wheel: zoom"));
	}
#endif
}

void ADIY_AnimalPaperCharacter::CycleAnimal()
{
	if (Animals.Num() < 2 || SyncComponent == nullptr)
	{
		return;
	}
	SetAnimal((CurrentAnimalIndex + 1) % Animals.Num());
}

void ADIY_AnimalPaperCharacter::SelectDog()
{
	SetAnimal(0);
}

void ADIY_AnimalPaperCharacter::SelectBird()
{
	SetAnimal(1);
}

void ADIY_AnimalPaperCharacter::SetAnimal(int32 Index)
{
	if (!Animals.IsValidIndex(Index) || SyncComponent == nullptr)
	{
		return;
	}
	CurrentAnimalIndex = Index;
	SyncComponent->EquipVisual(EDIY_EquipSlot::Torso, Animals[Index]);
}

void ADIY_AnimalPaperCharacter::InputW(float Value) { InputForward = Value; }
void ADIY_AnimalPaperCharacter::InputS(float Value) { InputBackward = Value; }
void ADIY_AnimalPaperCharacter::InputA(float Value) { InputLeft = Value; }
void ADIY_AnimalPaperCharacter::InputD(float Value) { InputRight = Value; }
void ADIY_AnimalPaperCharacter::InputSprintPressed() { bSprintHeld = true; }
void ADIY_AnimalPaperCharacter::InputSprintReleased() { bSprintHeld = false; }

void ADIY_AnimalPaperCharacter::InputZoom(float Value)
{
	if (FMath::IsNearlyZero(Value) || PoCCamera == nullptr)
	{
		return;
	}
	PoCCamera->SetOrthoWidth(FMath::Clamp(PoCCamera->OrthoWidth * (1.0f - Value * 0.12f), 240.0f, 1600.0f));
}
