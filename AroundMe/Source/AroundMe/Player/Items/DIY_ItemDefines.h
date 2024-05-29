// All rights reserved to ShadowCandle Studio

#pragma once

#include "../Interactions/DIY_EmergentInteractDefines.h"
#include "CoreMinimal.h"
#include "Engine/DataTable.h"


#include "DIY_ItemDefines.generated.h"


UENUM(BlueprintType) 
enum class EItemID : uint8 
{
    EItemID_ButterFlyNet,
    EItemID_PickAxe,
    EItemID_FishingPod,
    EItemID_WoodCuttingAxe,
    EItemID_PokeBall,
    EItemID_Shovel,
    EItemID_PaperBird,
    EItemID_Trick_Cutter,
    EItemID_DIY_Crafting_ITemPlatform,
    EItemID_Consume_Garbage,
    EItemID_Consume_WithName,
    EItemID_Count
};

UENUM(BlueprintType)
enum class EItemPhysicsMaterialID : uint8
{
    PhysicsMaterialID_0 UMETA(Description = "Very rough no restitution"),
    PhysicsMaterialID_1 UMETA(Description = "Rough But has Basic resitution"),
    PhysicsMaterialID_Count
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
  float ItemMass{ 1.0f };
  UPROPERTY(EditAnywhere, BlueprintReadWrite)
      float LinearDamping{ 1.0f };
  UPROPERTY(EditAnywhere, BlueprintReadWrite)
      float AngualrDamping{ 1.0f };

  UPROPERTY(EditAnywhere, BlueprintReadWrite)
      class  UPhysicalMaterial* ItemPhysicsMtl
  {
      nullptr
  };

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
