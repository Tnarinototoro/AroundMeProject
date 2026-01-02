#include "DIY_PetAIUtility.h"

float UDIY_PetAIUtility::CalculateRoutineScore(
    const FDIY_PetStatus &PetStatus,
    const FDIY_RoutineConfig &RoutineConfig,
    const FDIY_PetJudgingProfile &Profile,
    int32 CurrentHour,
    FDIY_RoutineScoreDetails &OutDetails)
{

    // --- 1. 性格适配计算 (Nature Score) ---
    // 公式: (维度 * 适配系数) * 全局权重
    OutDetails.NatureScore = (PetStatus.Characteristics.ExtraversionDimension * RoutineConfig.E_Affinity +
                              PetStatus.Characteristics.IntuitionDimension * RoutineConfig.N_Affinity +
                              PetStatus.Characteristics.FeelingDimension * RoutineConfig.F_Affinity +
                              PetStatus.Characteristics.PerceivingDimension * RoutineConfig.P_Affinity) *
                             Profile.PersonalityWeight;

    // --- 2. 生存压力计算 (Survival Score) ---
    // 从 Profile 的曲线采样压力，乘以 Routine 的驱动因子
    // 1. 计算基础生理得分 (类似MBTI计算)
    float RawFullnessScore = PetStatus.Survive.Fullness * RoutineConfig.Fullness_Affinity;
    float RawVitalityScore = PetStatus.Survive.Vitality * RoutineConfig.Vitality_Affinity;
    float RawHealthScore = PetStatus.Survive.Health * RoutineConfig.Health_Affinity;

    // 2. 获取当前的动态放大倍率
    // 如果当前饱腹度是 -0.9 (饿疯了)，采样曲线得到一个倍率，比如 8.0
    float FullnessMultiplier = Profile.PhysioUrgencyCurve.ExternalCurve->GetFloatValue(PetStatus.Survive.Fullness);
    float VitalityMultiplier = Profile.PhysioUrgencyCurve.ExternalCurve->GetFloatValue(PetStatus.Survive.Vitality);
    float HealthMultiplier = Profile.PhysioUrgencyCurve.ExternalCurve->GetFloatValue(PetStatus.Survive.Health);

    // 3. 应用放大并汇总
    OutDetails.SurvivalScore = ((RawFullnessScore * FullnessMultiplier) +
                                (RawVitalityScore * VitalityMultiplier) +
                                (RawHealthScore * HealthMultiplier)) *
                               Profile.SurvivalWeight;

    // --- 3. 节律/习惯计算 (Rhythm Score) ---
    OutDetails.RhythmScore = 0.0f;
    for (const FDIY_TimeRange &Range : RoutineConfig.PreferredTimeSlots)
    {
        bool bInMatch = false;
        if (Range.StartHour <= Range.EndHour)
            bInMatch = (CurrentHour >= Range.StartHour && CurrentHour <= Range.EndHour);
        else // 跨午夜处理 (例如 22点 到 2点)
            bInMatch = (CurrentHour >= Range.StartHour || CurrentHour <= Range.EndHour);

        if (bInMatch)
        {
            OutDetails.RhythmScore = RoutineConfig.InTimeSlotBonus * Profile.RhythmWeight;
            break;
        }
    }

    // --- 4. 经验与标签修正 (Tag Score) ---
    OutDetails.TagScore = 0.0f;
    for (const FGameplayTag &ActiveTag : PetStatus.ActiveStatusTags)
    {
        if (RoutineConfig.TagScoreModifiers.Contains(ActiveTag))
        {
            OutDetails.TagScore += RoutineConfig.TagScoreModifiers[ActiveTag];
        }
    }
    OutDetails.TagScore *= Profile.ExperienceWeight;

    // --- 5. 汇总 ---
    OutDetails.TotalScore = OutDetails.NatureScore + OutDetails.SurvivalScore + OutDetails.RhythmScore + OutDetails.TagScore;

    return OutDetails.TotalScore;
}
