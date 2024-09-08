#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "DIY_DynamicMeshPaintCommonInterFace.generated.h"


UINTERFACE(MinimalAPI)
class UDIY_DynamicMeshPaintCommonInterFace : public UInterface
{
    GENERATED_BODY()
};

/**
 *
 */
class AROUNDME_API IDIY_DynamicMeshPaintCommonInterFace
{
    GENERATED_BODY()

public:
    // initilization of component attrs
    virtual void OnInitializePaintableMaterial() = 0;
    // Reset values of components
    virtual void OnResetComponentValues() = 0;
};