#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "../DIY_MainPet_Defines.h"
#include "DIY_PetRoutineAsset.generated.h"

/**
 * UDIY_PetRoutineAsset: 宠物行为/任务配置资源
 * 引擎类型标识: "Routine"
 */
UCLASS(BlueprintType)
class AROUNDME_API UDIY_PetRoutineAsset : public UPrimaryDataAsset
{
    GENERATED_BODY()

public:
    // --- 身份标识 ---

    /** 自动维护的引擎内部 ID */
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Identity")
    FPrimaryAssetId SavedAssetID;

    // --- 核心配置 ---

    /** 具体的吸引力计算参数、影响量、时段配置 */
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "RoutineConfiguration")
    FDIY_RoutineConfig RoutineConfig;

    /** 表现层关联: 执行该 Routine 时可能需要的动画 */
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Visual")
    TSoftObjectPtr<UAnimSequence> RoutineAnimation;

    // --- 引擎函数重写 ---

    virtual FPrimaryAssetId GetPrimaryAssetId() const override
    {
        // 告诉引擎这是一个 "Routine" 类型的资源
        return FPrimaryAssetId("Routine", GetFName());
    }

#if WITH_EDITOR
    virtual void PostLoad() override
    {
        Super::PostLoad();
        SavedAssetID = GetPrimaryAssetId();
        // 编辑器下强制同步 Tag 到结构体内部，减少出错
    }

    virtual void PostEditChangeProperty(FPropertyChangedEvent &PropertyChangedEvent) override
    {
        Super::PostEditChangeProperty(PropertyChangedEvent);
        SavedAssetID = GetPrimaryAssetId();
    }
#endif
};