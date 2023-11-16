// All rights reserved to ShadowCandle Studio

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "DIY_ItemDefines.generated.h"

UENUM(BlueprintType)
enum class EItemID : uint8
{
	EItemID_Axe,
	EItemID_Basket,
	EItemID_Crate,
	EItemID_Hammer,
	EItemID_Hoe,
	EItemID_PickAxe,
	EItemID_PaperBird,
	EItemID_Trick_Mover_01,  //one way mover
	EItemID_Trick_Rotator_01,
	EitemID_Trick_ItemVomitter,
	EItemID_Bridge_End,
	EItemID_Bridge_Middle,
	EItemID_Bush,
	EItemID_Crop_Corn,
	EItemID_Crop_Lettuce,
	EItemID_Crop_Pumpkin,
	EItemID_Crop_Wheat,
	EItemID_Plant_GrassClump,
	EItemID_Building_House,
	EItemID_Building_Monument,
	EItemID_Plant_Shrub_01_WhiteFlower,
	EItemID_Plant_Shrub_02_RedFruits,
	EItemID_Mineral_Stone_01,
	EItemID_Mineral_Stone_02,
	EItemID_Mineral_Stone_03,
	EItemID_Building_TownHall,
	EItemID_Plant_Stone_Tree_01,
	EItemID_Plant_Stone_Tree_02,
	EitemID_Trick_Cutter,
	EitemID_DIY_Crafting_ITemPlatform,
	EItemID_Count
	// ¶¨ÒåÄãµÄitems
};


USTRUCT(BlueprintType)
struct FDIY_ItemDataTableRow : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		EItemID ItemID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FSoftObjectPath ItemPath;
};