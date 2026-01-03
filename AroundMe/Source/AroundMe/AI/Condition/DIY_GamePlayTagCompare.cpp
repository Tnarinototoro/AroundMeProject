#include "DIY_GamePlayTagCompare.h"
#include "StateTreeExecutionContext.h"
bool FDIY_GamePlayTagCompare::TestCondition(FStateTreeExecutionContext &Context) const
{
    // 获取运行时数据（包括绑定的 Task 输出）
    const FInstanceDataType &InstanceData = Context.GetInstanceData(*this);

    // 执行对比
    bool bIsMatch = bExactMatch ? InstanceData.Left.MatchesTagExact(InstanceData.Right) : InstanceData.Left.MatchesTag(InstanceData.Right);

    // 处理反转逻辑
    return bIsMatch ^ bInvert;
}
