#include "PropHuntGhostPawn.h"

#include "Net/UnrealNetwork.h"
#include "Components/WidgetComponent.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputMappingContext.h"
#include "InputAction.h"
#include "InputActionValue.h"
#include "InputModifiers.h"
#include "Engine/LocalPlayer.h"
#include "Engine/World.h"
#include "TimerManager.h"
#include "PropHuntNameplateWidget.h"
#include "PropHuntPlayerState.h"
#include "PropHuntTypes.h"
#include "PropHuntPropActor.h"
#include "PropHuntPlayerController.h"
#include "EngineUtils.h"
#include "GameFramework/Controller.h"
#include "GameFramework/PlayerController.h"

APropHuntGhostPawn::APropHuntGhostPawn()
{
    PrimaryActorTick.bCanEverTick = true; // 手动上报位置需要 Tick

    // ADefaultPawn 默认 bReplicateMovement=false，导致 Ghost 运动不复制到 server，这里显式开启。
    SetReplicateMovement(true);

    NameplateComponent = CreateDefaultSubobject<UWidgetComponent>(TEXT("Nameplate"));
    NameplateComponent->SetupAttachment(RootComponent);
    NameplateComponent->SetWidgetSpace(EWidgetSpace::Screen);
    NameplateComponent->SetDrawSize(FVector2D(400.0f, 80.0f));
    NameplateComponent->SetRelativeLocation(FVector(0.0f, 0.0f, 80.0f));
    NameplateComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}

void APropHuntGhostPawn::BeginPlay()
{
    Super::BeginPlay();

    if (!NameplateComponent)
    {
        return;
    }

    NameplateComponent->SetVisibility(bShowNameplate);

    UPropHuntNameplateWidget* Widget = CreateWidget<UPropHuntNameplateWidget>(GetWorld(), UPropHuntNameplateWidget::StaticClass());
    NameplateComponent->SetWidget(Widget);

    FTimerHandle Handle;
    GetWorldTimerManager().SetTimer(Handle, this, &APropHuntGhostPawn::UpdateNameplate, 0.5f, false);
}

void APropHuntGhostPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
    Super::SetupPlayerInputComponent(PlayerInputComponent);

    SetupInputActions();

    if (UEnhancedInputComponent* EIC = Cast<UEnhancedInputComponent>(PlayerInputComponent))
    {
        EIC->BindAction(MoveAction, ETriggerEvent::Triggered, this, &APropHuntGhostPawn::Move);
        EIC->BindAction(LookAction, ETriggerEvent::Triggered, this, &APropHuntGhostPawn::Look);
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

void APropHuntGhostPawn::SetupInputActions()
{
    if (DefaultMappingContext)
    {
        return;
    }

    DefaultMappingContext = NewObject<UInputMappingContext>(this, TEXT("IMC_PropHuntGhost"));

    MoveAction = NewObject<UInputAction>(this, TEXT("IA_GhostMove"));
    MoveAction->ValueType = EInputActionValueType::Axis2D;

    LookAction = NewObject<UInputAction>(this, TEXT("IA_GhostLook"));
    LookAction->ValueType = EInputActionValueType::Axis2D;

    // Move：W/S 前后(Y)，A/D 左右(X)。
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

    // Look：MouseX = Yaw，MouseY = Pitch（反向）。
    {
        DefaultMappingContext->MapKey(LookAction, EKeys::MouseX);

        FEnhancedActionKeyMapping& MouseY = DefaultMappingContext->MapKey(LookAction, EKeys::MouseY);
        UInputModifierSwizzleAxis* YSwizzle = NewObject<UInputModifierSwizzleAxis>(this);
        YSwizzle->Order = EInputAxisSwizzle::YXZ;
        MouseY.Modifiers.Add(YSwizzle);
        MouseY.Modifiers.Add(NewObject<UInputModifierNegate>(this));
    }
}

void APropHuntGhostPawn::Move(const FInputActionValue& Value)
{
    APropHuntPlayerState* PS = GetPlayerState<APropHuntPlayerState>();
    if (PS && PS->bGhostHidden)
    {
        return; // 附身时不移动，只保留 Look 环绕。
    }

    const FVector2D Axis = Value.Get<FVector2D>();
    if (!Controller)
    {
        return;
    }

    // FloatingPawn：沿视线完整方向（含上下），鼠标朝上即上升。
    const FRotator ControlRot = Controller->GetControlRotation();
    const FVector Forward = ControlRot.Vector();
    const FVector Right = FRotationMatrix(ControlRot).GetScaledAxis(EAxis::Y);
    AddMovementInput(Forward, Axis.Y);
    AddMovementInput(Right, Axis.X);
}

void APropHuntGhostPawn::Look(const FInputActionValue& Value)
{
    const FVector2D Axis = Value.Get<FVector2D>();

    if (APropHuntPlayerController* PC = Cast<APropHuntPlayerController>(GetController()))
    {
        if (APropHuntPropActor* Prop = PC->GetPossessedProp())
        {
            // 附身：Look 输入驱动 Prop 的环绕相机。
            Prop->AddOrbitRotation(Axis);
            return;
        }
    }

    if (Controller)
    {
        AddControllerYawInput(Axis.X);
        AddControllerPitchInput(Axis.Y);
    }
}

void APropHuntGhostPawn::UpdateNameplate()
{
    APropHuntPlayerState* PS = GetPlayerState<APropHuntPlayerState>();
    if (!PS || !NameplateComponent)
    {
        return;
    }

    const FString RoleStr = StaticEnum<EPropHuntRole>()->GetDisplayNameTextByValue(static_cast<int64>(PS->TeamRole)).ToString();
    const FString Text = FString::Printf(TEXT("%s (%s)"), *PS->GetPlayerName(), *RoleStr);

    if (UPropHuntNameplateWidget* Widget = Cast<UPropHuntNameplateWidget>(NameplateComponent->GetWidget()))
    {
        Widget->SetInfoText(Text);
    }
}

void APropHuntGhostPawn::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    // client 端（autonomous proxy）节流上报位置到 server。
    if (IsLocallyControlled() && GetLocalRole() == ROLE_AutonomousProxy)
    {
        TimeSinceLastUpdate += DeltaTime;
        if (TimeSinceLastUpdate >= 0.05f)
        {
            TimeSinceLastUpdate = 0.0f;
            ServerUpdateTransform(GetActorLocation(), GetActorRotation());
        }
    }
}

void APropHuntGhostPawn::ServerUpdateTransform_Implementation(FVector Location, FRotator Rotation)
{
    // server 设置 replicated 属性，复制到所有客户端（含 Hunter）。
    GhostLocation = Location;
    GhostRotation = Rotation;

    // server 本地也更新 simulated proxy 位置。
    SetActorLocationAndRotation(Location, Rotation, false, nullptr, ETeleportType::ResetPhysics);
}

void APropHuntGhostPawn::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    DOREPLIFETIME(APropHuntGhostPawn, GhostLocation);
    DOREPLIFETIME(APropHuntGhostPawn, GhostRotation);
}

void APropHuntGhostPawn::OnRep_GhostLocation()
{
    // 客户端更新位置（autonomous proxy 自己已在该位置，只更新 simulated proxy）。
    if (GetLocalRole() == ROLE_SimulatedProxy)
    {
        SetActorLocationAndRotation(GhostLocation, GhostRotation, false, nullptr, ETeleportType::ResetPhysics);
    }
}
