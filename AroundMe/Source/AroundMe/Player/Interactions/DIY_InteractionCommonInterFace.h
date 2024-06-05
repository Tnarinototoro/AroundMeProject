#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "DIY_InteractionCommonInterFace.generated.h"

struct FDIY_ItemDefualtConfig;
// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UDIY_InteractionCommonInterFace : public UInterface
{
    GENERATED_BODY()
};

/**
 *
 */
class AROUNDME_API IDIY_InteractionCommonInterFace
{
    GENERATED_BODY()

public:
    // This function must be implemented by any class that implements this interface
    virtual void OnInitWithConfigCopy(const FDIY_ItemDefualtConfig* inConfig) = 0;
    
};