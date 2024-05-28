// All rights reserved to ShadowCandle Studio

#pragma once

#include "../Interactions/DIY_EmergentInteractDefines.h"
#include "CoreMinimal.h"
#include "Engine/DataTable.h"


#include "DIY_ItemDefines.generated.h"

    UENUM(BlueprintType) enum class EItemID : uint8 
	{
      EItemID_ButterFlyNet,
      EItemID_PickAxe,
      EItemID_FishingPod,
      EItemID_WoodCuttingAxe,
      EItemID_PokeBall,
      EItemID_Shovel,
      EItemID_PaperBird,
      EItemID_Trick_Mover_01, // one way mover
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
      EItemID_Trick_Cutter,
      EItemID_DIY_Crafting_ITemPlatform,
      EItemID_Consume_Garbage,
      EItemID_Consume_WithName,
      EItemID_Count

    };


USTRUCT(BlueprintType)
struct FDIY_ItemDefualtConfig
{
  GENERATED_BODY()

  UPROPERTY(EditAnywhere, BlueprintReadWrite)
  EItemID ItemID;
  UPROPERTY(EditAnywhere, BlueprintReadWrite)
  int RequiredGarbageDeviceResource{999};
  UPROPERTY(EditAnywhere, BlueprintReadWrite)
  int RequiredWithNameDeviceResource{999};

  UPROPERTY(EditAnywhere, BlueprintReadWrite)
  float ObjectMass{ 1.0f };
  UPROPERTY(EditAnywhere, BlueprintReadWrite)
  TArray<EDIY_InteractItemFlag> ConfiguredFlags;

};

USTRUCT(BlueprintType) struct FDIY_ItemDataTableRow : public FTableRowBase 
{
  GENERATED_BODY()

  UPROPERTY(EditAnywhere, BlueprintReadWrite)
  FDIY_ItemDefualtConfig ItemDefualtConfig;
  UPROPERTY(EditAnywhere, BlueprintReadWrite) 
  FSoftObjectPath ItemPath;
};
