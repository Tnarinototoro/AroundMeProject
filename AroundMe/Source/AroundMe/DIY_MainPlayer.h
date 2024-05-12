// All rights reserved to ShadowCandle Studio

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "EnhancedPlayerInput.h"
#include "DIYEquipmentEnums.h"
#include "GameFramework/Character.h"
#include "UObject/SoftObjectPath.h"
#include "DIY_MainPlayer.generated.h"

DECLARE_LOG_CATEGORY_EXTERN(MainPlayerLog, Log, All);

UENUM(BlueprintType)
enum class EInputActionType : uint8
{
	Look_Action UMETA(DisplayName = "Look_Action"),
	Move_Action UMETA(DisplayName = "Move_Action"),
	Jump_Action UMETA(DisplayName = "Jump_Action"),
	Action_Count
};

UENUM(BlueprintType)
enum class EMainPlayerActingStateType : uint8
{
	State_Base_Motion,
	State_Building,
	State_Carrying,
	State_Farming,
	State_Gathering,
	State_Mining,
	State_PickingUp,
	State_WoodChopping,
	ActingState_Count
};

UCLASS()
class AROUNDME_API ADIY_MainPlayer : public ACharacter
{
	GENERATED_BODY()

private:

public:
	// Sets default values for this pawn's properties
	ADIY_MainPlayer();




protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void PawnClientRestart() override;
	void LoadAndSetSkeletalMesh(USkeletalMeshComponent* Component, const FSoftObjectPath& AssetToLoad);
	void OnMeshLoaded(USkeletalMeshComponent* Component, FSoftObjectPath AssetPath);
	FSoftObjectPath GetHairMeshReferenceFromType(EHairType HairType);
	FSoftObjectPath GetHatMeshReferenceFromType(EHatType HatType);

	UFUNCTION()
		void HandleXYMouseMove(const FInputActionValue& Value);

	UFUNCTION()
		void HandleXYPlayerMove(const FInputActionValue& Value);
	UFUNCTION()
		void HandlePlayerJump(const FInputActionValue& Value);
	UFUNCTION()
		void HandleXYPlayerMoveInputFinished(const FInputActionValue& Value);

	UFUNCTION(BlueprintCallable, Category = "A_DIY")
		void ChangeHair(EHairType NewHairType);

	UFUNCTION(BlueprintCallable, Category = "A_DIY")
		void ChangeHat(EHatType NewHatType);
	UFUNCTION(BlueprintCallable, Category = "A_DIY")
		void PicUpDetectedItem(AActor* inActor, FName SocketName = FName("hand_rSocket"));
	UFUNCTION(BlueprintCallable, Category = "A_DIY")
		void PlacePickedUpItem();
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "A_DIY")
		class USpringArmComponent* CameraBoom;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "A_DIY")
		class UCameraComponent* FollowCamera;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "A_DIY")
		UInputMappingContext* MainPlayerInputMappingContext;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "A_DIY")
		USkeletalMeshComponent* HairComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "A_DIY")
		USkeletalMeshComponent* HatComponent;


	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "A_DIY")
		FVector2D LookAcceleration;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "A_DIY")
		float LookSpeedInterpRate;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "A_DIY")
		TMap<EHairType, FSoftObjectPath> HairMeshesMap;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "A_DIY")
		TMap<EHatType, FSoftObjectPath> HatMeshesMap;

	UPROPERTY(BlueprintReadWrite, //EditAnywhere,
		Category = "A_DIY")
		EMainPlayerActingStateType CurrentActingState {
		EMainPlayerActingStateType::State_Base_Motion
	};
	UPROPERTY(BlueprintReadWrite, //EditAnywhere,
		Category = "A_DIY")
		AActor* PickUpedActor {
		nullptr
	};
	UPROPERTY(BlueprintReadOnly, //EditAnywhere,
		Category = "A_DIY")
		bool IsInputingMove{ false };

	UPROPERTY(BlueprintReadWrite, //EditAnywhere,
		EditDefaultsOnly,
		Category = "A_DIY")
		float UpDownCameraLerpSpeed{ 2.0f };

	UPROPERTY(BlueprintReadWrite,
		EditDefaultsOnly,
		//EditAnywhere,
		Category = "A_DIY")
		float UpDownCameraLerpTriggerThresHold{ 1.0f };

	void UpdateTPSCamera(float deltaTime);
	void UpdatePlayerMove(float deltaTime);

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	void UpdateUpDownCam(float DeltaTime);
private:

	enum UpDownCameraType
	{
		//pitch around 359
		Cam_Horizon_Type,
		//pitch around 320
		Cam_Basic_TPS_Type,

		//pitch around 290
		Cam_Flying_Type,

		Type_Count
	};
	FVector2D inPutVector2D{ FVector2D::ZeroVector };
	FVector2D CurrentLookSpeed{};
	FVector2D TargetLookSpeed{};
	FVector DesiredDir_ByPlayerInput_FollowCamView{};
	
	uint8 CurrentUpDownType{ UpDownCameraType::Cam_Basic_TPS_Type };
	uint8 TargetUpDownType{ UpDownCameraType::Cam_Basic_TPS_Type };
	void UpdateDesiredDir_ByPlayerInput_FollowCamView(float DeltaTime);
	float UpDownCamPitchDepo[UpDownCameraType::Type_Count]{ 359.0f,340.0f,320.f };
	float UpDownCamFOVDepo[UpDownCameraType::Type_Count]
	{
		//Cam_Horizon_Type
		100.0f,
		//Cam_Basic_TPS_Type
		70.0f,
		//Cam_Flying_Type
		65.0f
	};

	float UpDownCamSpringLengthDepo[UpDownCameraType::Type_Count]
	{
		//Cam_Horizon_Type
		400.0f,
		//Cam_Basic_TPS_Type
		500.0f,
		//Cam_Flying_Type
		1000.0f
	};
	
};
