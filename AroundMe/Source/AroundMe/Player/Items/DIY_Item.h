// All rights reserved to ShadowCandle Studio

#pragma once

#include "CoreMinimal.h"

#include "DIY_ItemDefines.h"
#include "DIY_ItemManagerDefines.h"
#include "DIY_Item.generated.h"
/**
 *
 */

UCLASS()
class AROUNDME_API ADIY_ItemBase : public AActor
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

    void InitWithConfig(const FDIY_ItemDefualtConfig &inConfig);

    UFUNCTION(BlueprintCallable, Category = "DIY_ItemBase")
    EItemID GetItemID() const { return config_copy.ItemID; }

    // force override means to force change to target state and execute the first execution event equal to current state
    bool SwitchCycleState(EItemLifeCycleState targetState, bool ForceOverride = false);

    UFUNCTION(BlueprintCallable, Category = "DIY_ItemBase")
    bool CheckItemFlag(EDIY_InteractItemFlag inFlag);

    UFUNCTION(BlueprintCallable, Category = "DIY_ItemBase")
    const FDIY_ItemDefualtConfig& GetItemDefualtConfig();

#if WITH_EDITOR
    static bool Dbg_Enable_ItemInfo_Widget;
#endif
protected:
private:
    UPROPERTY(VisibleAnywhere, Category = "UI")
    class UWidgetComponent *ItemStateWidgetComponent;
    FDIY_ItemDefualtConfig config_copy;
    int32 BulkInteractionFlags{0};

    EItemLifeCycleState CurrentLifeState{EItemLifeCycleState::EItemState_SpanwedJustNow};

    void UpdateWidgetText_Internal(const FString &NewText);

    void UpdateStateWidgetInfo(float inDeltaTime);

    class UDIY_ItemStateWidget *StateDisplayWidget{nullptr};

    class UDIY_ConductivityProcessor *Possible_Conductivity_Processor{nullptr};
    class UDIY_SolidnessProcessor *Possible_Solidness_Processor{nullptr};
    class UDIY_TemperatureProcessor *Possible_Temperature_Processor{nullptr};
};
