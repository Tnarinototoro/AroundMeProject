// All rights reserved to ShadowCandle Studio

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "../Interactions/DIY_EmergentInteractDefines.h"
#include "GameplayTagContainer.h"
#include "DIY_ItemDefines.generated.h"

USTRUCT(BlueprintType)
struct FDIY_CraftingReceipt_Element
{
    GENERATED_BODY()
    UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowedTypes = "Item"))
    FPrimaryAssetId ItemID;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    uint8 CurrentItemNumReq{0};
};

USTRUCT(BlueprintType)
struct FDIY_CraftingReceipt
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int64 ReqEtherEnergyCoinNum{0};

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<FDIY_CraftingReceipt_Element> InputElements{};
};

UENUM(BlueprintType)
enum class EItemPhysicsMaterialID : uint8
{
    PhysicsMaterialID_0 UMETA(Description = "Very rough no restitution"),
    PhysicsMaterialID_1 UMETA(Description = "Rough But has Basic resitution"),
    PhysicsMaterialID_Count
};

USTRUCT(BlueprintType)
struct FDIY_ItemDefaultConfig
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    UTexture2D *ItemSlotIcon;
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float ItemMass{1.0f};
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float LinearDamping{1.0f};
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float AngualrDamping{1.0f};

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    class UPhysicalMaterial *ItemPhysicsMtl{
        nullptr};
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FDIY_TemperatureAndMoistureAttr PossibleTempAndMoistConfig;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FDIY_SolidnessAttr PossibleSolidnessConfig;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FDIY_ConductivityAttr PossibleConductivityConfig;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FGameplayTagContainer InitGameplayTags;
};

USTRUCT(BlueprintType)
struct FDIY_ItemDataTableRow : public FTableRowBase
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FDIY_ItemDefaultConfig ItemDefaultConfig;
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FSoftObjectPath ItemPath;
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FDIY_CraftingReceipt CurrentItemReceipt;
};

USTRUCT(BlueprintType)
struct FDIY_ItemStatisticInfo
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int64 ItemNumInBackPack{0};
};
DECLARE_MULTICAST_DELEGATE_OneParam(FOnItemsNumInBackPack_Changed, FPrimaryAssetId);