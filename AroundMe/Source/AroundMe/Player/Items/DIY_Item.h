// All rights reserved to ShadowCandle Studio

#pragma once

#include "CoreMinimal.h"

#include "DIY_ItemDefines.h"
#include "DIY_ItemManagerDefines.h"
#include "../Interactions/DIY_TagInterface.h"
#include "DIY_Item.generated.h"
/**
 *
 */

UCLASS()
class AROUNDME_API ADIY_ItemBase : public AActor, public IDIY_TagInterface
{
    GENERATED_BODY()
private:
    FTimerHandle TimerHandle_HighLight;
    bool isEnabledHighLighting{false};

protected:
    // Called when the game starts or when spawned
    virtual void BeginPlay() override;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "DIY_ItemBase")
    class UStaticMeshComponent *BasicStaticMeshComponent;

    void UpdateHighLight();

public:
    ADIY_ItemBase();
    ~ADIY_ItemBase();
    // Called every frame
    virtual void Tick(float DeltaTime) override;

    UFUNCTION(BlueprintCallable, Category = "DIY_ItemBase")
    void ResumeTrinkling();
    UFUNCTION(BlueprintCallable, Category = "DIY_ItemBase")
    void PauseTrinkling();

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "DIY_ItemBase")
    int32 HighLightColor{3};

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "DIY_ItemBase")
    float HighLightColorTranklingInterval{1.0f};

    void InitItem(FPrimaryAssetId inItemID);

    UFUNCTION(BlueprintCallable, Category = "DIY_ItemBase")
    FPrimaryAssetId GetItemID() const { return ItemID; }

    // force override means to force change to target state and execute the first execution event equal to current state
    bool SwitchCycleState(EItemLifeCycleState targetState, bool ForceOverride = false);

    const FDIY_ItemDefaultConfig *GetItemDefaultConfig();

    UFUNCTION(BlueprintCallable, Category = "TagInterface")
    virtual const FGameplayTagContainer &GetOwnedGameplayTags() const override;

protected:
    // 运行时动态增减的标签（比如：点位被占用、机器损坏）
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tags")
    FGameplayTagContainer AllTags;

private:
    FPrimaryAssetId ItemID; //(用于存档和识别)
    UPROPERTY()
    class UDIY_ItemAsset *ItemData; //(在 BeginPlay 时通过 ID 赋值，用于运行时极速访问)
    EItemLifeCycleState CurrentLifeState{EItemLifeCycleState::EItemState_SpanwedJustNow};

    class UDIY_ConductivityProcessor *Possible_Conductivity_Processor{nullptr};
    class UDIY_SolidnessProcessor *Possible_Solidness_Processor{nullptr};
    class UDIY_TemperatureProcessor *Possible_Temperature_Processor{nullptr};

#if UE_BUILD_DEVELOPMENT || UE_BUILD_DEBUG
    class UWidgetComponent *ItemStateWidgetComponent;
    void UpdateWidgetText_Internal(const FString &NewText);

    void UpdateStateWidgetInfo(float inDeltaTime);
    class UDIY_ItemStateWidget *StateDisplayWidget{nullptr};
#endif
};
