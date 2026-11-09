// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "PaperCharacter.h"
#include "DIY_PaperLayerTypes.h"
#include "DIY_LayeredPaperCharacter.generated.h"

class UPaperFlipbookComponent;
class UDIY_FlipbookSyncComponent;
class UDIY_EquipmentVisualData;
class UCameraComponent;
class UMaterialInterface;
class ACameraActor;

/**
 * PoC character: a humanoid split into five independently animated body-part layers
 * (Head / Torso / LeftArm / RightArm / Legs) plus three equipment overlays
 * (Shirt / Hat / Shoes). All eight are full-canvas 256x256 Paper2D layers driven by one clock.
 *
 * Movement is front-facing 2.5D: W/S move in depth (Y), A/D move sideways (X), Shift sprints.
 */
UCLASS()
class DIYPAPER2D_API ADIY_LayeredPaperCharacter : public APaperCharacter
{
	GENERATED_BODY()

public:
	ADIY_LayeredPaperCharacter();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Paper Layers")
	TObjectPtr<UDIY_FlipbookSyncComponent> SyncComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Paper Layers")
	TObjectPtr<UPaperFlipbookComponent> HeadLayer;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Paper Layers")
	TObjectPtr<UPaperFlipbookComponent> TorsoLayer;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Paper Layers")
	TObjectPtr<UPaperFlipbookComponent> LeftArmLayer;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Paper Layers")
	TObjectPtr<UPaperFlipbookComponent> RightArmLayer;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Paper Layers")
	TObjectPtr<UPaperFlipbookComponent> LegsLayer;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Paper Layers")
	TObjectPtr<UPaperFlipbookComponent> ShirtLayer;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Paper Layers")
	TObjectPtr<UPaperFlipbookComponent> HatLayer;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Paper Layers")
	TObjectPtr<UPaperFlipbookComponent> ShoesLayer;

	/** Fallback camera used only if the level has no ACameraActor tagged PoCCamera. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Paper Layers")
	TObjectPtr<UCameraComponent> PoCCamera;

	/** Loadout applied on BeginPlay. Assets shipped with the plugin fill these by default. */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Paper Layers")
	TArray<FDIY_DefaultEquipment> DefaultEquipment;

	/** Hat variants cycled with Space. */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Paper Layers")
	TArray<TObjectPtr<UDIY_EquipmentVisualData>> HatVariants;

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

	UFUNCTION(BlueprintCallable, Category = "Paper Layers")
	bool EquipSlot(EDIY_EquipSlot Slot, UDIY_EquipmentVisualData* Visual);

	UFUNCTION(BlueprintCallable, Category = "Paper Layers")
	bool SetAnimationState(FName State);

	UFUNCTION(BlueprintCallable, Category = "Paper Layers")
	bool SetFacing(EDIY_Facing Facing);

	UFUNCTION(BlueprintCallable, Category = "Paper Layers")
	void CycleHat();

	UFUNCTION(BlueprintCallable, Category = "Paper Layers")
	void ToggleIdleWalk();

	/** Switches all layers between the unlit (crisp) and lit (normal-mapped) sprite materials. */
	UFUNCTION(BlueprintCallable, Category = "Paper Layers")
	void SetLitMode(bool bLit);

	UFUNCTION(BlueprintCallable, Category = "Paper Layers")
	void ToggleLitMode();

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
	void ApplyCameraDistance();

	void UpdateMovementAndAnimation(float DeltaSeconds);
	UPaperFlipbookComponent* CreatePaperLayer(FName Name);
	void RegisterLayers();

	UPROPERTY(Transient)
	TObjectPtr<UMaterialInterface> UnlitMaterial;

	UPROPERTY(Transient)
	TObjectPtr<UMaterialInterface> LitMaterial;

	int32 CurrentHatIndex = 0;
	bool bLitMode = false;
	bool bSprintHeld = false;
	bool bCameraFocused = false;
	bool bViewTargetSet = false;
	TWeakObjectPtr<ACameraActor> FixedCameraActor;

	float InputForward = 0.0f;
	float InputBackward = 0.0f;
	float InputRight = 0.0f;
	float InputLeft = 0.0f;
};
