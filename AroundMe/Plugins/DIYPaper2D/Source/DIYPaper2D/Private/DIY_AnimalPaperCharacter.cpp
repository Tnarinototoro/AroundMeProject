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

#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputAction.h"
#include "InputActionValue.h"
#include "InputMappingContext.h"
#include "Engine/LocalPlayer.h"

#include "DIY_EquipmentVisualData.h"
#include "DIY_FlipbookSyncComponent.h"
#include "DIYPaper2DLog.h"
#include "PaperZDAnimationComponent.h"
#include "PaperZDAnimInstance.h"

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

	if (PaperZDAnimClass != nullptr)
	{
		// 用 PaperZD 驱动同一个 BodyLayer：先绑 render component，再设动画类，最后注册
		// （注册时组件的 BeginPlay 会用已设好的类创建 AnimInstance，避免空类警告）。
		PaperZDAnimation = NewObject<UPaperZDAnimationComponent>(this, TEXT("PaperZDAnimation"));
		PaperZDAnimation->InitRenderComponent(BodyLayer);
		PaperZDAnimation->InitAnimInstanceClass(PaperZDAnimClass);
		PaperZDAnimation->RegisterComponent();
	}
	else if (SyncComponent != nullptr)
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

	ApplyCameraDistance();
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
	// 项目默认使用 EnhancedPlayerInput：滚轮由 EnhancedInputWorldProcessor 送进 Enhanced Input 子系统，
	// legacy 的 BindAxisKey / BindKey 都收不到 MouseWheel。
	if (UEnhancedInputComponent* EnhancedInput = Cast<UEnhancedInputComponent>(PlayerInputComponent))
	{
		if (ZoomAction == nullptr)
		{
			ZoomAction = NewObject<UInputAction>(this, TEXT("IA_HD2D_Zoom"));
			ZoomAction->ValueType = EInputActionValueType::Axis1D;
		}
		if (ZoomMappingContext == nullptr)
		{
			ZoomMappingContext = NewObject<UInputMappingContext>(this, TEXT("IMC_HD2D_Zoom"));
			ZoomMappingContext->MapKey(ZoomAction, EKeys::MouseWheelAxis);
		}

		EnhancedInput->BindAction(
			ZoomAction, ETriggerEvent::Triggered, this, &ADIY_AnimalPaperCharacter::OnZoomTriggered);

		if (APlayerController* PC = Cast<APlayerController>(GetController()))
		{
			if (ULocalPlayer* LocalPlayer = PC->GetLocalPlayer())
			{
				if (UEnhancedInputLocalPlayerSubsystem* Subsystem =
					ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(LocalPlayer))
				{
					Subsystem->AddMappingContext(ZoomMappingContext, 0);
				}
			}
		}
	}

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

	FVector Direction(-Right, Forward, 0.0f);
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

	// PaperZD 模式下动画由 AnimBP 驱动，不能再让 DIY 的同步组件刷帧/换图。
	if (PaperZDAnimClass != nullptr)
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
	if (FMath::IsNearlyZero(Value))
	{
		return;
	}

	CameraDistance = FMath::Clamp(
		CameraDistance - Value * CameraZoomStep, MinCameraDistance, MaxCameraDistance);
	ApplyCameraDistance();
}

void ADIY_AnimalPaperCharacter::OnZoomTriggered(const FInputActionValue& Value)
{
	InputZoom(Value.Get<float>());
}

void ADIY_AnimalPaperCharacter::InputZoomIn()
{
	InputZoom(1.0f);
}

void ADIY_AnimalPaperCharacter::InputZoomOut()
{
	InputZoom(-1.0f);
}

void ADIY_AnimalPaperCharacter::ApplyCameraDistance()
{
	if (PoCCamera == nullptr)
	{
		return;
	}

	CameraDistance = FMath::Clamp(CameraDistance, MinCameraDistance, MaxCameraDistance);

	// 相机固定沿自身前方看向角色，距离就是沿该轴的退让量。
	const FVector Forward = PoCCamera->GetRelativeRotation().Vector();
	PoCCamera->SetRelativeLocation(-Forward * CameraDistance);

	// 正交相机只改距离看不出远近，正交宽度跟随距离一起缩放。
	PoCCamera->SetOrthoWidth(FMath::Max(1.0f, CameraDistance * OrthoWidthPerUnit));
}
