#include "DIY_StateTreeRefTask.h"
#include "StateTreeExecutionContext.h"

EStateTreeRunStatus FDIY_StateTreeRefTask::EnterState(FStateTreeExecutionContext &Context, const FStateTreeTransitionResult &Transition) const
{
    // 从 Context 中提取当前 Task 的数据实例
    FInstanceDataType &Data = Context.GetInstanceData<FInstanceDataType>(*this);

    // 模拟逻辑处理
    bool bResult = true;
    FVector VecResult = FVector(500.f, 0.f, 100.f);

    // 使用我们之前写的黑科技库进行写入
    UDIY_StateTreeRefLibrary::SetPropertyRefBool((int32 &)Context, Data.DIY_BoolRef, bResult);
    UDIY_StateTreeRefLibrary::SetPropertyRefVector((int32 &)Context, Data.DIY_VectorRef, VecResult);

    return EStateTreeRunStatus::Succeeded;
}

void UStateTreeTask_BlueprintBaseRef::SetRefValueBool(FStateTreePropertyRef_BP Ref, bool bValue)
{
    if (CachedContext)
    {
        // 调用我们之前的黑科技库，强制写入
        UDIY_StateTreeRefLibrary::SetPropertyRefBool((int32 &)*CachedContext, Ref, bValue);
    }
}

void UStateTreeTask_BlueprintBaseRef::SetRefValueVector(FStateTreePropertyRef_BP Ref, FVector Value)
{
    if (CachedContext)
    {
        UDIY_StateTreeRefLibrary::SetPropertyRefVector((int32 &)*CachedContext, Ref, Value);
    }
}