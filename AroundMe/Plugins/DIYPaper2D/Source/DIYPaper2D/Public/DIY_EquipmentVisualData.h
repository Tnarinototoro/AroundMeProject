// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "DIY_PaperLayerTypes.h"
#include "DIY_EquipmentVisualData.generated.h"

/**
 * One swappable visual set for a single slot. Every entry is a full-canvas
 * flipbook whose sprites all share the same canvas size and pivot.
 */
UCLASS(BlueprintType)
class DIYPAPER2D_API UDIY_EquipmentVisualData : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:
	/** Stable id used by saves / data driven loadouts. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Equipment")
	FName ItemId = NAME_None;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Equipment")
	EDIY_EquipSlot Slot = EDIY_EquipSlot::Torso;

	/** (State, Facing) -> flipbook table. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Equipment")
	TArray<FDIY_FlipbookEntry> Entries;

	/** Data contract: every sprite must be this canvas size (pixels). */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Contract")
	FIntPoint ExpectedCanvasSize = FIntPoint(256, 256);

	/** Data contract: pivot inside the canvas, in pixels (top-left origin, Y down). */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Contract")
	FVector2D ExpectedPivotPixels = FVector2D(128.0f, 224.0f);

	/** Exact match first, then a Front fallback so partially authored sets still work. */
	UFUNCTION(BlueprintPure, Category = "Paper Layers")
	UPaperFlipbook* FindFlipbook(FName State, EDIY_Facing Facing) const;

	UFUNCTION(BlueprintPure, Category = "Paper Layers")
	bool HasState(FName State) const;

	UFUNCTION(BlueprintPure, Category = "Paper Layers")
	TArray<FName> GetStates() const;

	/** Validates canvas size, pivot and uniform key frame runs. Returns false and fills OutErrors on failure. */
	bool ValidateAssets(TArray<FString>& OutErrors) const;
};

