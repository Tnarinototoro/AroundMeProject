#include "StateTreeConditionBase.h"
#include "GameplayTagContainer.h"
#include "DIY_GamePlayTagCompare.generated.h"

// 1. 定义运行时数据 (这些是可以被绑定 Task 输出的)
USTRUCT()
struct FDIY_GamePlayTagCompareInstanceData
{
    GENERATED_BODY()

    // 这里的 Left 通常绑定 Task 的输出
    UPROPERTY(EditAnywhere, Category = "Input")
    FGameplayTag Left;

    // 这里的 Right 通常在编辑器里手动设置，或绑定到另一个变量
    UPROPERTY(EditAnywhere, Category = "Parameter")
    FGameplayTag Right;
};
STATETREE_POD_INSTANCEDATA(FDIY_GamePlayTagCompareInstanceData);

/**
 * Tag Match condition
 * Succeeds if the tag  matches the specified tag.
 *
 * Condition can be used with multiple configurations:
 *	Does Tag {"A.1"} Match Tag "A" ?
 *		exact match 'false' will SUCCEED
 *		exact match 'true' will FAIL
 */
USTRUCT(DisplayName = "DIY_GameplayTag Match", Category = "Gameplay Tags")
struct FDIY_GamePlayTagCompare : public FStateTreeConditionCommonBase
{
    GENERATED_BODY()

    using FInstanceDataType = FDIY_GamePlayTagCompareInstanceData;

    FDIY_GamePlayTagCompare() = default;

    virtual const UStruct *GetInstanceDataType() const override { return FInstanceDataType::StaticStruct(); }

    virtual bool TestCondition(FStateTreeExecutionContext &Context) const override;

    UPROPERTY(EditAnywhere, Category = Condition)
    bool bInvert = false;

    UPROPERTY(EditAnywhere, Category = Condition)
    bool bExactMatch = true;
};