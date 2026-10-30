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
