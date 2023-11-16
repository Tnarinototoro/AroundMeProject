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

	UFUNCTION(BlueprintCallable, Category = "DIY")
		void ChangeHair(EHairType NewHairType);

	UFUNCTION(BlueprintCallable, Category = "DIY")
		void ChangeHat(EHatType NewHatType);
	UFUNCTION(BlueprintCallable, Category = "DIY")
		void PicUpDetectedItem(AActor* inActor,FName SocketName= FName("hand_rSocket"));
	UFUNCTION(BlueprintCallable, Category = "DIY")
		void PlacePickedUpItem();
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "DIY")
		class USpringArmComponent* CameraBoom;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "DIY")
		class UCameraComponent* FollowCamera;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "DIY")
		UInputMappingContext* MainPlayerInputMappingContext;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "DIY")
		USkeletalMeshComponent* HairComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "DIY")
		USkeletalMeshComponent* HatComponent;


	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "DIY")
	FVector2D LookAcceleration;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "DIY")
	float LookSpeedInterpRate;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "DIY")
		TMap<EHairType, FSoftObjectPath> HairMeshesMap;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "DIY")
		TMap<EHatType, FSoftObjectPath> HatMeshesMap;

	UPROPERTY(BlueprintReadWrite, //EditAnywhere,
		Category = "DIY")
	EMainPlayerActingStateType CurrentActingState{ EMainPlayerActingStateType::State_Base_Motion};
	UPROPERTY(BlueprintReadWrite, //EditAnywhere,
		Category = "DIY")
		AActor* PickUpedActor {nullptr};
	UPROPERTY(BlueprintReadOnly, //EditAnywhere,
		Category = "DIY")
	bool IsInputingMove{ false };

	void UpdateTPSCamera(float deltaTime);
	void UpdatePlayerMove(float deltaTime);
	
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

private:
	FVector2D inPutVector2D{ FVector2D::ZeroVector};
	FVector2D CurrentLookSpeed{};
	FVector2D TargetLookSpeed{};
	FVector DesiredDir_ByPlayerInput_FollowCamView{};
	

	void UpdateDesiredDir_ByPlayerInput_FollowCamView(float DeltaTime);
	
	
};
