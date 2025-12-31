#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "GameplayTagContainer.h"
#include "DIY_TagInterface.generated.h"

UINTERFACE(MinimalAPI, Blueprintable)
class UDIY_TagInterface : public UInterface
{
    GENERATED_BODY()
};

class IDIY_TagInterface
{
    GENERATED_BODY()

public:
    /** 获取物体拥有的所有标签 */
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "TagInterface")
    void GetOwnedGameplayTags(FGameplayTagContainer &TagContainer) const;
};