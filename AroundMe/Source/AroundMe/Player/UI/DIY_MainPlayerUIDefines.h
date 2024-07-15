#pragma once
#include "CoreMinimal.h"
#include "../Items/DIY_ItemDefines.h"
#include "DIY_MainPlayerUIDefines.generated.h"

UENUM(BlueprintType)
enum class EMainPlayerUISectionID : uint8
{
    BackPack,
    DailyActivity,
    EMainPlayerUISectionID_Count
};

USTRUCT(BlueprintType)
struct FDIY_BackPackItemSlotInfo
{

    GENERATED_BODY()
    // attribute
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    EItemID itemID{EItemID::EItemID_Count};

    uint8 RowIndex{0};

    uint8 ColIndex{0};

    uint16 ItemCount{0};

    FDIY_BackPackItemSlotInfo(EItemID inItemID, uint8 inRowIndex, uint8 inColIndex, uint16 inItemCount = 0) : itemID(inItemID), RowIndex(inRowIndex), ColIndex(inColIndex), ItemCount(inItemCount) {}

    FDIY_BackPackItemSlotInfo() {}
};
