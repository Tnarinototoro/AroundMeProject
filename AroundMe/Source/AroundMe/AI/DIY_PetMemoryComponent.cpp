#include "DIY_PetMemoryComponent.h"
#include "Assets/DIY_PetRoutineAsset.h"
#include "Assets/DIY_PetSoulAsset.h"
#include "UObject/PrimaryAssetId.h"
#include "Engine/AssetManager.h"
#include "DIY_PetAIUtility.h"

void UDIY_PetMemoryComponent::BeginPlay()
{
    Super::BeginPlay();

    // inialize soul
    {
        if (DefaultSoul.IsValid())
        {
            // 绑定回调：官方支持在后面直接传 Payload 参数
            UAssetManager::Get().LoadPrimaryAsset(
                DefaultSoul,
                TArray<FName>(), // 不加载额外的 Bundle
                FStreamableDelegate::CreateUObject(this, &UDIY_PetMemoryComponent::OnSoulLoaded));
        }
    }

    // initialize world context
    {
        CurrentWorldContext.UserAffection = 80.0f;
        CurrentWorldContext.Temperature = 25.0f;
        CurrentWorldContext.Humidity = 0.5f;
        CurrentWorldContext.LightIntensity = 1.0f;
        CurrentWorldContext.ObjectiveTags;
        CurrentWorldContext.CurrentHour = 8;
        CurrentWorldContext.ConstantGoldEnergy = 300.f;
    }
    // init routine pool for once
    {
        ResetAndLoadDailyPool();
    }
}
void UDIY_PetMemoryComponent::OnSoulLoaded()
{
    // 这里假设你的 Soul 资源是一个 UDIY_SoulAsset
    UDIY_PetSoulAsset *PetSoulAsset = UAssetManager::Get().GetPrimaryAssetObject<UDIY_PetSoulAsset>(DefaultSoul);

    ensureAlwaysMsgf(PetSoulAsset, TEXT("PetSoulAsset Invalid Soul Asset"));
    // 从资源初始化内存中的 Context
    CurrentPetContext = PetSoulAsset->SoulContext;

    // 生理和标签通常保持默认或从存盘读取，这里先初始化
}

void UDIY_PetMemoryComponent::OnAllRoutinesLoaded(TArray<FPrimaryAssetId> LoadedIds)
{
    for (const FPrimaryAssetId &Id : LoadedIds)
    {
        // 直接利用我们之前定义的接口尝试入池
        RequestAddToDailyPool(Id);
    }
}
void UDIY_PetMemoryComponent::RequestAddToDailyPool(FPrimaryAssetId RoutineAssetID)
{
    if (!RoutineAssetID.IsValid())
        return;

    // 1. 内存查重：如果任务池里已经有了，不需要重复添加
    bool bAlreadyInPool = DailyTaskPool.ContainsByPredicate([&](const FDIY_RoutineInstance &Item)
                                                            { return Item.OriginalRoutineAssetID == RoutineAssetID; });
    if (bAlreadyInPool)
        return;

    // 2. 尝试同步获取：看资源是否已经在内存中
    UDIY_PetRoutineAsset *RoutineData = UAssetManager::Get().GetPrimaryAssetObject<UDIY_PetRoutineAsset>(RoutineAssetID);

    if (RoutineData)
    {
        // 资源已在内存，直接同步处理入池逻辑
        UE_LOG(LogTemp, Log, TEXT("Routine Asset %s is already loaded, adding to pool immediately."), *RoutineAssetID.ToString());
        AddRoutineInstanceEntryToPool(RoutineData, RoutineAssetID);
    }
    else
    {
        // 3. 资源不在内存，发起异步加载
        UE_LOG(LogTemp, Log, TEXT("Routine Asset %s not in memory, starting async load."), *RoutineAssetID.ToString());
        UAssetManager::Get().LoadPrimaryAsset(
            RoutineAssetID,
            TArray<FName>(),
            FStreamableDelegate::CreateUObject(this, &UDIY_PetMemoryComponent::OnSingleRoutineLoaded, RoutineAssetID));
    }
}

// 抽取出来的统一入池逻辑函数，供同步和异步回调共同使用
void UDIY_PetMemoryComponent::AddRoutineInstanceEntryToPool(UDIY_PetRoutineAsset *RoutineData, FPrimaryAssetId AssetID)
{
    if (!RoutineData)
        return;
    FDIY_RoutineScoreDetails OutDetails;

    // 计算分数（MBTI 核心逻辑就在这里）
    float InitialScore = UDIY_PetAIUtility::CalculateRoutineScore(CurrentPetContext, RoutineData->RoutineConfig, CurrentWorldContext.CurrentHour, OutDetails);

    if (InitialScore >= 0.0f)
    {
        FDIY_RoutineInstance NewInstance;
        NewInstance.RoutineTag = RoutineData->RoutineConfig.RoutineTag;
        NewInstance.OriginalRoutineAssetID = AssetID;
        NewInstance.CurrentScore = OutDetails;
        NewInstance.ElapsedTime = 0.0f;
        NewInstance.bIsInterrupt = false;
        NewInstance.CurrentPossibleExecutingTimes = RoutineData->RoutineConfig.MaxExecutableTimes;

        DailyTaskPool.Add(NewInstance);

        // 排序保持分值由高到低
        DailyTaskPool.Sort([](const FDIY_RoutineInstance &A, const FDIY_RoutineInstance &B)
                           { return A.CurrentScore.TotalScore > B.CurrentScore.TotalScore; });
    }
}

void UDIY_PetMemoryComponent::OnSingleRoutineLoaded(FPrimaryAssetId RoutineAssetID)
{
    // 异步回调也直接调这个统一函数
    UDIY_PetRoutineAsset *RoutineData = UAssetManager::Get().GetPrimaryAssetObject<UDIY_PetRoutineAsset>(RoutineAssetID);
    AddRoutineInstanceEntryToPool(RoutineData, RoutineAssetID);
}
UDIY_PetMemoryComponent::UDIY_PetMemoryComponent()
{
}

bool UDIY_PetMemoryComponent::GetActiveRoutine(FDIY_RoutineInstance &OutInstance)
{
    // 1. 检查 WorkingStack 是否有效且不为空
    // WorkingStack 是一个 TArray<FDIY_RoutineInstance>
    if (WorkingStack.Num() > 0)
    {
        // 2. 获取栈顶元素（Last Index）
        // 在我们的逻辑中，Stack 的最后一个元素代表当前正在执行的最活跃任务
        OutInstance = WorkingStack.Last();
        return true;
    }

    // 3. 如果栈为空，确保 OutInstance 是一个干净的“不合法”状态
    // 建议在 FDIY_RoutineInstance 结构体里定义一个重置或判断有效性的方法
    OutInstance = FDIY_RoutineInstance();
    return false;
}

void UDIY_PetMemoryComponent::ResetAndLoadDailyPool()
{
    DailyTaskPool.Empty();

    TArray<FPrimaryAssetId> AllRoutineIds;
    UAssetManager::Get().GetPrimaryAssetIdList(FPrimaryAssetType("Routine"), AllRoutineIds);

    if (AllRoutineIds.Num() > 0)
    {
        // 批量加载所有 Routine
        UAssetManager::Get().LoadPrimaryAssets(
            AllRoutineIds,
            TArray<FName>(),
            FStreamableDelegate::CreateUObject(this, &UDIY_PetMemoryComponent::OnAllRoutinesLoaded, AllRoutineIds));
    }
}

void UDIY_PetMemoryComponent::ReEvaluateDailyPool()
{

    for (FDIY_RoutineInstance &Instance : DailyTaskPool)
    {
        // 重新获取 Asset 以读取最新的 Config
        UDIY_PetRoutineAsset *RoutineData = UAssetManager::Get().GetPrimaryAssetObject<UDIY_PetRoutineAsset>(Instance.OriginalRoutineAssetID);
        if (!RoutineData)
            continue;

        // 根据当前 Context 和 WorldContext 实时调分
        UDIY_PetAIUtility::CalculateRoutineScore(
            CurrentPetContext,
            RoutineData->RoutineConfig,
            CurrentWorldContext.CurrentHour,
            Instance.CurrentScore);
    }

    // 依然建议排个序，虽然是轮盘赌，但排序后逻辑更清晰，且方便调试观察
    DailyTaskPool.Sort([](const FDIY_RoutineInstance &A, const FDIY_RoutineInstance &B)
                       { return A.CurrentScore.TotalScore > B.CurrentScore.TotalScore; });
}

/**
 * 通过轮盘赌（Roulette Wheel Selection）算法从任务池中挑选下一个可能的任务。
 * 分数越高，被选中的概率越大；分数小于等于 0 的任务将被忽略。
 * * @param OutInstance [输出] 如果成功选中，则填充该任务实例的详细数据。
 * @return 如果成功抽选到任务返回 true；如果池子为空或没有分数为正的任务则返回 false。
 */
UFUNCTION(BlueprintCallable, Category = "DIY|Memory", meta = (DisplayName = "Pick Up Next Possible From Pool"))
bool UDIY_PetMemoryComponent::ChooseRandomValidRoutineFromPool(FDIY_RoutineInstance &OutInstance)
{
    // 1. 安全检查：如果池子本身就是空的，直接返回失败
    if (DailyTaskPool.Num() == 0)
    {
        return false;
    }

    // 2. 计算分数的总和（仅累加正分）
    // 总分相当于轮盘的总周长
    float TotalScore = 0.0f;
    for (const FDIY_RoutineInstance &Instance : DailyTaskPool)
    {
        if (Instance.CurrentScore.TotalScore > 0.0f)
        {
            TotalScore += Instance.CurrentScore.TotalScore;
        }
    }

    // 3. 如果没有任何任务的分数大于 0，说明没有任何值得做的事情
    if (TotalScore <= 0.0f)
    {
        return false;
    }

    // 4. 在 [0, TotalScore] 范围内产生一个随机切点
    // FMath::RandRange 是虚幻引擎提供的标准随机函数
    float RandomPoint = FMath::RandRange(0.0f, TotalScore);

    // 5. 开始“转动轮盘”：遍历池子，累加区间直到包含随机点
    float CurrentRange = 0.0f;
    for (const FDIY_RoutineInstance &Instance : DailyTaskPool)
    {
        // 忽略负分或零分的无效任务
        if (Instance.CurrentScore.TotalScore <= 0.0f)
        {
            continue;
        }

        // 累加当前任务所占的“扇形区域”
        CurrentRange += Instance.CurrentScore.TotalScore;

        // 如果随机点落在了当前的范围内，说明选中了该任务
        if (RandomPoint <= CurrentRange)
        {
            OutInstance = Instance; // 填充输出参数（执行拷贝）
            return true;
        }
    }

    // 6. 兜底处理：理论上由于 TotalScore 的计算，上方循环一定会返回。
    // 如果走到这里，通常是极小概率的浮点数精度误差。
    return false;
}

void UDIY_PetMemoryComponent::MoveRoutineFromPoolToWorkingStackTop(FGameplayTag RoutineTag)
{
    int32 FoundIdx = DailyTaskPool.IndexOfByPredicate([&](const FDIY_RoutineInstance &Item)
                                                      { return Item.RoutineTag == RoutineTag; });

    if (FoundIdx != INDEX_NONE)
    {
        FDIY_RoutineInstance TargetInstance = DailyTaskPool[FoundIdx];

        // 从池子移除
        DailyTaskPool.RemoveAt(FoundIdx);

        // 限制栈长度（大脑容量限制）
        if (WorkingStack.Num() >= MaxWorkingStackSize)
        {
            // 扔掉最旧的任务（栈底），或者执行“出栈回池”逻辑
            WorkingStack.RemoveAt(0);
        }

        // 压入栈顶
        WorkingStack.Add(TargetInstance);
    }
}

void UDIY_PetMemoryComponent::MoveRoutineFromStackTopToPool()
{
    if (WorkingStack.Num() == 0)
        return;

    FDIY_RoutineInstance FinishedInstance = WorkingStack.Last();
    WorkingStack.RemoveAt(WorkingStack.Num() - 1);

    // 检查次数限制：如果是次数限制任务，执行完一次要扣次数
    // 注意：如果是被中断（bIsInterrupt=true）回池的，可能不扣次数，看你设计
    if (FinishedInstance.CurrentPossibleExecutingTimes > 0)
    {
        FinishedInstance.CurrentPossibleExecutingTimes--;
    }

    // 只有还有次数（或无限次 -1）的任务才允许回池
    if (FinishedInstance.CurrentPossibleExecutingTimes != 0)
    {
        // 回池前重置进度
        FinishedInstance.ElapsedTime = 0.0f;
        FinishedInstance.bIsInterrupt = false;

        DailyTaskPool.Add(FinishedInstance);

        // 重新排下序
        DailyTaskPool.Sort([](const FDIY_RoutineInstance &A, const FDIY_RoutineInstance &B)
                           { return A.CurrentScore.TotalScore > B.CurrentScore.TotalScore; });
    }
}
