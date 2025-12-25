#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "DIY_CameraDefines.h"
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
	
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

	UFUNCTION()
	void OnCameraInUseChanged(class AActor* NewCameraActor);
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

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "DIY_MainPlayerCameraController")
		FVector2D LookAcceleration;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "DIY_MainPlayerCameraController")
		float LookSpeedInterpRate;

    // Called every frame
    virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

   




	UPROPERTY( BlueprintReadOnly, EditDefaultsOnly, Category = "DIY_MainPlayerCameraController")
	class USpringArmComponent* CameraBoom;

	UPROPERTY(BlueprintReadOnly,EditDefaultsOnly, Category = "DIY_MainPlayerCameraController")
	class UCameraComponent* FollowCamera;

	UPROPERTY(BlueprintReadWrite,EditDefaultsOnly,Category = "DIY_MainPlayerCameraController")
	float UpDownCameraLerpSpeed{ 2.0f };

	UPROPERTY(BlueprintReadWrite,EditDefaultsOnly,Category = "DIY_MainPlayerCameraController")
	float UpDownCameraLerpTriggerThresHold{ 1.0f };


	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDIY_CameraEntry PlayerCameraEntry;

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
		200.0f,
		//Cam_Basic_TPS_Type
		300.0f,
		//Cam_Flying_Type
		600.0f
	};


};
