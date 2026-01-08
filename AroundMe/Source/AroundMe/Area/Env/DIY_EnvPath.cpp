#include "DIY_EnvPath.h"
ADIY_EnvPath::ADIY_EnvPath()
{
    SplinePath = CreateDefaultSubobject<USplineComponent>(TEXT("SplinePath"));
    SplinePath->SetupAttachment(RootComponent);

}

FTransform ADIY_EnvPath::GetTransformAtDistance(float Distance, ESplineCoordinateSpace::Type Space) const
{
    if (SplinePath)
    {
        return SplinePath->GetTransformAtDistanceAlongSpline(Distance, Space);
    }
    return FTransform::Identity;
}