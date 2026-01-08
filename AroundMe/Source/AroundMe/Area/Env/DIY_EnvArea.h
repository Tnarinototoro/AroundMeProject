#pragma once

#include "CoreMinimal.h"
#include "../DIY_EnvObjectBase.h"
#include "Components/ShapeComponent.h"
#include "DIY_EnvArea.generated.h"

UCLASS()
class AROUNDME_API ADIY_EnvArea : public ADIY_EnvObjectBase
{
    GENERATED_BODY()

public:
    ADIY_EnvArea();

protected:
    /** 区域碰撞体，支持在蓝图修改为 Box, Sphere 或 Capsule */
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    TObjectPtr<UShapeComponent> AreaCollision;

    virtual void BeginPlay() override;

    /** 触发重叠：更新 AI 内存的当前区域 */
    UFUNCTION()
    virtual void OnOverlapBegin(UPrimitiveComponent *OverlappedComp, AActor *OtherActor, UPrimitiveComponent *OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult &SweepResult);

    /** 结束重叠：清理区域标记 */
    UFUNCTION()
    virtual void OnOverlapEnd(UPrimitiveComponent *OverlappedComp, AActor *OtherActor, UPrimitiveComponent *OtherComp, int32 OtherBodyIndex);
};