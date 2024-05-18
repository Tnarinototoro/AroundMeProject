#include "DIY_MainPlayerCameraController.h"
#include "GameFramework/Pawn.h"
#include "GameFramework/Controller.h"
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
	CameraBoom->TargetArmLength = 1300.f; 
	CameraBoom->bUsePawnControlRotation = true; // Rotate arm based on controller


	// Create FollowCamera
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("TPSCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);  // Attach camera to end of boom
	FollowCamera->bUsePawnControlRotation = false;  // Let the arm control the rotation
	// if (CameraBoom->GetAttachParent() == GetCapsuleComponent())
	// {
	// 	UE_LOG(LogTemp, Warning, TEXT("CameraBoom is correctly attached to PlayerCapsule."));
	// }
	// else
	// {

	// 	UE_LOG(LogTemp, Warning, TEXT("CameraBoom is NOT attached to PlayerCapsule."));
	// }

    // 初始化自定义属性
    CustomValue = 0.0f;
}

void UDIY_MainPlayerCameraController::BeginPlay()
{
    Super::BeginPlay();
}

void UDIY_MainPlayerCameraController::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction)
{
    Super::TickComponent(DeltaTime, TickType, ThisTickFunction);


    UpdateUpDownCam(DeltaTime);
}

void UDIY_MainPlayerCameraController::CustomFunction()
{
     // 打印自定义值
    UE_LOG(LogTemp, Warning, TEXT("Custom Value: %f"), CustomValue);
}
AController *UDIY_MainPlayerCameraController::AcquireOwnerPawnController()
{
	AActor* Owner = GetOwner();
    if (Owner)
    {
        
        APawn* PawnOwner = Cast<APawn>(Owner);
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

	AController * cur_controller=AcquireOwnerPawnController();

	if(cur_controller)
	{
float current_pitch_depot = UpDownCamPitchDepo[CurrentUpDownType];
	bool should_execute_lerp{ false };

	float target_pitch{ 0 };
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


		float new_fov=FMath::FInterpTo(FollowCamera->FieldOfView,UpDownCamFOVDepo[TargetUpDownType],DeltaTime,UpDownCameraLerpSpeed);


		FollowCamera->SetFieldOfView(new_fov);


		float new_target_spring_length=FMath::FInterpTo(CameraBoom->TargetArmLength,UpDownCamSpringLengthDepo[TargetUpDownType],DeltaTime,UpDownCameraLerpSpeed);


		CameraBoom->TargetArmLength=new_target_spring_length;

		if (FMath::Abs(cur_controller->GetControlRotation().Pitch - target_pitch) <= 0.1f)
		{
			CurrentUpDownType = TargetUpDownType;
			
		}
		
	}
	//UE_LOG(MainPlayerLog, Warning, TEXT("xxxxxx cur rotation pitch %f"), GetControlRotation().Pitch);
	}
	
}

void UDIY_MainPlayerCameraController::HandleMouseMoveForUpDownCam(const FVector2D &Value)
{
    	//UE_LOG(MainPlayerLog, Warning, TEXT("yYYYYY before pitch x %f, added pitch %f"), GetControlRotation().Pitch, Axis2DValue.Y * 5.0f);



	if(CurrentUpDownType==TargetUpDownType)
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
	

	
	//UE_LOG(MainPlayerLog, Warning, TEXT("xxxxxxxx after pitch %f"),GetControlRotation().Pitch);
}
