// All rights reserved to ShadowCandle Studio

#include "HD2DPaperCharacter.h"

#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "Engine/LocalPlayer.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/PlayerController.h"

#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputAction.h"
#include "InputActionValue.h"
#include "InputMappingContext.h"

#include "PaperZDAnimationComponent.h"
#include "PaperZDAnimInstance.h"
#include "PaperFlipbookComponent.h"

AHD2DPaperCharacter::AHD2DPaperCharacter()
{
	PrimaryActorTick.bCanEverTick = true;

	GetCapsuleComponent()->InitCapsuleSize(34.0f, 88.0f);
	GetSprite()->SetRelativeLocation(FVector(0.0f, 0.0f, -88.0f));

	GetCharacterMovement()->bOrientRotationToMovement = false;
	GetCharacterMovement()->bUseControllerDesiredRotation = false;
	GetCharacterMovement()->MaxWalkSpeed = WalkSpeed;

	PoCCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("PoCCamera"));
	PoCCamera->SetupAttachment(GetCapsuleComponent());
	PoCCamera->SetRelativeLocation(FVector(0.0f, -650.0f, 650.0f));
	PoCCamera->SetRelativeRotation(FRotator(CameraPitch, CameraYaw, 0.0f));
	PoCCamera->SetProjectionMode(ECameraProjectionMode::Perspective);
	PoCCamera->SetFieldOfView(CameraFOV);
	PoCCamera->bUsePawnControlRotation = false;
}

void AHD2DPaperCharacter::PostInitializeComponents()
{
	Super::PostInitializeComponents();

	// 在组件 BeginPlay 之前设好动画类，避免空类警告。
	if (AnimClass != nullptr && GetAnimationComponent() != nullptr)
	{
		GetAnimationComponent()->InitAnimInstanceClass(AnimClass);
	}
}

void AHD2DPaperCharacter::BeginPlay()
{
	Super::BeginPlay();

	if (GetCharacterMovement() != nullptr)
	{
		GetCharacterMovement()->MaxWalkSpeed = WalkSpeed;
	}

	ApplyCameraDistance();

	// 自动构建的复合层没有排序优先级；三层在同一位置时，头/衣服可能被身体盖住。
	// 这里按组件名稳定排序：主 Sprite 为 0，其余依次 1、2…
	TArray<UPaperFlipbookComponent*> FlipbookComponents;
	GetComponents<UPaperFlipbookComponent>(FlipbookComponents);
	FlipbookComponents.Sort([](const UPaperFlipbookComponent& A, const UPaperFlipbookComponent& B)
	{
		return A.GetName() < B.GetName();
	});

	int32 LayerPriority = 1;
	for (UPaperFlipbookComponent* Component : FlipbookComponents)
	{
		if (Component == nullptr || Component == GetSprite())
		{
			continue;
		}
		Component->SetTranslucentSortPriority(LayerPriority++);
	}

	if (GetSprite() != nullptr)
	{
		GetSprite()->SetTranslucentSortPriority(0);
	}
}

void AHD2DPaperCharacter::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	const float Forward = InputForward - InputBackward;
	const float Right = InputRight - InputLeft;

	FVector Direction(Right, -Forward, 0.0f);
	if (!Direction.IsNearlyZero())
	{
		Direction.Normalize();
		AddMovementInput(Direction, 1.0f);
	}
}

void AHD2DPaperCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	if (PlayerInputComponent == nullptr)
	{
		return;
	}

	PlayerInputComponent->BindAxisKey(EKeys::W, this, &AHD2DPaperCharacter::InputW);
	PlayerInputComponent->BindAxisKey(EKeys::S, this, &AHD2DPaperCharacter::InputS);
	PlayerInputComponent->BindAxisKey(EKeys::A, this, &AHD2DPaperCharacter::InputA);
	PlayerInputComponent->BindAxisKey(EKeys::D, this, &AHD2DPaperCharacter::InputD);

	// 项目使用 EnhancedPlayerInput，滚轮只走 Enhanced Input 才能真正收到。
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

		if (PitchAction == nullptr)
		{
			PitchAction = NewObject<UInputAction>(this, TEXT("IA_HD2D_Pitch"));
			PitchAction->ValueType = EInputActionValueType::Axis1D;
			ZoomMappingContext->MapKey(PitchAction, EKeys::MouseY);
		}

		EnhancedInput->BindAction(
			ZoomAction, ETriggerEvent::Triggered, this, &AHD2DPaperCharacter::OnZoomTriggered);

		EnhancedInput->BindAction(
			PitchAction, ETriggerEvent::Triggered, this, &AHD2DPaperCharacter::OnPitchTriggered);

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
}

void AHD2DPaperCharacter::InputW(float Value) { InputForward = Value; }
void AHD2DPaperCharacter::InputS(float Value) { InputBackward = Value; }
void AHD2DPaperCharacter::InputA(float Value) { InputLeft = Value; }
void AHD2DPaperCharacter::InputD(float Value) { InputRight = Value; }

void AHD2DPaperCharacter::OnZoomTriggered(const FInputActionValue& Value)
{
	CameraDistance = FMath::Clamp(
		CameraDistance - Value.Get<float>() * CameraZoomStep, MinCameraDistance, MaxCameraDistance);
	ApplyCameraDistance();
}

void AHD2DPaperCharacter::OnPitchTriggered(const FInputActionValue& Value)
{
	// 鼠标上移 = 机位抬高（俯看），下移 = 机位压低（仰看）。
	CameraPitch = FMath::Clamp(
		CameraPitch - Value.Get<float>() * PitchSensitivity, MinCameraPitch, MaxCameraPitch);
	ApplyCameraDistance();
}

void AHD2DPaperCharacter::ApplyCameraDistance()
{
	if (PoCCamera == nullptr)
	{
		return;
	}

	CameraDistance = FMath::Clamp(CameraDistance, MinCameraDistance, MaxCameraDistance);
	CameraPitch = FMath::Clamp(CameraPitch, MinCameraPitch, MaxCameraPitch);

	// 先按配置应用机位朝向，再沿朝向后退，保证和动画预览器同一观察方向。
	PoCCamera->SetRelativeRotation(FRotator(CameraPitch, CameraYaw, 0.0f));

	const FVector Forward = PoCCamera->GetRelativeRotation().Vector();
	PoCCamera->SetRelativeLocation(-Forward * CameraDistance);
	PoCCamera->SetFieldOfView(CameraFOV);
}
