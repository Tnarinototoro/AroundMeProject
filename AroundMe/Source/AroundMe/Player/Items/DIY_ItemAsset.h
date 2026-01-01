// DIY_ItemAsset.h
#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "DIY_ItemDefines.h" // 包含上面的结构体
#include "DIY_ItemAsset.generated.h"

UCLASS(BlueprintType)
class UDIY_ItemAsset : public UPrimaryDataAsset
{
    GENERATED_BODY()

public:
    // --- 自动维护的 ID ---
    // 设置为 VisibleAnywhere 而不是 EditAnywhere，防止手动填错
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Identity")
    FPrimaryAssetId SavedAssetID;
    // 强制重写此函数，告诉引擎这个资产的类型是 "Item"
    virtual FPrimaryAssetId GetPrimaryAssetId() const override
    {
        return FPrimaryAssetId("Item", GetFName());
    }

    // 1. 基础配置
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "ItemConfig")
    FDIY_ItemDefaultConfig DefaultConfig;

    // 2. 逻辑/物理资源路径 (对应你之前的 FSoftObjectPath)
    // 使用 TSoftClassPtr 比 FSoftObjectPath 更安全，因为它带类型检查
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Asset")
    TSoftClassPtr<AActor> ItemActorClass;

    // 3. 合成配置
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Crafting")
    FDIY_CraftingReceipt CraftingReceipt;
#if WITH_EDITOR
    // 在编辑器中加载或修改名字后，自动同步 SavedAssetID
    virtual void PostLoad() override
    {
        Super::PostLoad();
        SavedAssetID = GetPrimaryAssetId();
    }

    virtual void PostEditChangeProperty(FPropertyChangedEvent &PropertyChangedEvent) override
    {
        Super::PostEditChangeProperty(PropertyChangedEvent);
        // 任何修改都会强制刷新 ID
        SavedAssetID = GetPrimaryAssetId();
    }
#endif
};