// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DIY_PaperLayerTypes.h"
#include "DIY_FlipbookSyncComponent.generated.h"

class UPaperFlipbook;
class UPaperFlipbookComponent;
class UDIY_EquipmentVisualData;

/**
 * Drives every Paper2D layer from one accumulated clock.
 *
 * Design rules (all of them exist because of PoC failure modes):
 *  1. No layer ever calls Play(). Body is not a clock source either; every layer is a slave.
 *  2. The component seeks all layers inside one function, so tick order can never desync them.
 *  3. Seeks are written only when the frame number changes.
 *  4. Seeks use a half-frame offset, because N / Fps can read back as N-1 (float truncation).
 *  5. SetFlipbook() resets play time, so every hot swap immediately re-seeks to the current frame
 *     and clamps to the new asset's frame count.
 *  6. State / facing changes are atomic: all layers resolve first and only then get committed.
 */
UCLASS(ClassGroup = (DIY), meta = (BlueprintSpawnableComponent))
class DIYPAPER2D_API UDIY_FlipbookSyncComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UDIY_FlipbookSyncComponent();

	/** Layer bindings. Order does not matter for correctness, Body only defines the canonical clock. */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Paper Layers")
	TArray<FDIY_LayerBinding> Layers;

	/** 0 means "use the Body flipbook's FramesPerSecond". */
	UPROPERTY(EditAnywhere, Category = "Paper Layers", meta = (ClampMin = "0.0"))
	float FramesPerSecondOverride = 0.0f;

	UPROPERTY(EditAnywhere, Category = "Paper Layers")
	FName InitialState = TEXT("Walk");

	UPROPERTY(EditAnywhere, Category = "Paper Layers")
	EDIY_Facing InitialFacing = EDIY_Facing::Front;

	UPROPERTY(EditAnywhere, Category = "Paper Layers")
	bool bLogContractErrors = true;

	UFUNCTION(BlueprintCallable, Category = "Paper Layers")
	void RegisterLayer(EDIY_EquipSlot Slot, UPaperFlipbookComponent* Component);

	UFUNCTION(BlueprintCallable, Category = "Paper Layers")
	bool EquipVisual(EDIY_EquipSlot Slot, UDIY_EquipmentVisualData* Visual);

	/** Atomic state switch: either every layer has a flipbook for NewState, or nothing changes. */
	UFUNCTION(BlueprintCallable, Category = "Paper Layers")
	bool SetAnimationState(FName NewState);

	/** Atomic facing switch, keeps the current frame index (clamped per layer). */
	UFUNCTION(BlueprintCallable, Category = "Paper Layers")
	bool SetFacing(EDIY_Facing NewFacing);

	/** True when every registered layer reports the same playback frame. Used by automation tests. */
	UFUNCTION(BlueprintPure, Category = "Paper Layers")
	bool AreLayersInSync() const;

	UFUNCTION(BlueprintPure, Category = "Paper Layers")
	int32 GetLayerFrame(EDIY_EquipSlot Slot) const;

	UFUNCTION(BlueprintPure, Category = "Paper Layers")
	int32 GetCurrentFrame() const { return CurrentFrame; }

	UFUNCTION(BlueprintPure, Category = "Paper Layers")
	FName GetCurrentState() const { return CurrentState; }

	UFUNCTION(BlueprintPure, Category = "Paper Layers")
	EDIY_Facing GetCurrentFacing() const { return CurrentFacing; }

	UFUNCTION(BlueprintPure, Category = "Paper Layers")
	float GetEffectiveFPS() const;

	UFUNCTION(BlueprintPure, Category = "Paper Layers")
	int32 GetCanonicalFrameCount() const;

	UFUNCTION(BlueprintPure, Category = "Paper Layers")
	UDIY_EquipmentVisualData* GetEquippedVisual(EDIY_EquipSlot Slot) const;

	/** Deterministic clock advance. TickComponent forwards here; tests call it directly. */
	void StepAnimation(float DeltaSeconds);

	/** Validates frame counts, fps, canvas and pivot of the currently equipped set. */
	bool ValidateCurrentState(TArray<FString>& OutErrors) const;

protected:
	virtual void BeginPlay() override;
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

private:
	UPaperFlipbook* ResolveFlipbook(const FDIY_LayerBinding& Binding, FName State, EDIY_Facing Facing) const;
	void ApplyFrame(int32 Frame, bool bForce);
	int32 ComputeFrame() const;
	void ReportContractErrors() const;
	UPaperFlipbookComponent* FindLayer(EDIY_EquipSlot Slot) const;

	UPROPERTY(Transient)
	TMap<EDIY_EquipSlot, TObjectPtr<UDIY_EquipmentVisualData>> Equipped;

	double AnimationTime = 0.0;
	int32 CurrentFrame = INDEX_NONE;
	FName CurrentState = NAME_None;
	EDIY_Facing CurrentFacing = EDIY_Facing::Front;
	bool bApplyingFrame = false;
};
