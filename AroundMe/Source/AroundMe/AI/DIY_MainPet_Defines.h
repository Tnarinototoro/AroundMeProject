// All rights reserved to ShadowCandle Studio

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "DIY_MainPet_Defines.generated.h"

UENUM(BlueprintType)
enum class EDIY_MainPetBehavior_MainMode : uint8
{
    Root,
    Patrol,
    TryDoSomething,
    MainMode_Count

};

/** 定义Routine的首选小时段 */
USTRUCT(BlueprintType)
struct FDIY_TimeRange
{
    GENERATED_BODY()

    /** 开始小时: [0-23]
     * 例子：22点开始。
     */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (UIMin = "0", UIMax = "23"))
    int32 StartHour = 0;

    /** 结束小时: [0-23]
     * 例子：2点结束。如果Start > End，系统会自动处理为跨午夜段。
     */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (UIMin = "0", UIMax = "23"))
    int32 EndHour = 23;
};

UENUM(BlueprintType, meta = (Bitflags, UseEnumValuesAsMaskValuesInEditor = "true"))
enum class EDIY_BornNature : uint8
{

    None = 0,
    E_Mask = 1 << 0, // Extraversion
    N_Mask = 1 << 1, // Intuition
    F_Mask = 1 << 2, // Feeling
    P_Mask = 1 << 3, // Perceiving

    ISTJ = 0,
    ISFJ = F_Mask,
    INFJ = N_Mask | F_Mask,
    INTJ = N_Mask,

    ISTP = P_Mask,
    ISFP = F_Mask | P_Mask,
    INFP = N_Mask | F_Mask | P_Mask,
    INTP = N_Mask | P_Mask,

    ESTP = E_Mask | P_Mask,
    ESFP = E_Mask | F_Mask | P_Mask,
    ENFP = E_Mask | N_Mask | F_Mask | P_Mask,
    ENTP = E_Mask | N_Mask | P_Mask,

    ESTJ = E_Mask,
    ESFJ = E_Mask | F_Mask,
    ENFJ = E_Mask | N_Mask | F_Mask,
    ENTJ = E_Mask | N_Mask
};

/**
 * FDIY_AICharacteristic: AI内在性格维度 (MBTI 映射)
 * 范围说明: 所有值均为 [-1.0, 1.0]。
 * 0.0 代表中性，1.0 或 -1.0 代表极端的性格倾向。
 */
USTRUCT(BlueprintType)
struct FDIY_AICharacteristic
{
    GENERATED_BODY()

    /** 外向维度: -1.0(内向 I) <-> 1.0(外向 E)。
     * 意义：影响对社交、群体活动的喜爱。1.0 会给具有正向 E_Affinity 的任务加分。
     */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Nature", meta = (UIMin = "-1.0", UIMax = "1.0"))
    float ExtraversionDimension = 0.0f;

    /** 直觉维度: -1.0(实感 S) <-> 1.0(直觉 N)。
     * 意义：S偏向具体操作(采矿)，N偏向抽象探索(研究)。
     */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Nature", meta = (UIMin = "-1.0", UIMax = "1.0"))
    float IntuitionDimension = 0.0f;

    /** 情感维度: -1.0(理智 T) <-> 1.0(情感 F)。
     * 意义：F偏向情绪互动，T偏向逻辑和效率任务。
     */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Nature", meta = (UIMin = "-1.0", UIMax = "1.0"))
    float FeelingDimension = 0.0f;

    /** 感知维度: -1.0(判断 J) <-> 1.0(感知 P)。
     * 意义：J倾向于维持现状，P倾向于追求新鲜感（影响决策切换频率）。
     */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Nature", meta = (UIMin = "-1.0", UIMax = "1.0"))
    float PerceivingDimension = 0.0f;
};

/**
 * FDIY_AIPhysical: 生理数值快照
 * 范围说明: [-1.0, 1.0]。
 * 0.0 为完美平衡态。
 */
USTRUCT(BlueprintType)
struct FDIY_AIPhysical
{
    GENERATED_BODY()

    /** 饱腹感: -1.0(极度饥饿) <-> 1.0(极端撑胀)
     * 意义：当处于负值且任务有负向 Fullness_Affinity 时，会产生吸引力。
     */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Body", meta = (UIMin = "-1.0", UIMax = "1.0"))
    float Fullness = 0.0f;

    /** 活力/精力: -1.0(精疲力竭) <-> 1.0(精力充沛) */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Body", meta = (UIMin = "-1.0", UIMax = "1.0"))
    float Vitality = 0.0f;

    /** 健康度: -1.0(垂死) <-> 1.0(巅峰状态) */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Body", meta = (UIMin = "-1.0", UIMax = "1.0"))
    float Health = 0.0f;
};

/**
 * FDIY_PetJudgingProfile: AI大脑背景配置(决策权重)
 */
USTRUCT(BlueprintType)
struct FDIY_PetJudgingProfile
{
    GENERATED_BODY()

    /** 性格权重: 决定AI多大程度上按照天性行事。建议 [0.0 - 2.0] */
    UPROPERTY(EditAnywhere, Category = "GlobalWeights")
    float PersonalityWeight = 1.0f;

    /** 生存权重: 决定AI多大程度上受生理需求支配。建议 [1.0 - 5.0] */
    UPROPERTY(EditAnywhere, Category = "GlobalWeights")
    float SurvivalWeight = 1.5f;

    /** 节律权重: 守时程度。 */
    UPROPERTY(EditAnywhere, Category = "GlobalWeights")
    float RhythmWeight = 1.0f;

    /** 经验/标签权重。 */
    UPROPERTY(EditAnywhere, Category = "GlobalWeights")
    float ExperienceWeight = 1.0f;

    /** 欲望放大倍率曲线:
     * X轴: 生理数值 [-1.0, 1.0]
     * Y轴: 放大倍率 [1.0 - 20.0+]
     * 建议配置为 U 型：在 -1.0 和 1.0 处数值极高，在 0.0 处为 1.0。
     */
    UPROPERTY(EditAnywhere, Category = "Drives")
    FRuntimeFloatCurve PhysioUrgencyCurve;

    /** 决策切换门槛: 只有新意图比当前高出此分才切换，防止行为抖动。 */
    UPROPERTY(EditAnywhere, Category = "Mind Control")
    float DecisionSwitchThreshold = 10.0f;
};

USTRUCT(BlueprintType)
struct FDIY_PetSoulContext
{
    GENERATED_BODY()

    /** 动态性格：会随时间、环境或特殊事件发生缓慢偏移 */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mind", meta = (ToolTip = "Dynamic MBTI-like characteristics that can evolve over time."))
    FDIY_AICharacteristic Characteristics;

    /** 动态生理状态：会随时间、环境或特殊事件发生缓慢偏移 */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Body", meta = (ToolTip = "Dynamic Survive Situation"))
    FDIY_AIPhysical Survive;

    /** 动态判断配置：会随时间、环境或特殊事件发生缓慢偏移 */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Body", meta = (ToolTip = "Judging Profile"))
    FDIY_PetJudgingProfile JudgingProfile;

    /** * 状态标签容器：统一存储健康(病、伤)、经历(恐惧、喜好)及规则禁忌(不吸烟)。
     * BrainCenterST 会遍历此容器，对比 Routine 配置中的 TagScoreModifiers 进行调分。
     * 精神疾病: Status.Mental.Depression (抑郁), Status.Mental.Mania (狂躁)
     * 物理疾病: Status.Physical.Fever (发烧), Status.Physical.Disabled (残疾)
     */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Status", meta = (ToolTip = "Unified container for Health, Experience, and Rules/Taboos tags."))
    FGameplayTagContainer ActiveStatusTags;
};

/**
 * FDIY_RoutineConfig: 任务(行为)的吸引力配置画像
 */
USTRUCT(BlueprintType)
struct FDIY_RoutineConfig
{
    GENERATED_BODY()

    /** 任务标识 */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Identity")
    FGameplayTag RoutineTag;

    // --- 性格匹配倾向 (Affinity) ---
    // 范围: 建议 [-100.0, 100.0]
    // 举例: 聚会任务 E_Affinity = 80。对外向(1.0)AI贡献80分，对内向(-1.0)AI贡献-80分。

    UPROPERTY(EditAnywhere, Category = "Scoring|Nature")
    float E_Affinity = 0.0f;
    UPROPERTY(EditAnywhere, Category = "Scoring|Nature")
    float N_Affinity = 0.0f;
    UPROPERTY(EditAnywhere, Category = "Scoring|Nature")
    float F_Affinity = 0.0f;
    UPROPERTY(EditAnywhere, Category = "Scoring|Nature")
    float P_Affinity = 0.0f;

    // --- 生理偏好匹配 (Physiological Affinity) ---
    // 范围: 建议 [-100.0, 100.0]
    // 逻辑: Status * Affinity * Multiplier

    /** 进食倾向:
     * 设为负值(如 -80): 极其吸引饥饿者(Fullness < 0)。
     * 设为正值(如 80): 极其吸引吃撑者(如：消食运动)。
     */
    UPROPERTY(EditAnywhere, Category = "Scoring|PhysioAffinity")
    float Fullness_Affinity = 0.0f;

    /** 休息倾向:
     * 设为负值(如 -60): 吸引疲惫者(Vitality < 0)，如：睡觉。
     * 设为正值(如 60): 吸引精力旺盛者(Vitality > 0)，如：健身。
     */
    UPROPERTY(EditAnywhere, Category = "Scoring|PhysioAffinity")
    float Vitality_Affinity = 0.0f;

    /** 健康修复倾向: 设为负值吸引病患。 */
    UPROPERTY(EditAnywhere, Category = "Scoring|PhysioAffinity")
    float Health_Affinity = 0.0f;

    // --- 执行后的影响 (Impact) ---
    // 范围: [-1.0, 1.0] (每秒/每分钟改变量)

    UPROPERTY(EditAnywhere, Category = "Impact")
    float FullnessImpact = 0.0f;
    UPROPERTY(EditAnywhere, Category = "Impact")
    float VitalityImpact = 0.0f;
    UPROPERTY(EditAnywhere, Category = "Impact")
    float HealthImpact = 0.0f;

    // --- 其他修正 ---

    /** 节律时段白送分: 建议 [0.0 - 100.0]。符合时间段就送。 */
    UPROPERTY(EditAnywhere, Category = "Scoring|Rhythm")
    float InTimeSlotBonus = 50.0f;
    // --- D. 节律与标签 ---
    UPROPERTY(EditAnywhere, Category = "Scoring|Rhythm")
    TArray<FDIY_TimeRange> PreferredTimeSlots;
    /** 标签修正: Key(标签) -> Value(分数)。如: Status.Mental.Anxiety -> -100.0 */
    UPROPERTY(EditAnywhere, Category = "Scoring|Tags")
    TMap<FGameplayTag, float> TagScoreModifiers;
};
