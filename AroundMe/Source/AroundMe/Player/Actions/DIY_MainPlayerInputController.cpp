#include "DIY_MainPlayerInputController.h"
#include "EnhancedInputSubsystems.h"
#include "EnhancedInputComponent.h"
#include "InputMappingContext.h"
#include "DIY_MainPlayerActionController.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"

UDIY_MainPlayerInputController::UDIY_MainPlayerInputController()
{
      // 启用每帧调用Tick()
    PrimaryComponentTick.bCanEverTick = true;

    // 初始化自定义属性
    CustomValue = 0.0f;
}

void UDIY_MainPlayerInputController::BeginPlay()
{
    Super::BeginPlay();
}

void UDIY_MainPlayerInputController::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction)
{
    Super::TickComponent(DeltaTime, TickType, ThisTickFunction);


    UpdateDesiredDir_ByPlayerInput_FollowCamView(DeltaTime);
}

void UDIY_MainPlayerInputController::SetupPlayerInputComponent(UInputComponent *PlayerInputComponent)
{

    // Enhanced Player Input
	UEnhancedInputComponent* EnhancedInput = Cast<UEnhancedInputComponent>(PlayerInputComponent);
	
	if (EnhancedInput)
    {
		if (nullptr != MainPlayerInputMappingContext)
		{
			const UInputAction* last_action = nullptr;		
			const int mapping_num = MainPlayerInputMappingContext->GetMappings().Num();
		
			int next_index_to_bind = 0;
			for (int mapping_index = 0; mapping_index < mapping_num; ++mapping_index)
			{
				const UInputAction* cur_action= MainPlayerInputMappingContext->GetMapping(mapping_index).Action;
				if (nullptr != cur_action && cur_action != last_action)
				{
					if (next_index_to_bind == (int)EInputActionType::Look_Action)
					{
						UE_LOG(MainPlayerLog, Warning, TEXT("Mouse Action binded"));
						EnhancedInput->BindAction(cur_action, ETriggerEvent::Triggered, this, &UDIY_MainPlayerInputController::HandleXYMouseMove);
					}
					else if (next_index_to_bind == (int)EInputActionType::Move_Action)
					{
						UE_LOG(MainPlayerLog, Warning, TEXT("MainPlayer Move Action binded"));
						EnhancedInput->BindAction(cur_action, ETriggerEvent::Triggered, this, &UDIY_MainPlayerInputController::HandleXYPlayerMove);
						EnhancedInput->BindAction(cur_action, ETriggerEvent::Completed, this, &UDIY_MainPlayerInputController::HandleXYPlayerMoveInputFinished);
					}
					else if (next_index_to_bind == (int)EInputActionType::Jump_Action)
					{
						UE_LOG(MainPlayerLog, Warning, TEXT("jump action binded well %s"), *cur_action->GetName());
						EnhancedInput->BindAction(cur_action, ETriggerEvent::Started, this, &UDIY_MainPlayerInputController::HandlePlayerJump);
					}


					last_action = cur_action;
					next_index_to_bind++;
				}
			}

		}
		
	}
}






void UDIY_MainPlayerInputController::HandleXYPlayerMove(const FInputActionValue& Value)
{
	//UE_LOG(MainPlayerLog, Warning, TEXT("MHandling Move input XXXXXXX"));
	inPutVector2D = Value.Get<FVector2D>();


	// FVector ActorLocation = GetActorLocation();
	// FVector EndLocation = ActorLocation + DesiredDir_ByPlayerInput_FollowCamView * 600.f;
	//DrawDebugLine(GetWorld(), ActorLocation, EndLocation, FColor::Red, false, -1, 0, 10);
	//UE_LOG(MainPlayerLog, Warning, TEXT("MHandling Move input x %f, y %f"), inPutVector2D.X, inPutVector2D.Y);
	

	IsInputingMove = true;
	

	
}





void UDIY_MainPlayerInputController::HandlePlayerJump(const FInputActionValue &Value)
{
   TriggerProcessJumpInput.Broadcast(Value);
    AcquireOwnerActorOwnedUDIY_MainPlayerActionController()->ProcessJumpInput();
	//\UE_LOG(MainPlayerLog, Warning, TEXT("Jump started"));
	
}

void UDIY_MainPlayerInputController::HandleXYPlayerMoveInputFinished(const FInputActionValue& Value)
{
	//UE_LOG(MainPlayerLog, Warning, TEXT("MHandling Move input finished YYYYYYYY"));

	inPutVector2D.Zero();
	IsInputingMove = false;
}
void UDIY_MainPlayerInputController::HandleXYMouseMove(const FInputActionValue& Value)
{
	FVector2D Axis2DValue = Value.Get<FVector2D>();


	AcquireOwnerActorOwnedUDIY_MainPlayerCameraController()->HandleMouseMoveForUpDownCam(Axis2DValue);




}



void UDIY_MainPlayerInputController::RegisterInputMappings(APlayerController *PC)
{

    check(nullptr!=PC);
    UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PC->GetLocalPlayer());
    // PawnClientRestart can run more than once in an Actor's lifetime, so start by clearing out any leftover mappings.
    Subsystem->ClearAllMappings();
    if (nullptr != MainPlayerInputMappingContext)
    {
        UE_LOG(MainPlayerLog, Warning, TEXT("MainPlayerInputMappingContext added"));
        // Add each mapping context, along with their priority values. Higher values outprioritize lower values.
        Subsystem->AddMappingContext(MainPlayerInputMappingContext, 1);
        
    }



}



void UDIY_MainPlayerInputController::UpdateDesiredDir_ByPlayerInput_FollowCamView(float DeltaTime)
{
	FVector ForwardActorVector =  AcquireOwnerActorOwnedUDIY_MainPlayerCameraController()->FollowCamera->GetForwardVector();
	FVector RightActorVector = AcquireOwnerActorOwnedUDIY_MainPlayerCameraController()-> FollowCamera->GetRightVector();
	ForwardActorVector.Normalize();
	RightActorVector.Normalize();
	ForwardActorVector.Z = 0;
	RightActorVector.Z = 0;


	DesiredDir_ByPlayerInput_FollowCamView = (ForwardActorVector * inPutVector2D.Y + RightActorVector * inPutVector2D.X);

	if (!DesiredDir_ByPlayerInput_FollowCamView.IsNormalized())
	{
		DesiredDir_ByPlayerInput_FollowCamView.Normalize();
	}
	
}


IMPL_GET_COMPONENT_HELPER_FOR_COMPONENT(UDIY_MainPlayerInputController,UDIY_MainPlayerCameraController)


IMPL_GET_COMPONENT_HELPER_FOR_COMPONENT(UDIY_MainPlayerInputController,UDIY_MainPlayerActionController)