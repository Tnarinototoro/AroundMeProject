#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
// 引入我们之前定义的各种结构体和枚举
#include "DIY_MainPet_Defines.h"

#include "DIY_PetWorldContext.h"
#include "DIY_PetMemoryComponent.generated.h"

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class UDIY_PetMemoryComponent : public UActorComponent
{
    GENERATED_BODY()

public:
    UDIY_PetMemoryComponent();

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Status")
    FDIY_PetStatus CurrentStatus;
    // --- 4. 实时环境感知快照 (World Context) ---
    // 由系统每隔一段时间更新一次，供 State Tree 查询
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Status")
    FDIY_PetWorldContext LastWorldSnapshot;

        /** [测试资产 1]: 大脑背景配置 (权重与放大曲线) */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TestAssets")
    FDIY_PetJudgingProfile DebugJudgingProfile;

    /** [测试资产 2]: 任务字典 (Key为RoutineTag, Value为配置) */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TestAssets")
    TMap<FGameplayTag, FDIY_RoutineConfig> DebugRoutineLibrary;
};