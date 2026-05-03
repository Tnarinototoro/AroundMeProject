#pragma once

#include "CoreMinimal.h"
#include "StateTreeTaskBase.h"
#include "Blueprint/StateTreeTaskBlueprintBase.h"
#include "DIY_StateTreeRefLibrary.h" // 包含你之前写的那个库
#include "DIY_StateTreeRefTask.generated.h"

// 1. 必须定义 InstanceData 结构体，这是在编辑器里显示属性的地方
USTRUCT(BlueprintType)
struct AROUNDME_API FDIY_StateTreeDIYRefTaskInstanceData
{
    GENERATED_BODY()

    // 必须有 meta=(RefType="bool") 才能开启 Bind 按钮
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Output", meta = (RefType = "bool"))
    FStateTreePropertyRef_BP DIY_BoolRef;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Output", meta = (RefType = "FVector"))
    FStateTreePropertyRef_BP DIY_VectorRef;

    // 你也可以定义普通的输入参数
    UPROPERTY(EditAnywhere, Category = "Input")
    float SomeMultiplier = 1.0f;
};

// 2. 定义 Task 类
USTRUCT(BlueprintType, meta = (DisplayName = "DIY_SetRefTask", Category = "AroundMe"))
struct AROUNDME_API FDIY_StateTreeRefTask : public FStateTreeTaskBase
{
    GENERATED_BODY()

    // 绑定数据关联
    typedef FDIY_StateTreeDIYRefTaskInstanceData FInstanceDataType;

    // 必须重写这个函数，告知引擎使用哪个结构体作为实例数据
    virtual const UStruct *GetInstanceDataType() const override { return FInstanceDataType::StaticStruct(); }

    // 逻辑入口
    virtual EStateTreeRunStatus EnterState(FStateTreeExecutionContext &Context, const FStateTreeTransitionResult &Transition) const override;
};

UCLASS(Abstract, Blueprintable)
class AROUNDME_API UStateTreeTask_BlueprintBaseRef : public UStateTreeTaskBlueprintBase
{
    GENERATED_BODY()

public:
    // 暴露给蓝图调用的设置函数
    UFUNCTION(BlueprintCallable, Category = "StateTree|Ref")
    void SetRefValueBool(FStateTreePropertyRef_BP Ref, bool bValue);

    UFUNCTION(BlueprintCallable, Category = "StateTree|Ref")
    void SetRefValueVector(FStateTreePropertyRef_BP Ref, FVector Value);

protected:
    // 内部缓存当前的 Context 指针（仅在 Task 运行期间有效）
    mutable FStateTreeExecutionContext *CachedContext = nullptr;
};