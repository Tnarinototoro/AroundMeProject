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
	EItemID_Bridge_End_01,
	EItemID_Bridge_End_02,
	EItemID_Bridge_End_03,
	EItemID_Bridge_Middle_01,
	EItemID_Bridge_Middle_02,
	EItemID_Bridge_Middle_03,
	EItemID_Bush,
	EItemID_Crop_Corn_01,
	EItemID_Crop_Corn_02,
	EItemID_Crop_Corn_03, //ful harvest
	EItemID_Crop_Corn_04,
	EItemID_Crop_Lettuce_01,
	EItemID_Crop_Lettuce_02,
	EItemID_Crop_Lettuce_03,
	EItemID_Crop_Lettuce_04,
	EItemID_Crop_Pumpkin_01,
	EItemID_Crop_Pumpkin_02,
	EItemID_Crop_Pumpkin_03,
	EItemID_Crop_Pumpkin_04,
	EItemID_Crop_Wheat_01,
	EItemID_Crop_Wheat_02,
	EItemID_Crop_Wheat_03,
	EItemID_Crop_Wheat_04,
	EItemID_Plant_GrassClump_01,
	EItemID_Plant_GrassClump_02,
	EItemID_Plant_GrassClump_03,
	EItemID_Plant_GrassClump_04,
	EItemID_Building_House_01,
	EItemID_Building_House_02,
	EItemID_Building_House_03,
	EItemID_Building_House_04,
	EItemID_Building_Monument_01,
	EItemID_Building_Monument_02,
	EItemID_Building_Monument_03,
	EItemID_Building_Monument_04,
	EItemID_Building_Monument_05,
	EItemID_Building_Monument_06,
	EItemID_Plant_Shrub_01,
	EItemID_Plant_Shrub_02,
	EItemID_Mineral_Stone_01,
	EItemID_Mineral_Stone_02,
	EItemID_Mineral_Stone_03,
	EItemID_Building_TownHall,
	EItemID_Plant_Stone_Tree_01,
	EItemID_Plant_Stone_Tree_02,
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