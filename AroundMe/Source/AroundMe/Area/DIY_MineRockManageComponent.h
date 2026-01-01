// All rights reserved to ShadowCandle Studio

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "DIY_MineRockManageComponent.generated.h"

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class AROUNDME_API UDIY_MineRockManageComponent : public USceneComponent
{
    GENERATED_BODY()

public:
    // Sets default values for this component's properties
    UDIY_MineRockManageComponent();

    UFUNCTION(BlueprintCallable)
    class AActor *GetMineralRock(int32 pos_x, int32 pos_y);

    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
    int32 MineralRockArray_Dimension_X;

    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
    int32 MineralRockArray_Dimension_Y;

    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
    float MineralRockArray_Grid_Size;

    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
    FVector2D MineralRockArray_Grid_Random_Offset_Percent;

    // 关键点：使用 AllowedTypes = "Item" 限制下拉列表
    UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowedTypes = "Item"))
    FPrimaryAssetId RockItemID;

protected:
    // Called when the game starts
    virtual void BeginPlay() override;
    virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

    void GenerateMineralRocks();

    void ClearAllMineralRocks();

private:
    TArray<class AActor *> MineralRocks;

public:
    // Called every frame
    virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction) override;
};