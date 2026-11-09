// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "PaperCharacter.h"
#include "DIY_PaperLayerTypes.h"
#include "DIY_AnimalPaperCharacter.generated.h"

class UPaperFlipbookComponent;
class UDIY_FlipbookSyncComponent;
class UDIY_EquipmentVisualData;
class UCameraComponent;
class UMaterialInterface;
class UInputAction;
class UInputMappingContext;
struct FInputActionValue;

/**
 * Single-sprite animal test character (Dog / Bird).
 * Three-view art is mapped to Front / Right / Left / Back; movement, facing, follow camera and
 * mouse-wheel zoom behave like the layered humanoid, but there is only one body layer.
 * Tab swaps between the animals.
 */
UCLASS()
class DIYPAPER2D_API ADIY_AnimalPaperCharacter : public APaperCharacter
{
	GENERATED_BODY()

public:
	ADIY_AnimalPaperCharacter();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Animal")
	TObjectPtr<UDIY_FlipbookSyncComponent> SyncComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Animal")
	TObjectPtr<UPaperFlipbookComponent> BodyLayer;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Animal")
	TObjectPtr<UCameraComponent> PoCCamera;

	UPROPERTY(EditAnywhere, Category = "Movement")
	float WalkSpeed = 300.0f;

	UPROPERTY(EditAnywhere, Category = "Movement")
	float RunSpeed = 650.0f;

	UPROPERTY(EditAnywhere, Category = "Movement")
	float MovingSpeedThreshold = 20.0f;

	UPROPERTY(EditAnywhere, Category = "Movement")
	float StageHalfWidth = 330.0f;

	UPROPERTY(EditAnywhere, Category = "Movement")
	float StageMinY = -140.0f;

	UPROPERTY(EditAnywhere, Category = "Movement")
	float StageMaxY = 280.0f;

	/** 相机到角色的距离（厘米）。滑轮调整，范围见 Min/MaxCameraDistance。 */
	UPROPERTY(EditAnywhere, Category = "Camera", meta = (ClampMin = "0.0"))
	float CameraDistance = 920.0f;

	/** 每格滑轮改变的距离（厘米）。 */
	UPROPERTY(EditAnywhere, Category = "Camera", meta = (ClampMin = "1.0"))
	float CameraZoomStep = 500.0f;

	UPROPERTY(EditAnywhere, Category = "Camera", meta = (ClampMin = "0.0"))
	float MinCameraDistance = 0.0f;

	UPROPERTY(EditAnywhere, Category = "Camera", meta = (ClampMin = "0.0"))
	float MaxCameraDistance = 10000.0f;

	/** 正交宽度 = 距离 × 该系数，让拉远时真的能看到更大范围。 */
	UPROPERTY(EditAnywhere, Category = "Camera", meta = (ClampMin = "0.0001"))
	float OrthoWidthPerUnit = 0.6745f;

	UPROPERTY(EditAnywhere, Category = "Animation")
	FName IdleState = TEXT("Idle");

	UPROPERTY(EditAnywhere, Category = "Animation")
	FName WalkState = TEXT("Walk");

	UPROPERTY(EditAnywhere, Category = "Animation")
	FName RunState = TEXT("Run");

	UFUNCTION(BlueprintCallable, Category = "Animal")
	void CycleAnimal();

	UFUNCTION(BlueprintCallable, Category = "Animal")
	void SelectDog();

	UFUNCTION(BlueprintCallable, Category = "Animal")
	void SelectBird();

	UFUNCTION(BlueprintCallable, Category = "Animal")
	void SetAnimal(int32 Index);

	virtual void Tick(float DeltaSeconds) override;

protected:
	virtual void BeginPlay() override;
	virtual void SetupPlayerInputComponent(UInputComponent* PlayerInputComponent) override;

private:
	void InputW(float Value);
	void InputS(float Value);
	void InputA(float Value);
	void InputD(float Value);
	void InputSprintPressed();
	void InputSprintReleased();
	void InputZoom(float Value);
	void InputZoomIn();
	void InputZoomOut();
	void OnZoomTriggered(const FInputActionValue& Value);
	void ApplyCameraDistance();
	void UpdateMovementAndAnimation(float DeltaSeconds);

	UPROPERTY(Transient)
	TArray<TObjectPtr<UDIY_EquipmentVisualData>> Animals;

	UPROPERTY(Transient)
	TObjectPtr<UMaterialInterface> UnlitMaterial;

	UPROPERTY(Transient)
	TObjectPtr<UInputAction> ZoomAction;

	UPROPERTY(Transient)
	TObjectPtr<UInputMappingContext> ZoomMappingContext;

	int32 CurrentAnimalIndex = 0;
	bool bSprintHeld = false;
	bool bViewTargetSet = false;

	float InputForward = 0.0f;
	float InputBackward = 0.0f;
	float InputRight = 0.0f;
	float InputLeft = 0.0f;
};
