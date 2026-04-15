#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "DIY_AnimProxyBase.h"
#include "DIY_AnimInstanceBase.generated.h"

UCLASS(Abstract, Blueprintable)
class AROUNDME_API UDIY_AnimInstanceBase : public UAnimInstance
{
    GENERATED_BODY()
    UPROPERTY(Transient)
    FAnimInstanceProxy BaseProxy;

protected:
    virtual FAnimInstanceProxy *CreateAnimInstanceProxy() override { return &BaseProxy; }
};

// --- Master AnimInstance ---
UCLASS(Blueprintable)
class AROUNDME_API UDIY_MasterAnimInstance : public UDIY_AnimInstanceBase
{
    GENERATED_BODY()

public:
    // 提供给蓝图的 ThreadSafe 数据访问
    UFUNCTION(BlueprintCallable, BlueprintPure, meta = (BlueprintThreadSafe))
    FDIY_ProxyData_CharacterInfo &GetCharacterInfo() { return MasterProxy.CharacterInfo; }

protected:
    UPROPERTY(Transient, BlueprintReadOnly, Category = "AroundMe|Anim")
    FDIY_MasterAnimProxy MasterProxy;

    virtual FAnimInstanceProxy *CreateAnimInstanceProxy() override { return &MasterProxy; }

    // 在主线程采集数据
    virtual void NativeUpdateAnimation(float DeltaSeconds) override
    {
        Super::NativeUpdateAnimation(DeltaSeconds);
        if (APawn *Pawn = TryGetPawnOwner())
        {
            MasterProxy.CharacterInfo.MoveSpeed = Pawn->GetVelocity().Size();
            MasterProxy.CharacterInfo.Velocity = Pawn->GetVelocity();
        }
    }
};

// --- Layer AnimInstance ---
UCLASS(Blueprintable)
class AROUNDME_API UDIY_LayerAnimInstance : public UDIY_AnimInstanceBase
{
    GENERATED_BODY()

protected:
    UPROPERTY(Transient, BlueprintReadOnly, Category = "AroundMe|Anim")
    FDIY_LayerAnimProxy LayerProxy;

    virtual FAnimInstanceProxy *CreateAnimInstanceProxy() override { return &LayerProxy; }

    virtual void NativeThreadSafeUpdateAnimation(float DeltaSeconds) override
    {
        Super::NativeThreadSafeUpdateAnimation(DeltaSeconds);

        // 修复点：GetMainInstanceProxy() 是 Proxy 的成员，不是 AnimInstance 的
        // 1. 先拿到当前 Layer 自己的 Proxy 指针
        FDIY_LayerAnimProxy *MyProxy = &LayerProxy;

        // 2. 通过自己的 Proxy 访问基类的 GetMainInstanceProxy()
        if (FAnimInstanceProxy *MainInstanceProxy = MyProxy->GetMainInstanceProxy())
        {
            // 3. 强转为你的 Base 类型
            FDIY_AnimProxyBase *BaseMainProxy = static_cast<FDIY_AnimProxyBase *>(MainInstanceProxy);

            if (BaseMainProxy)
            {
                if (FDIY_AnimProxyDataBase *MainData = BaseMainProxy->GetBaseData())
                {
                    // 执行数据同步
                    LayerProxy.LocalCharacterInfo.CopyFrom(MainData);
                }
            }
        }
    }
};