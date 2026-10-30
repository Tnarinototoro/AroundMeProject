// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "DIY_PaperLayerTypes.generated.h"

class UPaperFlipbook;
class UDIY_EquipmentVisualData;

/** Logical slot a layer is worn in. Body owns the canonical animation clock. */
UENUM(BlueprintType)
enum class EDIY_EquipSlot : uint8
{
	Head		UMETA(DisplayName = "Head"),
	Torso		UMETA(DisplayName = "Torso"),
	LeftArm		UMETA(DisplayName = "Left Arm"),
	RightArm	UMETA(DisplayName = "Right Arm"),
	Legs		UMETA(DisplayName = "Legs"),
	Shirt		UMETA(DisplayName = "Shirt"),
	Hat			UMETA(DisplayName = "Hat"),
	Shoes		UMETA(DisplayName = "Shoes"),

	Count		UMETA(Hidden)
};

/** Facing direction of a layer set. Only Front is authored by the PoC assets; the rest is future work. */
UENUM(BlueprintType)
enum class EDIY_Facing : uint8
{
	Front	UMETA(DisplayName = "Front"),
	Back	UMETA(DisplayName = "Back"),
	Left	UMETA(DisplayName = "Left"),
	Right	UMETA(DisplayName = "Right")
};

/** One (state, facing) -> flipbook mapping inside an equipment data asset. */
USTRUCT(BlueprintType)
struct FDIY_FlipbookEntry
{
	GENERATED_BODY()

	/** Animation state name, e.g. Walk / Idle. Must match across every slot. */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Paper Layers")
	FName State = NAME_None;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Paper Layers")
	EDIY_Facing Facing = EDIY_Facing::Front;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Paper Layers")
	TObjectPtr<UPaperFlipbook> Flipbook = nullptr;
};

/** Slot / component pair registered on the sync component. */
USTRUCT(BlueprintType)
struct FDIY_LayerBinding
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Paper Layers")
	EDIY_EquipSlot Slot = EDIY_EquipSlot::Torso;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Paper Layers")
	TObjectPtr<class UPaperFlipbookComponent> Component = nullptr;
};

/** Default loadout entry used by the character. */
USTRUCT(BlueprintType)
struct FDIY_DefaultEquipment
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Paper Layers")
	EDIY_EquipSlot Slot = EDIY_EquipSlot::Torso;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Paper Layers")
	TObjectPtr<UDIY_EquipmentVisualData> Visual = nullptr;
};

