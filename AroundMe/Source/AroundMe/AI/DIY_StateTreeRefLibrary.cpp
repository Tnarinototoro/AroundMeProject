#include "DIY_StateTreeRefLibrary.h"
#include "StateTreeExecutionContext.h"
#include "StateTreePropertyRef.h"

// 内部通用的逻辑模板 (保持不变)
template <typename T>
static void InternalSetRefValue(FStateTreeExecutionContext &Context, FStateTreePropertyRef_BP &BPRef, T NewValue)
{
    const FStateTreeExecutionFrame *Frame = Context.GetCurrentlyProcessedFrame();
    if (!Frame || !Frame->StateTree)
        return;

    const FStateTreePropertyRef &EngineRef = *(const FStateTreePropertyRef *)(&BPRef);

    T *Ptr = UE::StateTree::PropertyRefHelpers::GetMutablePtrToProperty<T>(
        EngineRef,
        Context.GetMutableInstanceData()->GetMutableStorage(),
        *Frame,
        Context.GetCurrentlyProcessedParentFrame());

    if (Ptr)
    {
        *Ptr = NewValue;
    }
}

// --- 手动实现的蓝图虚拟机函数入口 (手动步进堆栈版) ---

DEFINE_FUNCTION(UDIY_StateTreeRefLibrary::execSetPropertyRefBool)
{
    // 1. 手动抓取 Context 引用。
    // 我们跳过宏，直接通过 Stack.StepCompiledIn 拿到底层指针。
    // 这要求蓝图调用处传进来的必须是合法的引用。
    Stack.StepCompiledIn<FStructProperty>(NULL);
    FStateTreeExecutionContext &OutContext = *(FStateTreeExecutionContext *)Stack.MostRecentPropertyAddress;

    // 2. 后续参数可以用宏，因为它们有默认构造函数
    P_GET_STRUCT(FStateTreePropertyRef_BP, InRef);
    P_GET_UBOOL(bInValue);
    P_FINISH;

    P_NATIVE_BEGIN;
    InternalSetRefValue<bool>(OutContext, InRef, bInValue);
    P_NATIVE_END;
}

DEFINE_FUNCTION(UDIY_StateTreeRefLibrary::execSetPropertyRefFloat)
{
    Stack.StepCompiledIn<FStructProperty>(NULL);
    FStateTreeExecutionContext &OutContext = *(FStateTreeExecutionContext *)Stack.MostRecentPropertyAddress;

    P_GET_STRUCT(FStateTreePropertyRef_BP, InRef);
    P_GET_PROPERTY(FFloatProperty, InValue);
    P_FINISH;

    P_NATIVE_BEGIN;
    InternalSetRefValue<float>(OutContext, InRef, InValue);
    P_NATIVE_END;
}

DEFINE_FUNCTION(UDIY_StateTreeRefLibrary::execSetPropertyRefVector)
{
    Stack.StepCompiledIn<FStructProperty>(NULL);
    FStateTreeExecutionContext &OutContext = *(FStateTreeExecutionContext *)Stack.MostRecentPropertyAddress;

    P_GET_STRUCT(FStateTreePropertyRef_BP, InRef);
    P_GET_STRUCT(FVector, InValue);
    P_FINISH;

    P_NATIVE_BEGIN;
    InternalSetRefValue<FVector>(OutContext, InRef, InValue);
    P_NATIVE_END;
}

// 占位函数实现 (保持不变)
void UDIY_StateTreeRefLibrary::SetPropertyRefBool(int32 &Context, FStateTreePropertyRef_BP Ref, bool bValue) {}
void UDIY_StateTreeRefLibrary::SetPropertyRefFloat(int32 &Context, FStateTreePropertyRef_BP Ref, float Value) {}
void UDIY_StateTreeRefLibrary::SetPropertyRefVector(int32 &Context, FStateTreePropertyRef_BP Ref, FVector Value) {}