// All rights reserved to ShadowCandle Studio


#include "DIY_MainPlayer.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "EnhancedInputSubsystems.h"
#include "EnhancedInputComponent.h"
#include "InputMappingContext.h"

DEFINE_LOG_CATEGORY(MainPlayerLog);

// Sets default values
ADIY_MainPlayer::ADIY_MainPlayer()
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	// Create CameraBoom (Spring Arm component)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 300.0f;  // 设置摄像机距离玩家的距离，可以根据需要调整
	CameraBoom->bUsePawnControlRotation = true; // Rotate arm based on controller

	// Create FollowCamera
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("TPSCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);  // Attach camera to end of boom
	FollowCamera->bUsePawnControlRotation = false;  // Let the arm control the rotation

	
}

// Called when the game starts or when spawned
void ADIY_MainPlayer::BeginPlay()
{
	Super::BeginPlay();

	APlayerController* PC = Cast<APlayerController>(GetController());
	if (PC)
	{
		PC->PlayerCameraManager->ViewPitchMin = -45.0f;  // 最小仰角，例如：-45度
		PC->PlayerCameraManager->ViewPitchMax = 45.0f;   // 最大仰角，例如：45度
		
	}

}

void ADIY_MainPlayer::PawnClientRestart()
{
	Super::PawnClientRestart();
	// Get the Enhanced Input Local Player Subsystem from the Local Player related to our Player Controller.
	if (APlayerController* PC = Cast<APlayerController>(GetController()))
	{
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
	UE_LOG(MainPlayerLog, Warning, TEXT("is enbled for input %d"),InputEnabled());
}


// Called every frame
void ADIY_MainPlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);


}


// Called to bind functionality to input
void ADIY_MainPlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	UE_LOG(MainPlayerLog, Warning, TEXT("PlayerInputComponent binded"));
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	
	// 获取Enhanced Player Input引用
	UEnhancedInputComponent* EnhancedInput = Cast<UEnhancedInputComponent>(PlayerInputComponent);
	
	if (EnhancedInput)
	{
		if (nullptr != MainPlayerInputMappingContext)
		{
			const UInputAction* mouse_action = MainPlayerInputMappingContext->GetMapping(0).Action;
			if (nullptr != mouse_action)
			{
				UE_LOG(MainPlayerLog, Warning, TEXT("Mouse Action binded"));
				EnhancedInput->BindAction(mouse_action, ETriggerEvent::Triggered, this, &ADIY_MainPlayer::HandleXYMove);
			}
		}
		
	}
}


void ADIY_MainPlayer::HandleXYMove(const FInputActionValue& Value)
{
	FVector2D Axis2DValue = FVector2D::ZeroVector;

	// 尝试从FInputActionValue中获取FVector2D
	try
	{
		Axis2DValue = Value.Get<FVector2D>();
	}
	catch (...)
	{
		// 获取失败
		UE_LOG(MainPlayerLog, Warning, TEXT("Failed to get FVector2D from FInputActionValue!"));
		return;
	}

	float AxisX = Axis2DValue.X;
	float AxisY = Axis2DValue.Y;

	
	AddControllerYawInput(AxisX);
	AddControllerPitchInput(-AxisY);
	
	
}


