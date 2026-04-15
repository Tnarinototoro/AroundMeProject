#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstanceProxy.h"
#include "DIY_AnimProxyDataBase.h"
#include "DIY_AnimProxyBase.generated.h"

USTRUCT(BlueprintType)
struct AROUNDME_API FDIY_AnimProxyBase : public FAnimInstanceProxy
{
    GENERATED_BODY()

public:
    FDIY_AnimProxyBase() : FAnimInstanceProxy() {}
    FDIY_AnimProxyBase(UAnimInstance *InInstance) : FAnimInstanceProxy(InInstance) {}

    // 每个 Proxy 包含最基础的数据引用
    virtual FDIY_AnimProxyDataBase *GetBaseData() { return nullptr; }
};

// Master 专用代理
USTRUCT(BlueprintType)
struct AROUNDME_API FDIY_MasterAnimProxy : public FDIY_AnimProxyBase
{
    GENERATED_BODY()

    FDIY_MasterAnimProxy() : FDIY_AnimProxyBase() {}
    FDIY_MasterAnimProxy(UAnimInstance *InInstance) : FDIY_AnimProxyBase(InInstance) {}

    // Master 拥有完整的数据所有权
    UPROPERTY(Transient, BlueprintReadOnly)
    FDIY_ProxyData_CharacterInfo CharacterInfo;

    virtual FDIY_AnimProxyDataBase *GetBaseData() override { return &CharacterInfo; }
};

// Layer 专用代理
USTRUCT(BlueprintType)
struct AROUNDME_API FDIY_LayerAnimProxy : public FDIY_AnimProxyBase
{
    GENERATED_BODY()

    FDIY_LayerAnimProxy() : FDIY_AnimProxyBase() {}
    FDIY_LayerAnimProxy(UAnimInstance *InInstance) : FDIY_AnimProxyBase(InInstance) {}

    // Layer 拥有自己的本地拷贝，通过 Master 同步
    UPROPERTY(Transient, BlueprintReadOnly)
    FDIY_ProxyData_CharacterInfo LocalCharacterInfo;

    virtual FDIY_AnimProxyDataBase *GetBaseData() override { return &LocalCharacterInfo; }
};