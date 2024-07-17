#pragma once
#include "CoreMinimal.h"
#include "../Items/DIY_ItemDefines.h"
#include "DIY_MainPlayerUIDefines.generated.h"

UENUM(BlueprintType)
enum class EMainPlayerUISectionID : uint8
{
    BackPack,
    DailyActivity,
    PlatformService,
    MusicPlayerState,
    ItemCraftingPlatform,
    EMainPlayerUISectionID_Count
};

USTRUCT(BlueprintType)
struct FDIY_BackPackItemSlotInfo
{

    GENERATED_BODY()
    // attribute
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    EItemID itemID{EItemID::EItemID_Count};

    uint16 ItemCount{0};

    FDIY_BackPackItemSlotInfo(EItemID inItemID, uint16 inItemCount = 0) : itemID(inItemID), ItemCount(inItemCount) {}

    FDIY_BackPackItemSlotInfo() {}
};
