// All rights reserved to ShadowCandle Studio


#include "DIY_MainPlayer.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "EnhancedInputSubsystems.h"
#include "EnhancedInputComponent.h"
#include "InputMappingContext.h"
#include "Components/CapsuleComponent.h"
#include "Components/ArrowComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Engine/StreamableManager.h"
#include "DIY_Item.h"
#include "Engine/AssetManager.h"

DEFINE_LOG_CATEGORY(MainPlayerLog);

// Sets default values
ADIY_MainPlayer::ADIY_MainPlayer()
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	CurrentLookSpeed = FVector2D::ZeroVector;
	TargetLookSpeed = FVector2D::ZeroVector;
	LookAcceleration = FVector2D(2000.f, 2000.f); // 这个值代表摄像机旋转加速度
	LookSpeedInterpRate = 15.f; // 控制插值速度，值越大，粘滞感越小
	
	// Create CameraBoom (Spring Arm component)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 1300.f;  // 设置摄像机距离玩家的距离，可以根据需要调整
	CameraBoom->bUsePawnControlRotation = true; // Rotate arm based on controller


	// Create FollowCamera
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("TPSCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);  // Attach camera to end of boom
	FollowCamera->bUsePawnControlRotation = false;  // Let the arm control the rotation
	if (CameraBoom->GetAttachParent() == GetCapsuleComponent())
	{
		UE_LOG(LogTemp, Warning, TEXT("CameraBoom is correctly attached to PlayerCapsule."));
	}
	else
	{

		UE_LOG(LogTemp, Warning, TEXT("CameraBoom is NOT attached to PlayerCapsule."));
	}


	// 初始化 Hair Component
	HairComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("HairComponent"));
	HairComponent->SetupAttachment(GetMesh());

	// 初始化 Hat Component
	HatComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("HatComponent"));
	

	HatComponent->SetupAttachment(GetMesh(),TEXT("headSocket"));

	
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


void ADIY_MainPlayer::UpdateTPSCamera(float deltaTime)
{
	

	
	// 绘制Actor的Forward方向的Debug线
	FVector ActorLocation = GetActorLocation();
	FVector EndLocation = ActorLocation + (GetActorForwardVector() * 100); // 在Actor前方100单位长度绘制一条线
	DrawDebugLine(GetWorld(), ActorLocation, EndLocation, FColor::Green, false, -1, 0, 5);

	//if there is any input from player
	if (inPutVector2D.Length() > 0.1f && IsInputingMove)
	{
		// 取得摄像机的旋转
		FRotator CameraRot = FollowCamera->GetComponentRotation();



		// 获取当前角色的旋转
		FRotator CurrentRotation = GetActorRotation();

		// 设定插值速度
		float InterpSpeed = 5.0f; // 这个值可以调整，以设置旋转速度
		FRotator Target_Rotator = DesiredDir_ByPlayerInput_FollowCamView.Rotation();
		Target_Rotator.Pitch = 0.f;
		Target_Rotator.Roll = 0.f;
		// 插值计算新的旋转
		FRotator NewRotation = FMath::RInterpTo(CurrentRotation, Target_Rotator, deltaTime, InterpSpeed);
		// 设置人物的新朝向
		SetActorRotation(NewRotation);
	}
}

void ADIY_MainPlayer::UpdatePlayerMove(float deltaTime)
{
	if (inPutVector2D.Length() > 0.1f && IsInputingMove)
	{

		AddMovementInput(DesiredDir_ByPlayerInput_FollowCamView);
	}
}

// Called every frame
void ADIY_MainPlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	UpdateDesiredDir_ByPlayerInput_FollowCamView(DeltaTime);

	UpdateTPSCamera(DeltaTime);
	
	UpdatePlayerMove(DeltaTime);

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
						EnhancedInput->BindAction(cur_action, ETriggerEvent::Triggered, this, &ADIY_MainPlayer::HandleXYMouseMove);
					}
					else if (next_index_to_bind == (int)EInputActionType::Move_Action)
					{
						UE_LOG(MainPlayerLog, Warning, TEXT("MainPlayer Move Action binded"));
						EnhancedInput->BindAction(cur_action, ETriggerEvent::Triggered, this, &ADIY_MainPlayer::HandleXYPlayerMove);
						EnhancedInput->BindAction(cur_action, ETriggerEvent::Completed, this, &ADIY_MainPlayer::HandleXYPlayerMoveInputFinished);
					}
					else if (next_index_to_bind == (int)EInputActionType::Jump_Action)
					{
						UE_LOG(MainPlayerLog, Warning, TEXT("jump action binded well %s"), *cur_action->GetName());
						EnhancedInput->BindAction(cur_action, ETriggerEvent::Started, this, &ADIY_MainPlayer::HandlePlayerJump);
					}


					last_action = cur_action;
					next_index_to_bind++;
				}
			}

		}
		
	}
}

void ADIY_MainPlayer::UpdateDesiredDir_ByPlayerInput_FollowCamView(float DeltaTime)
{
	FVector ForwardActorVector = FollowCamera->GetForwardVector();
	FVector RightActorVector = FollowCamera->GetRightVector();
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


void ADIY_MainPlayer::HandleXYMouseMove(const FInputActionValue& Value)
{
	FVector2D Axis2DValue = Value.Get<FVector2D>();

	// 设置目标速度，这里可以直接设置为轴值或者乘以一个速度值以调整感觉
	TargetLookSpeed = Axis2DValue * LookAcceleration;

	// 插值当前速度到目标速度，增加粘滞感
	CurrentLookSpeed.X = FMath::FInterpTo(CurrentLookSpeed.X, TargetLookSpeed.X, GetWorld()->GetDeltaSeconds(), LookSpeedInterpRate);
	CurrentLookSpeed.Y = FMath::FInterpTo(CurrentLookSpeed.Y, TargetLookSpeed.Y, GetWorld()->GetDeltaSeconds(), LookSpeedInterpRate);

	// 应用当前速度到控制器旋转上
	AddControllerYawInput(CurrentLookSpeed.X * GetWorld()->GetDeltaSeconds());
	AddControllerPitchInput(-CurrentLookSpeed.Y * GetWorld()->GetDeltaSeconds());
	
	
}

void ADIY_MainPlayer::HandleXYPlayerMove(const FInputActionValue& Value)
{
	//UE_LOG(MainPlayerLog, Warning, TEXT("MHandling Move input XXXXXXX"));
	inPutVector2D = Value.Get<FVector2D>();


	FVector ActorLocation = GetActorLocation();
	FVector EndLocation = ActorLocation + DesiredDir_ByPlayerInput_FollowCamView * 600.f;
	DrawDebugLine(GetWorld(), ActorLocation, EndLocation, FColor::Red, false, -1, 0, 10);
	//UE_LOG(MainPlayerLog, Warning, TEXT("MHandling Move input x %f, y %f"), inPutVector2D.X, inPutVector2D.Y);
	// 移动Actor

	IsInputingMove = true;
	

	
}

void ADIY_MainPlayer::HandlePlayerJump(const FInputActionValue& Value)
{
	// 按下跳跃键，开始跳跃
	Jump();
	UE_LOG(MainPlayerLog, Warning, TEXT("Jump started"));
	
}

void ADIY_MainPlayer::HandleXYPlayerMoveInputFinished(const FInputActionValue& Value)
{
	UE_LOG(MainPlayerLog, Warning, TEXT("MHandling Move input finished YYYYYYYY"));

	inPutVector2D.Zero();
	IsInputingMove = false;
}

void ADIY_MainPlayer::ChangeHair(EHairType NewHairType)
{
	FSoftObjectPath HairMeshToLoad = GetHairMeshReferenceFromType(NewHairType);
	LoadAndSetSkeletalMesh(HairComponent, HairMeshToLoad);
}

void ADIY_MainPlayer::ChangeHat(EHatType NewHatType)
{
	FSoftObjectPath HatMeshToLoad = GetHatMeshReferenceFromType(NewHatType);
	LoadAndSetSkeletalMesh(HatComponent, HatMeshToLoad);
}
void ADIY_MainPlayer::PicUpDetectedItem(AActor* inActor,FName SocketName)
{
	if (!PickUpedActor)
	{
		if (inActor)
		{
			// 这里可以执行你想要的处理，比如播放拾取动画、添加到背包等
			// 传递拾取者的指针和被关联的 socket 名称给 OnPickUp 函数
			ADIY_ItemBase* ItemBase = Cast<ADIY_ItemBase>(inActor);
			if (ItemBase)
			{
				ItemBase->OnPickUp(this, SocketName);
				PickUpedActor = inActor;
			}

			// 在这个例子中，简单地隐藏被拾取的物体
			//InItem->SetActorHiddenInGame(true);
		}
	}
	
}
void ADIY_MainPlayer::PlacePickedUpItem()
{
	if (PickUpedActor)
	{
		ADIY_ItemBase* ItemBase = Cast<ADIY_ItemBase>(PickUpedActor);
		if (ItemBase)
		{
			ItemBase->OnPlaced();
			PickUpedActor = nullptr;
		}
		
	}
}
void ADIY_MainPlayer::LoadAndSetSkeletalMesh(USkeletalMeshComponent* Component, const FSoftObjectPath& AssetToLoad)
{
	if (Component && AssetToLoad.IsValid())
	{
		FStreamableManager& StreamableManager = UAssetManager::GetStreamableManager();
		StreamableManager.RequestAsyncLoad(AssetToLoad, FStreamableDelegate::CreateUObject(this, &ADIY_MainPlayer::OnMeshLoaded, Component, AssetToLoad));
	}
}

void ADIY_MainPlayer::OnMeshLoaded(USkeletalMeshComponent* Component, FSoftObjectPath AssetLoaded)
{
	if (Component)
	{
		USkeletalMesh* LoadedMesh = Cast<USkeletalMesh>(AssetLoaded.TryLoad());
		if (LoadedMesh)
		{
			Component->SetSkeletalMesh(LoadedMesh);
		}
	}
}

FSoftObjectPath ADIY_MainPlayer::GetHairMeshReferenceFromType(EHairType HairType)
{
	const FSoftObjectPath* MeshReference = HairMeshesMap.Find(HairType);
	return MeshReference ? *MeshReference : FSoftObjectPath();
}

FSoftObjectPath ADIY_MainPlayer::GetHatMeshReferenceFromType(EHatType HatType)
{
	const FSoftObjectPath* MeshReference = HatMeshesMap.Find(HatType);
	return MeshReference ? *MeshReference : FSoftObjectPath();
}