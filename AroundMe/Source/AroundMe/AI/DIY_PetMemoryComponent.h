#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
// 引入我们之前定义的各种结构体和枚举
#include "DIY_MainPet_Defines.h"

#include "DIY_PetWorldContext.h"
#include "DIY_PetMemoryComponent.generated.h"

// 这里的 AROUNDME_API 必须存在，它告诉编译器将此类导出，以便 Editor 模块可以链接它
UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class AROUNDME_API UDIY_PetMemoryComponent : public UActorComponent
{
    GENERATED_BODY()

protected:
    virtual void BeginPlay() override;
    void OnSoulLoaded();
    void OnAllRoutinesLoaded(TArray<FPrimaryAssetId> LoadedIds);
    void RequestAddToDailyPool(FPrimaryAssetId RoutineAssetID);
    void AddRoutineInstanceEntryToPool(class UDIY_PetRoutineAsset *RoutineData, FPrimaryAssetId AssetID);
    void OnSingleRoutineLoaded(FPrimaryAssetId RoutineAssetID);

public:
    UDIY_PetMemoryComponent();

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Memory", meta = (AllowedTypes = "Soul"))
    FPrimaryAssetId DefaultSoul;

    UPROPERTY(VisibleAnyWhere, BlueprintReadWrite, Category = "Context")
    FDIY_PetSoulContext CurrentPetContext;
    // --- 4. 实时环境感知快照 (World Context) ---
    // 由系统每隔一段时间更新一次，供 State Tree 查询
    UPROPERTY(VisibleAnyWhere, BlueprintReadWrite, Category = "Status")
    FDIY_PetWorldContext CurrentWorldContext;

    /** 思考频率控制：上次思考流逝了多少时间 */
    UPROPERTY(VisibleAnyWhere, BlueprintReadWrite, Category = "Status")
    float LastThinkElapsedTime = 0.0f;

    /** 思考频率控制：当前routine流逝时间 */
    UPROPERTY(VisibleAnyWhere, BlueprintReadWrite, Category = "Status")
    float CurrentRoutineElapsedTime = 0.0f;

    // --- 动态数据 ---
    /** 1. 工作记忆栈 (Stack)：
     * 顶端 [Last Index] 是当前正在做的。
     * 下面的任务被“挂起”，等待顶端完成后恢复。
     */
    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Memory|Live")
    TArray<FDIY_RoutineInstance> WorkingStack;

    /** 2. 今日任务池 (Pool)：
     * 每天 0 点从所有资源中抽取的“及格”任务。
     */
    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Memory|Live")
    TArray<FDIY_RoutineInstance> DailyTaskPool;

    // --- 配置参数 ---
    /** 工作记忆栈的最大长度 (大脑容量) */
    UPROPERTY(EditAnywhere, Category = "Memory|Config")
    int32 MaxWorkingStackSize = 4;

    /** 思考频率控制：心流进入 阈值时间 */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Status")
    float BasicEnterFlowThreshold = 60.0f;

    /** 思考频率控制：基础思考间隔 */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Status")
    float BasicThinkInterval = 3.0f;

    // --- 核心操作 ---
    /** 每天 0 点重置 Pool */
    void RefreshDailyPool(const TArray<FDIY_RoutineConfig> &AllPossibleConfigs);

    /**
     * 获取当前 WorkingStack 中最顶层的活跃任务。
     * @param OutInstance 如果找到活跃任务，则将数据填充到此变量中。
     * @return 如果 WorkingStack 为空（没有活跃任务），返回 false；否则返回 true。
     */
    UFUNCTION(BlueprintCallable, Category = "DIY|Memory", meta = (DisplayName = "Get Active Routine"))
    bool GetActiveRoutine(FDIY_RoutineInstance &OutInstance);

    UFUNCTION(BlueprintCallable, Category = "AroundMe|PetMemory")
    void ResetAndLoadDailyPool();

    UFUNCTION(BlueprintCallable, Category = "AroundMe|PetMemory")
    void ReEvaluateDailyPool();

    UFUNCTION(BlueprintCallable, Category = "AroundMe|PetMemory")
    bool ChooseRandomValidRoutineFromPool(FDIY_RoutineInstance &OutInstance);

    UFUNCTION(BlueprintCallable, Category = "AroundMe|PetMemory")
    void MoveRoutineFromPoolToWorkingStackTop(FGameplayTag RoutineTag);

    UFUNCTION(BlueprintCallable, Category = "AroundMe|PetMemory")
    void MoveRoutineFromStackTopToPool();
};