#include "PropHuntCharacter.h"

#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputMappingContext.h"
#include "InputAction.h"
#include "InputActionValue.h"
#include "InputModifiers.h"
#include "Engine/LocalPlayer.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Controller.h"
#include "GameFramework/PlayerController.h"

APropHuntCharacter::APropHuntCharacter()
{
    PrimaryActorTick.bCanEverTick = false;

    bUseControllerRotationPitch = false;
    bUseControllerRotationYaw = false;
    bUseControllerRotationRoll = false;

    if (UCharacterMovementComponent* MoveComp = GetCharacterMovement())
    {
        MoveComp->bOrientRotationToMovement = true;
        MoveComp->RotationRate = FRotator(0.0, 540.0, 0.0);
    }
}

void APropHuntCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
    Super::SetupPlayerInputComponent(PlayerInputComponent);

    SetupInputActions();

    if (UEnhancedInputComponent* EIC = Cast<UEnhancedInputComponent>(PlayerInputComponent))
    {
        EIC->BindAction(MoveAction, ETriggerEvent::Triggered, this, &APropHuntCharacter::Move);
        EIC->BindAction(LookAction, ETriggerEvent::Triggered, this, &APropHuntCharacter::Look);
        EIC->BindAction(JumpAction, ETriggerEvent::Started, this, &APropHuntCharacter::JumpPressed);
        EIC->BindAction(JumpAction, ETriggerEvent::Completed, this, &APropHuntCharacter::JumpReleased);
    }

    if (APlayerController* PC = Cast<APlayerController>(GetController()))
    {
        if (ULocalPlayer* LP = PC->GetLocalPlayer())
        {
            if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(LP))
            {
                Subsystem->AddMappingContext(DefaultMappingContext, 0);
            }
        }
    }
}

void APropHuntCharacter::SetupInputActions()
{
    if (DefaultMappingContext)
    {
        return;
    }

    DefaultMappingContext = NewObject<UInputMappingContext>(this, TEXT("IMC_PropHunt"));

    MoveAction = NewObject<UInputAction>(this, TEXT("IA_PropHuntMove"));
    MoveAction->ValueType = EInputActionValueType::Axis2D;

    LookAction = NewObject<UInputAction>(this, TEXT("IA_PropHuntLook"));
    LookAction->ValueType = EInputActionValueType::Axis2D;

    JumpAction = NewObject<UInputAction>(this, TEXT("IA_PropHuntJump"));
    JumpAction->ValueType = EInputActionValueType::Boolean;

    // Move: W/S = 前后(Y)，A/D = 左右(X)。1D 键默认贡献 X 分量，用 Swizzle 把 W/S 转到 Y。
    {
        FEnhancedActionKeyMapping& W = DefaultMappingContext->MapKey(MoveAction, EKeys::W);
        UInputModifierSwizzleAxis* WSwizzle = NewObject<UInputModifierSwizzleAxis>(this);
        WSwizzle->Order = EInputAxisSwizzle::YXZ;
        W.Modifiers.Add(WSwizzle);

        FEnhancedActionKeyMapping& S = DefaultMappingContext->MapKey(MoveAction, EKeys::S);
        UInputModifierSwizzleAxis* SSwizzle = NewObject<UInputModifierSwizzleAxis>(this);
        SSwizzle->Order = EInputAxisSwizzle::YXZ;
        S.Modifiers.Add(SSwizzle);
        S.Modifiers.Add(NewObject<UInputModifierNegate>(this));

        FEnhancedActionKeyMapping& A = DefaultMappingContext->MapKey(MoveAction, EKeys::A);
        A.Modifiers.Add(NewObject<UInputModifierNegate>(this));

        DefaultMappingContext->MapKey(MoveAction, EKeys::D);
    }

    // Look: MouseX = Yaw(X)，MouseY = Pitch(Y，反向)。
    {
        DefaultMappingContext->MapKey(LookAction, EKeys::MouseX);

        FEnhancedActionKeyMapping& MouseY = DefaultMappingContext->MapKey(LookAction, EKeys::MouseY);
        UInputModifierSwizzleAxis* YSwizzle = NewObject<UInputModifierSwizzleAxis>(this);
        YSwizzle->Order = EInputAxisSwizzle::YXZ;
        MouseY.Modifiers.Add(YSwizzle);
        MouseY.Modifiers.Add(NewObject<UInputModifierNegate>(this));
    }

    // Jump: SpaceBar
    DefaultMappingContext->MapKey(JumpAction, EKeys::SpaceBar);
}

void APropHuntCharacter::Move(const FInputActionValue& Value)
{
    const FVector2D Axis = Value.Get<FVector2D>();
    if (Controller)
    {
        const FRotator YawRotation(0.0, Controller->GetControlRotation().Yaw, 0.0);
        const FVector Forward = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
        const FVector Right = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
        AddMovementInput(Forward, Axis.Y);
        AddMovementInput(Right, Axis.X);
    }
}

void APropHuntCharacter::Look(const FInputActionValue& Value)
{
    const FVector2D Axis = Value.Get<FVector2D>();
    if (Controller)
    {
        AddControllerYawInput(Axis.X);
        AddControllerPitchInput(Axis.Y);
    }
}

void APropHuntCharacter::JumpPressed(const FInputActionValue& Value)
{
    Jump();
}

void APropHuntCharacter::JumpReleased(const FInputActionValue& Value)
{
    StopJumping();
}
