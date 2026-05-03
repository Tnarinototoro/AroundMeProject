#pragma once

#include "CoreMinimal.h"
#include "StateTreeIndexTypes.h"
#include "DIY_StateTreeRefTypes.generated.h"

/**
 * 内存布局必须与引擎 FStateTreePropertyRef 严格一致
 * 引擎原版内部仅包含一个 FStateTreeIndex16 RefAccessIndex
 */
USTRUCT(BlueprintType)
struct FStateTreePropertyRef_BP
{
    GENERATED_BODY()

    UPROPERTY()
    FStateTreeIndex16 RefAccessIndex;

    FStateTreePropertyRef_BP() : RefAccessIndex() {}
};