#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "DIY_MainPlayerCameraController.generated.h"

UCLASS(ClassGroup=(Player), meta=(BlueprintSpawnableComponent))
class AROUNDME_API UDIY_MainPlayerCameraController : public USceneComponent
{
    GENERATED_BODY()

public:    
    // 设置默认值
    UDIY_MainPlayerCameraController();

protected:
    // Called when the game starts
    virtual void BeginPlay() override;

public:    
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
	FVector2D CurrentLookSpeed{};
	FVector2D TargetLookSpeed{};

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "A_DIY")
		FVector2D LookAcceleration;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "A_DIY")
		float LookSpeedInterpRate;

    // Called every frame
    virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

   




	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "A_DIY")
	class USpringArmComponent* CameraBoom;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "A_DIY")
	class UCameraComponent* FollowCamera;

	UPROPERTY(BlueprintReadWrite, //EditAnywhere,
		EditDefaultsOnly,
		Category = "A_DIY")
		float UpDownCameraLerpSpeed{ 2.0f };

	UPROPERTY(BlueprintReadWrite,
		EditDefaultsOnly,
		//EditAnywhere,
		Category = "A_DIY")
		float UpDownCameraLerpTriggerThresHold{ 1.0f };




    void HandleMouseMoveForUpDownCam(const FVector2D & Value); 


    private:


 // 获取拥有该组件的Actor
    class AController* AcquireOwnerPawnController();
    void UpdateUpDownCam(float DeltaTime);
    uint8 CurrentUpDownType{UpDownCameraType::Cam_Basic_TPS_Type};
    uint8 TargetUpDownType{UpDownCameraType::Cam_Basic_TPS_Type};
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
