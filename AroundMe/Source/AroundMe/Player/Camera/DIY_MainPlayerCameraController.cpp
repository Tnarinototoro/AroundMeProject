#include "DIY_MainPlayerCameraController.h"
#include "GameFramework/Pawn.h"
#include "GameFramework/Controller.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"

UDIY_MainPlayerCameraController::UDIY_MainPlayerCameraController()
{
    // 启用每帧调用Tick()
    PrimaryComponentTick.bCanEverTick = true;

    CurrentLookSpeed = FVector2D::ZeroVector;
    TargetLookSpeed = FVector2D::ZeroVector;
    LookAcceleration = FVector2D(2000.f, 2000.f);
    LookSpeedInterpRate = 15.f;

    // Create CameraBoom (Spring Arm component)
    CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));


    CameraBoom->SetupAttachment(this);
    CameraBoom->TargetArmLength = 600.f;
    CameraBoom->bUsePawnControlRotation = true; // Rotate arm based on controller

    // Create FollowCamera
    FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("TPSCamera"));
    FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName); // Attach camera to end of boom
    FollowCamera->bUsePawnControlRotation = false;                              // Let the arm control the rotation
#if 0
    FollowCamera->SetConstraintAspectRatio(true);
    FollowCamera->SetAspectRatio(16.0f/9.0f);
#endif
                                                                                // if (CameraBoom->GetAttachParent() == GetCapsuleComponent())
                                                                                // {
                                                                                // 	UE_LOG(LogTemp, Warning, TEXT("CameraBoom is correctly attached to PlayerCapsule."));
                                                                                // }
                                                                                // else
                                                                                // {

    // 	UE_LOG(LogTemp, Warning, TEXT("CameraBoom is NOT attached to PlayerCapsule."));
    // }
}

void UDIY_MainPlayerCameraController::BeginPlay()
{
    Super::BeginPlay();
    AController *cur_controller = AcquireOwnerPawnController();

    if (cur_controller)
    {
        FRotator NewRotator = cur_controller->GetControlRotation();

        NewRotator.Pitch = 340.f;

        cur_controller->SetControlRotation(NewRotator);
    }

}

void UDIY_MainPlayerCameraController::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction)
{
    Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

    UpdateUpDownCam(DeltaTime);
}

AController *UDIY_MainPlayerCameraController::AcquireOwnerPawnController()
{
    AActor *Owner = GetOwner();
    if (Owner)
    {

        APawn *PawnOwner = Cast<APawn>(Owner);
        if (PawnOwner)
        {
            // 获取并返回Pawn的Controller
            return PawnOwner->GetController();
        }
    }
    return nullptr;
}
void UDIY_MainPlayerCameraController::UpdateUpDownCam(float DeltaTime)
{
#if 1
    AController *cur_controller = AcquireOwnerPawnController();

    if (cur_controller)
    {
        float current_pitch_depot = UpDownCamPitchDepo[CurrentUpDownType];
        bool should_execute_lerp{false};

        float target_pitch{0};
        if (TargetUpDownType != CurrentUpDownType)
        {
            should_execute_lerp = true;
            target_pitch = UpDownCamPitchDepo[(int)TargetUpDownType];
        }
        else
        {

            if (cur_controller->GetControlRotation().Pitch != current_pitch_depot)
            {

                target_pitch = current_pitch_depot;
                should_execute_lerp = true;
            }
        }

        if (should_execute_lerp)
        {

            FRotator NewRotator = cur_controller->GetControlRotation();

            NewRotator.Pitch = FMath::FInterpTo(NewRotator.Pitch, target_pitch, DeltaTime, UpDownCameraLerpSpeed);

            cur_controller->SetControlRotation(NewRotator);

            float new_fov = FMath::FInterpTo(FollowCamera->FieldOfView, UpDownCamFOVDepo[TargetUpDownType], DeltaTime, UpDownCameraLerpSpeed);

            //FollowCamera->SetFieldOfView(new_fov);

            float new_target_spring_length = FMath::FInterpTo(CameraBoom->TargetArmLength, UpDownCamSpringLengthDepo[TargetUpDownType], DeltaTime, UpDownCameraLerpSpeed);

           CameraBoom->TargetArmLength = new_target_spring_length;

            if (FMath::Abs(cur_controller->GetControlRotation().Pitch - target_pitch) <= 0.1f)
            {
                CurrentUpDownType = TargetUpDownType;
            }
        }
        // UE_LOG(MainPlayerLog, Warning, TEXT("xxxxxx cur rotation pitch %f"), GetControlRotation().Pitch);
    }
#endif
}

void UDIY_MainPlayerCameraController::HandleMouseMoveForUpDownCam(const FVector2D &Value)
{
    // UE_LOG(MainPlayerLog, Warning, TEXT("yYYYYY before pitch x %f, added pitch %f"), GetControlRotation().Pitch, Axis2DValue.Y * 5.0f);
#if 1

    if (CurrentUpDownType == TargetUpDownType)
    {
        if (FMath::Abs(Value.Y) > UpDownCameraLerpTriggerThresHold)
        {

            if (Value.Y > 0)
            {
                if (TargetUpDownType >= 1)
                {
                    --TargetUpDownType;
                }
            }
            else
            {
                if (TargetUpDownType < UpDownCameraType::Cam_Flying_Type)
                {
                    ++TargetUpDownType;
                }
            }
        }
    }

#endif

    AActor *owner_player = GetOwner();

    APawn *cur_player_pawn = Cast<APawn>(owner_player);

    if (nullptr != cur_player_pawn)
    {
        cur_player_pawn->AddControllerYawInput(Value.X);
        // cur_player_pawn->AddControllerPitchInput(Value.Y);
    }

    // UE_LOG(MainPlayerLog, Warning, TEXT("xxxxxxxx after pitch %f"),GetControlRotation().Pitch);
}
