// All rights reserved to ShadowCandle Studio

#pragma once

#include "CoreMinimal.h"
#include "PaperZDCharacter.h"
#include "HD2DPaperCharacter.generated.h"

class UCameraComponent;
class UInputAction;
class UInputMappingContext;
class UPaperZDAnimInstance;
struct FInputActionValue;

/**
 * HD-2D 试验用角色：完全走 PaperZD 官方链路（PaperZDCharacter + AnimationComponent + AnimBP），
 * 这里只补充移动、45 度透视相机和滚轮变距，不参与任何动画计算。
 */
UCLASS()
class AROUNDME_API AHD2DPaperCharacter : public APaperZDCharacter
{
	GENERATED_BODY()

public:
	AHD2DPaperCharacter();

	/** 45 度俯视透视相机。 */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "HD2D|Camera")
	TObjectPtr<UCameraComponent> PoCCamera;

	/** 用哪张 PaperZD AnimBP 驱动。留空则使用 AnimationComponent 上配置的类。 */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "HD2D|PaperZD")
	TSubclassOf<UPaperZDAnimInstance> AnimClass;

	UPROPERTY(EditAnywhere, Category = "HD2D|Movement")
	float WalkSpeed = 300.0f;

	/** 相机到角色的距离（厘米）。 */
	UPROPERTY(EditAnywhere, Category = "HD2D|Camera", meta = (ClampMin = "0.0"))
	float CameraDistance = 920.0f;

	/** 每格滚轮改变的距离（厘米）。 */
	UPROPERTY(EditAnywhere, Category = "HD2D|Camera", meta = (ClampMin = "1.0"))
	float CameraZoomStep = 500.0f;

	UPROPERTY(EditAnywhere, Category = "HD2D|Camera", meta = (ClampMin = "0.0"))
	float MinCameraDistance = 200.0f;

	UPROPERTY(EditAnywhere, Category = "HD2D|Camera", meta = (ClampMin = "0.0"))
	float MaxCameraDistance = 4000.0f;

	UPROPERTY(EditAnywhere, Category = "HD2D|Camera")
	float CameraPitch = -45.0f;

	UPROPERTY(EditAnywhere, Category = "HD2D|Camera")
	float CameraYaw = 90.0f;

	UPROPERTY(EditAnywhere, Category = "HD2D|Camera", meta = (ClampMin = "1.0", ClampMax = "170.0"))
	float CameraFOV = 35.0f;

	virtual void Tick(float DeltaSeconds) override;

protected:
	virtual void BeginPlay() override;
	virtual void PostInitializeComponents() override;
	virtual void SetupPlayerInputComponent(UInputComponent* PlayerInputComponent) override;

private:
	void InputW(float Value);
	void InputS(float Value);
	void InputA(float Value);
	void InputD(float Value);
	void OnZoomTriggered(const FInputActionValue& Value);
	void ApplyCameraDistance();

	UPROPERTY(Transient)
	TObjectPtr<UInputAction> ZoomAction;

	UPROPERTY(Transient)
	TObjectPtr<UInputMappingContext> ZoomMappingContext;

	float InputForward = 0.0f;
	float InputBackward = 0.0f;
	float InputRight = 0.0f;
	float InputLeft = 0.0f;
};
