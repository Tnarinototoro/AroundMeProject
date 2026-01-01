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
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Hatcher", meta = (AllowedTypes = "Item"))
    FPrimaryAssetId ItemIDToSpawn;

    virtual void BeginPlay() override;

#if WITH_EDITORONLY_DATA
    UPROPERTY(Transient)
    AActor *PreviewActorPtr;

    FPrimaryAssetId LastPreviewID;
#endif

#if WITH_EDITOR
    // 允许 Tick 必须不然 没办法editor tick
    virtual bool ShouldTickIfViewportsOnly() const override { return true; }
    virtual void Tick(float DeltaTime) override;
    // 增加构造脚本保底，确保拖入瞬间或加载瞬间触发一次
    virtual void OnConstruction(const FTransform &Transform) override;
#endif

private:
#if WITH_EDITOR
    void RefreshPreview();
    void ClearPreview();
#endif
};