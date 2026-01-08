#pragma once

#include "CoreMinimal.h"
#include "../DIY_EnvObjectBase.h"
#include "Components/SplineComponent.h"
#include "DIY_EnvPath.generated.h"

UCLASS()
class AROUNDME_API ADIY_EnvPath : public ADIY_EnvObjectBase
{
    GENERATED_BODY()

public:
    ADIY_EnvPath();

    /** 获取样条线组件供 Body ST Task 调用 */
    UFUNCTION(BlueprintCallable, Category = "DIY|Path")
    USplineComponent *GetSplinePath() const { return SplinePath; }

    /** 便捷接口：获取路径上某一点的变换 */
    UFUNCTION(BlueprintCallable, Category = "DIY|Path")
    FTransform GetTransformAtDistance(float Distance, ESplineCoordinateSpace::Type Space = ESplineCoordinateSpace::World) const;

protected:
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    TObjectPtr<USplineComponent> SplinePath;
};