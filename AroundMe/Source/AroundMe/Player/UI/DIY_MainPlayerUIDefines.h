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

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FPrimaryAssetId itemID; // 成员变量名

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 ItemCount{0}; // 注意：uint16 不支持 BlueprintReadWrite，建议改用 int32

    // 修正后的构造函数
    FDIY_BackPackItemSlotInfo(FPrimaryAssetId InID, int32 InCount = 0)
        : itemID(InID), ItemCount(InCount) // 使用成员变量名 itemID
    {
    }

    FDIY_BackPackItemSlotInfo()
        : itemID(FPrimaryAssetId()), ItemCount(0)
    {
    }
};
