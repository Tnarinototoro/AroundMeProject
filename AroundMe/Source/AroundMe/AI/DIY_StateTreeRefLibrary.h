#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
// 这里不再直接包含 StateTreeExecutionContext.h 以确保 UHT 干净
#include "DIY_StateTreeRefTypes.h"
#include "DIY_StateTreeRefLibrary.generated.h"

// 前置声明
struct FStateTreeExecutionContext;

UCLASS()
class AROUNDME_API UDIY_StateTreeRefLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    /**
     * Context 参数在蓝图中会被 meta=(StateTreeContext) 自动隐藏并连线
     * 实际上它在蓝图虚拟机里是以引用传递的
     */
    UFUNCTION(BlueprintCallable, Category = "StateTree|Ref", CustomThunk, meta = (StateTreeContext = "Context"))
    static void SetPropertyRefBool(int32 &Context, FStateTreePropertyRef_BP Ref, bool bValue);

    UFUNCTION(BlueprintCallable, Category = "StateTree|Ref", CustomThunk, meta = (StateTreeContext = "Context"))
    static void SetPropertyRefFloat(int32 &Context, FStateTreePropertyRef_BP Ref, float Value);

    UFUNCTION(BlueprintCallable, Category = "StateTree|Ref", CustomThunk, meta = (StateTreeContext = "Context"))
    static void SetPropertyRefVector(int32 &Context, FStateTreePropertyRef_BP Ref, FVector Value);

    /** 手动实现蓝图虚拟机的转换层 */
    DECLARE_FUNCTION(execSetPropertyRefBool);
    DECLARE_FUNCTION(execSetPropertyRefFloat);
    DECLARE_FUNCTION(execSetPropertyRefVector);
};

