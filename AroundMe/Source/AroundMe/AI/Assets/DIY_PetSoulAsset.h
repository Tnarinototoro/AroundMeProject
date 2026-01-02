#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "../DIY_MainPet_Defines.h"
#include "DIY_PetSoulAsset.generated.h"

/**
 * UDIY_PetSoulAsset: 宠物灵魂/人格模版资源
 * 引擎类型标识: "Soul"
 */
UCLASS(BlueprintType)
class AROUNDME_API UDIY_PetSoulAsset : public UPrimaryDataAsset
{
    GENERATED_BODY()

public:
    // --- 身份标识 ---

    /** 自动维护的引擎内部 ID (用于 AssetManager 加载) */
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Identity")
    FPrimaryAssetId SavedAssetID;

    /** 手动填写的辅助 ID (例如: Soul.Template.LazyCat)
     * 用于逻辑匹配、对话系统或 Debug 面板显示
     */
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Identity")
    FGameplayTag SoulTag;

    // --- 核心配置 ---

    /** 初始人格与生理配置上下文 */
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "SoulConfiguration")
    FDIY_PetSoulContext SoulContext;

    // --- 引擎函数重写 ---

    virtual FPrimaryAssetId GetPrimaryAssetId() const override
    {
        // 告诉引擎这是一个 "Soul" 类型的资源
        return FPrimaryAssetId("Soul", GetFName());
    }

#if WITH_EDITOR
    virtual void PostLoad() override
    {
        Super::PostLoad();
        SavedAssetID = GetPrimaryAssetId();
    }

    virtual void PostEditChangeProperty(FPropertyChangedEvent &PropertyChangedEvent) override
    {
        Super::PostEditChangeProperty(PropertyChangedEvent);
        SavedAssetID = GetPrimaryAssetId();
    }
#endif
};