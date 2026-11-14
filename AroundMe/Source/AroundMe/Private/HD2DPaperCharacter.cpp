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
}

void AHD2DPaperCharacter::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	const float Forward = InputForward - InputBackward;
	const float Right = InputRight - InputLeft;

	FVector Direction(-Right, Forward, 0.0f);
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

		EnhancedInput->BindAction(
			ZoomAction, ETriggerEvent::Triggered, this, &AHD2DPaperCharacter::OnZoomTriggered);

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

void AHD2DPaperCharacter::ApplyCameraDistance()
{
	if (PoCCamera == nullptr)
	{
		return;
	}

	CameraDistance = FMath::Clamp(CameraDistance, MinCameraDistance, MaxCameraDistance);

	const FVector Forward = PoCCamera->GetRelativeRotation().Vector();
	PoCCamera->SetRelativeLocation(-Forward * CameraDistance);
	PoCCamera->SetFieldOfView(CameraFOV);
}
