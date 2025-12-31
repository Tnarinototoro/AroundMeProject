#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
// 引入我们之前定义的各种结构体和枚举
#include "../DIY_MainPet_Defines.h"
#include "../DIY_DynamicStatusDefines.h"
#include "../DIY_AfterBornExpDefines.h"
#include "AroundMe/AI/DIY_PetWorldContext.h"
#include "DIY_PetMemoryComponent.generated.h"

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class UDIY_PetMemoryComponent : public UActorComponent
{
    GENERATED_BODY()

public:
    UDIY_PetMemoryComponent();

    // --- 1. 先天基因 (Born Nature) ---
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Nature|Born")
    EDIY_BornNature BornNature;

    // --- 2. 后天经历/规则 (Experience Based) ---
    // 这里存储策划配表生成的或运行时获得的特质
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Nature|Experience")
    TArray<FDIY_ExperienceRule> ExperienceRules;

    // --- 3. 生理状态 (Dynamic Status) ---
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Status")
    FDIY_DynamicStatus CurrentStatus;

    // --- 4. 实时环境感知快照 (World Context) ---
    // 由系统每隔一段时间更新一次，供 State Tree 查询
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Status")
    FDIY_PetWorldContext LastWorldSnapshot;

    // --- 5. 核心接口：获取当前执行某任务的最终权重 ---
    // UFUNCTION(BlueprintPure, Category = "AI|Decision")
    // float GetTaskFinalWeight(const UDIY_PetTaskAsset *TaskAsset);

    // --- 6. 核心接口：获取当前最优先的任务 ---
    // 供 State Tree 调用来切换状态
    // UFUNCTION(BlueprintCallable, Category = "AI|Decision")
    // UDIY_PetTaskAsset *PickNextTaskFromPool(const TArray<UDIY_PetTaskAsset *> &TaskPool);
};