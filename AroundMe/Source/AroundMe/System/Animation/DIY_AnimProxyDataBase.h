#pragma once

#include "CoreMinimal.h"
#include "DIY_AnimProxyDataBase.generated.h"

USTRUCT(BlueprintType)
struct AROUNDME_API FDIY_AnimProxyDataBase
{
    GENERATED_BODY()

    FDIY_AnimProxyDataBase() : bHadReset(0) {}
    virtual ~FDIY_AnimProxyDataBase() = default;

    // 模仿商业代码：数据拷贝，用于 Master 与 Layer 间同步
    virtual FDIY_AnimProxyDataBase *CopyFrom(const FDIY_AnimProxyDataBase *In_Other)
    {
        bHadReset = false;
        return this;
    }

    void ResetProxyData(bool In_Force = false)
    {
        if (bHadReset && !In_Force)
            return;
        Reset();
        bHadReset = true;
    }

protected:
    virtual void Reset() {}

private:
    uint8 bHadReset : 1;
};

// 示例：基础移动数据模块
USTRUCT(BlueprintType)
struct AROUNDME_API FDIY_ProxyData_CharacterInfo : public FDIY_AnimProxyDataBase
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float MoveSpeed = 0.f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FVector Velocity = FVector::ZeroVector;

    virtual void Reset() override
    {
        MoveSpeed = 0.f;
        Velocity = FVector::ZeroVector;
    }
};