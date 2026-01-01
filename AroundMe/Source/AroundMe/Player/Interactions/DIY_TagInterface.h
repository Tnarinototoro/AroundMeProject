#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "GameplayTagContainer.h"
#include "DIY_TagInterface.generated.h"

UINTERFACE(MinimalAPI, NotBlueprintable)
class UDIY_TagInterface : public UInterface
{
    GENERATED_BODY()
};

class IDIY_TagInterface
{
    GENERATED_BODY()

public:
    /** 蓝图可以调，C++ 也可以调，但蓝图不能 Override */
    UFUNCTION(BlueprintCallable, Category = "TagInterface")
    virtual const FGameplayTagContainer &GetOwnedGameplayTags() const = 0;
};