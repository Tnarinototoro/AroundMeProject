#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DIY_ItemHatcher.generated.h"

UCLASS()
class AROUNDME_API ADIY_ItemHatcher : public AActor
{
    GENERATED_BODY()

public:
    ADIY_ItemHatcher();

protected:
    /** 只需要指定这个 ID 即可自动预览 */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Hatcher", meta = (AllowedTypes = "Item"))
    FPrimaryAssetId ItemIDToSpawn;

    virtual void BeginPlay() override;

// UHT 允许使用 WITH_EDITORONLY_DATA 来包裹 UPROPERTY
#if WITH_EDITORONLY_DATA
    /** 存储编辑器中的预览 Actor 引用 */
    UPROPERTY(Transient)
    AActor *PreviewActorPtr;

    /** 记录上次的 ID，避免移动位置时重复触发加载 */
    FPrimaryAssetId LastPreviewID;
#endif

#if WITH_EDITOR
    // 函数依然可以使用 WITH_EDITOR
    virtual void OnConstruction(const FTransform &Transform) override;
    virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

    // 新增：处理关卡加载后的逻辑
    virtual void PostLoad() override;
    // 新增：处理拖入场景后的逻辑
    virtual void PostActorCreated() override;

private:
    void RefreshPreviewActor();
    void ClearPreviewActor();
#endif
};