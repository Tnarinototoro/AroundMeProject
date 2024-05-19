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
			TArray<FString> AlreadyLoadedInPutActionNames;
			const int mapping_num = MainPlayerInputMappingContext->GetMappings().Num();
		
			
			for (int mapping_index = 0; mapping_index < mapping_num; ++mapping_index)
			{
				
				const UInputAction* cur_action= MainPlayerInputMappingContext->GetMapping(mapping_index).Action;
				FString Cur_Action_Name{cur_action->GetName()};
				if(!AlreadyLoadedInPutActionNames.Contains(Cur_Action_Name))
				{
					AlreadyLoadedInPutActionNames.Add(Cur_Action_Name);
					UE_LOG(MainPlayerLog, Warning, TEXT(" %s is binded well"),*cur_action->GetName());

					if (Cur_Action_Name == "IA_DIY_Mouse")
					{
						EnhancedInput->BindAction(cur_action, ETriggerEvent::Triggered, this, &UDIY_MainPlayerInputController::HandleXYMouseMove);
						
					}
					else if (Cur_Action_Name == "IA_DIY_Move")
					{
						
						EnhancedInput->BindAction(cur_action, ETriggerEvent::Triggered, this, &UDIY_MainPlayerInputController::HandleXYPlayerMove);
						EnhancedInput->BindAction(cur_action, ETriggerEvent::Completed, this, &UDIY_MainPlayerInputController::HandleXYPlayerMoveInputFinished);
					}
					else if (Cur_Action_Name == "IA_DIY_Jump")
					{
						
						EnhancedInput->BindAction(cur_action, ETriggerEvent::Started, this, &UDIY_MainPlayerInputController::HandlePlayerJump);
					}
					else if(Cur_Action_Name=="IA_DIY_Interact")
					{
						
						EnhancedInput->BindAction(cur_action, ETriggerEvent::Started, this, &UDIY_MainPlayerInputController::onInteractPressed);
						EnhancedInput->BindAction(cur_action, ETriggerEvent::Completed, this, &UDIY_MainPlayerInputController::onInteractReleased);
						EnhancedInput->BindAction(cur_action, ETriggerEvent::Triggered, this, &UDIY_MainPlayerInputController::onInteractTriggered);
						EnhancedInput->BindAction(cur_action, ETriggerEvent::Ongoing, this, &UDIY_MainPlayerInputController::onInteractPressing);

						
					}
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

void UDIY_MainPlayerInputController::onInteractPressed(const FInputActionValue &Value)
{
	//UE_LOG(MainPlayerLog, Warning, TEXT("Holding Started"));
}

void UDIY_MainPlayerInputController::onInteractReleased(const FInputActionValue &Value)
{
	//UE_LOG(MainPlayerLog, Warning, TEXT("Holding holding released"));
}

void UDIY_MainPlayerInputController::onInteractPressing(const FInputActionValue &Value)
{
	//UE_LOG(MainPlayerLog, Warning, TEXT("onInteractPressing !!!!"));
}
void UDIY_MainPlayerInputController::onInteractTriggered(const FInputActionValue &Value)
{
	//UE_LOG(MainPlayerLog, Warning, TEXT("Interct Holding !!!!"));
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

	UE_LOG(MainPlayerLog, Warning, TEXT("HandleXYMouseMove triggered !!!!"));
	AcquireOwnerActorOwnedUDIY_MainPlayerCameraController()->HandleMouseMoveForUpDownCam(Axis2DValue);




}

//void UDIY_MainPlayerInputController::HandleXYMouseMoveHoldCompleted(const FInputActionValue& Value)
//{
//	UE_LOG(MainPlayerLog, Warning, TEXT("HandleXYMouseMoveHoldCompleted complted !!!!"));
//
//
//
//}



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