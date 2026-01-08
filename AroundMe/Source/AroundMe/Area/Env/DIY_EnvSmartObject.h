#pragma once

#include "CoreMinimal.h"
#include "../DIY_EnvObjectBase.h"
#include "DIY_EnvSmartObject.generated.h"

UCLASS()
class AROUNDME_API ADIY_EnvSmartObject : public ADIY_EnvObjectBase
{
    GENERATED_BODY()

public:
    ADIY_EnvSmartObject();

    /** 检查当前物体是否被占用 */
    UFUNCTION(BlueprintCallable, Category = "DIY|SmartObject")
    bool IsOccupied() const { return bIsOccupied; }

    /** 尝试占用/释放 */
    UFUNCTION(BlueprintCallable, Category = "DIY|SmartObject")
    void SetOccupied(bool bInOccupied) { bIsOccupied = bInOccupied; }

    /** 获取 AI 应该交互的具体位置（Slot） */
    UFUNCTION(BlueprintCallable, Category = "DIY|SmartObject")
    FTransform GetInteractionSlot() const;

protected:
    /** 标识是否有人正在使用 */
    UPROPERTY(BlueprintReadWrite, Category = "DIY|Status")
    bool bIsOccupied = false;

    /** 交互插槽：定义 AI 站立的位置和朝向 */
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    TObjectPtr<USceneComponent> InteractionSlot;

#if WITH_EDITORONLY_DATA
    /** 标识 Slot 位置的圆环/圆球 */
    UPROPERTY()
    TObjectPtr<class USphereComponent> SlotVisualizer;

    /** 标识 Slot 朝向的箭头 */
    UPROPERTY()
    TObjectPtr<class UArrowComponent> SlotArrow;
#endif

public:

};