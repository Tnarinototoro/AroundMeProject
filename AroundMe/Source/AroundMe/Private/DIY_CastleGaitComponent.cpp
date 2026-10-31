// Copyright Epic Games, Inc. All Rights Reserved.

#include "DIY_CastleGaitComponent.h"
#include "DrawDebugHelpers.h"
#include "Engine/World.h"

UDIY_CastleGaitComponent::UDIY_CastleGaitComponent()
{
	PrimaryComponentTick.bCanEverTick = false; // 由所属 Pawn 显式调用 UpdateGait
	PrimaryComponentTick.bStartWithTickEnabled = false;
}

void UDIY_CastleGaitComponent::BeginPlay()
{
	Super::BeginPlay();
}

void UDIY_CastleGaitComponent::InitializeFeet(const TArray<FVector>& FootRestLocal)
{
	Feet.Reset();
	Feet.SetNum(FootRestLocal.Num());

	const int32 NumFeet = Feet.Num();
	for (int32 Index = 0; Index < NumFeet; ++Index)
	{
		FDIY_GaitFoot& Foot = Feet[Index];
		Foot.RestLocation = FootRestLocal[Index];

		// 对角步态：0 和 3 一组、1 和 2 一组，两组错开半个周期
		const bool bGroupA = (Index == 0 || Index == 3);
		Foot.StaticPhaseOffset = bGroupA ? 0.f : 0.5f;

		Foot.CurrentPhase = 1.f;
		Foot.TargetPhase = 1.f;
		Foot.PhaseWhenSwingEnds = 0.5f;
		Foot.bAtRest = true;
		Foot.bInSwing = false;
		Foot.bWasInSwing = false;
	}

	bInitialized = NumFeet > 0;
	GlobalPhase = 0.f;
	CurrentSpeed = 0.f;
	CurrentPhaseSpeed = PhaseSpeedMin;
	CurrentPercentOfMaxSpeed = 0.f;
	AccumulatedTime = 0.f;
	bHasPrevRoot = false;
}

void UDIY_CastleGaitComponent::UpdateGait(const FTransform& RootWorld, float DeltaSeconds)
{
	if (!bInitialized || Feet.Num() == 0 || DeltaSeconds <= KINDA_SMALL_NUMBER)
	{
		return;
	}

	// 第一次调用：把脚摆到静止位置，避免从原点弹过来
	if (!bHasPrevRoot)
	{
		bHasPrevRoot = true;
		PrevRootLocation = RootWorld.GetLocation();

		for (FDIY_GaitFoot& Foot : Feet)
		{
			const FVector WorldRest = RootWorld.TransformPosition(Foot.RestLocation);
			Foot.PlantedLocation = WorldRest;
			Foot.TargetLocation = WorldRest;
			Foot.SpringLocation = WorldRest;
			Foot.SpringVelocity = FVector::ZeroVector;
			Foot.StrideOrigin = WorldRest;
			Foot.CurrentLocation = WorldRest;
			Foot.StrideHeight = StepHeight * 0.2f;
			Foot.CurrentPhase = 1.f;
			Foot.TargetPhase = 1.f;
			Foot.bAtRest = true;
			Foot.bInSwing = false;
			Foot.bWasInSwing = false;
		}
		return;
	}

	// 速度取自城堡的实际位移（和 Locomotor 里"根目标移动"的语义一致）
	const FVector RootDelta = RootWorld.GetLocation() - PrevRootLocation;
	const float ActualSpeed = RootDelta.Size() / DeltaSeconds;
	PrevRootLocation = RootWorld.GetLocation();

	CurrentSpeed = FMath::Clamp(ActualSpeed, 0.f, SpeedMax);
	CurrentPercentOfMaxSpeed = (SpeedMax > SpeedMin)
		? FMath::Clamp(FMath::GetRangePct(SpeedMin, SpeedMax, CurrentSpeed), 0.f, 1.f)
		: 0.f;
	CurrentPhaseSpeed = FMath::Lerp(PhaseSpeedMin, PhaseSpeedMax, CurrentPercentOfMaxSpeed);

	// 固定步长子步进：外部掉帧不改变轨迹形状
	AccumulatedTime += DeltaSeconds;
	int32 Steps = 0;
	while (AccumulatedTime >= FixedTimeStep && Steps < MaxSubSteps)
	{
		SimulateStep(RootWorld, FixedTimeStep);
		AccumulatedTime -= FixedTimeStep;
		++Steps;
	}
	if (AccumulatedTime > FixedTimeStep * MaxSubSteps)
	{
		AccumulatedTime = 0.f; // 卡顿太厉害时丢弃积压，避免追帧雪崩
	}

	if (bDrawDebug && GetWorld())
	{
		for (const FDIY_GaitFoot& Foot : Feet)
		{
			DrawDebugLine(GetWorld(), Foot.CurrentLocation, Foot.TargetLocation,
				Foot.bInSwing ? FColor::Red : FColor::Green, false, -1.f, 0, 2.f);
			DrawDebugSphere(GetWorld(), Foot.CurrentLocation, 40.f, 8,
				Foot.bInSwing ? FColor::Orange : FColor::Blue, false, -1.f);
		}
	}
}

void UDIY_CastleGaitComponent::SimulateStep(const FTransform& RootWorld, float Dt)
{
	// 1. 推进全局相位
	GlobalPhase = WrapPhase(GlobalPhase + CurrentPhaseSpeed * Dt);

	// 2. 更新每只脚的相位与目标
	UpdateFootTargets(RootWorld, Dt);

	// 3. 按相位把脚摆到当前位置
	AnimateFeet(Dt);
}

void UDIY_CastleGaitComponent::UpdateFootTargets(const FTransform& RootWorld, float Dt)
{
	// 步长上限：一步最多跨多远（由速度与相位速度决定，防止高速时腿被拉断）
	const float MaxStrideLength = (CurrentPhaseSpeed > KINDA_SMALL_NUMBER)
		? (CurrentSpeed / CurrentPhaseSpeed) * 1.5f
		: 3000.f;

	for (FDIY_GaitFoot& Foot : Feet)
	{
		// 城堡移动后，这只脚"理想"应该站的位置
		const FVector IdealWorld = RootWorld.TransformPosition(Foot.RestLocation);
		const float DistanceFromPlanted = FVector::Dist(Foot.PlantedLocation, IdealWorld);

		// 目标相位：全局相位 + 本腿静态偏移
		Foot.TargetPhase = WrapPhase(GlobalPhase + Foot.StaticPhaseOffset);

		// 当前相位追赶目标相位（不直接赋值，防脚突跳）
		const float PhaseBlendRate = FMath::Clamp(CurrentPhaseSpeed * 2.f * Dt, 0.f, 1.f);
		Foot.bWasInSwing = Foot.bInSwing;

		// 距离足够远才允许迈步
		const bool bWantsToStep = DistanceFromPlanted > MinimumStepLength;
		if (Foot.bAtRest && bWantsToStep)
		{
			Foot.bAtRest = false;
		}

		if (Foot.bAtRest)
		{
			Foot.CurrentPhase = 1.f;
			Foot.TargetPhase = 1.f;
			Foot.bInSwing = false;
		}
		else
		{
			Foot.CurrentPhase = BlendTowardsPhase(Foot.CurrentPhase, Foot.TargetPhase, PhaseBlendRate);
			Foot.bInSwing = Foot.CurrentPhase < Foot.PhaseWhenSwingEnds;
		}

		// 抬脚这一帧：锁死本段摆动的起点、抬脚高度、摆动占比
		Foot.bUnplantedThisTick = (!Foot.bWasInSwing && Foot.bInSwing);
		if (Foot.bUnplantedThisTick)
		{
			Foot.StrideOrigin = Foot.PlantedLocation;

			Foot.StrideHeight = FMath::Lerp(StepHeight * 0.2f, StepHeight, CurrentPercentOfMaxSpeed);

			const float PercentAtMin = FMath::Clamp(PercentOfStrideInAir, 0.1f, 0.95f);
			const float PercentAtMax = FMath::Clamp(
				PercentAtMin + AirExtensionAtMaxSpeed, PercentAtMin, 0.95f);
			Foot.PhaseWhenSwingEnds = FMath::Lerp(PercentAtMin, PercentAtMax, CurrentPercentOfMaxSpeed);

			// 弹簧重置到当前落点，避免继承上一段的速度
			Foot.SpringLocation = Foot.PlantedLocation;
			Foot.SpringVelocity = FVector::ZeroVector;
			Foot.TargetLocation = Foot.PlantedLocation;
		}

		// 摆动期：目标点朝理想落点推进，步长受速度钳制，并用弹簧软跟随
		if (Foot.bInSwing)
		{
			const FVector OriginToIdeal = IdealWorld - Foot.StrideOrigin;
			const float IdealDistance = OriginToIdeal.Size();
			const float StepLength = FMath::Min(IdealDistance, MaxStrideLength);

			const FVector Direction = (IdealDistance > KINDA_SMALL_NUMBER)
				? OriginToIdeal / IdealDistance
				: FVector::ZeroVector;
			const FVector NewTarget = Foot.StrideOrigin + Direction * StepLength;

			// 只接受"比上一帧更靠近终点"的目标；摆动中途急转时保持原目标
			const float OldDistSq = FVector::DistSquared(IdealWorld, Foot.TargetLocation);
			const float NewDistSq = FVector::DistSquared(IdealWorld, NewTarget);

			if (Foot.bUnplantedThisTick || NewDistSq <= OldDistSq)
			{
				SpringDamperVector(Foot.SpringLocation, Foot.SpringVelocity, NewTarget,
					TargetSpringStiffness, TargetSpringDamping, Dt);
				Foot.TargetLocation = Foot.SpringLocation;
			}
		}
		else
		{
			// 支撑期：脚钉死在落点，目标不需要再动
			Foot.TargetLocation = Foot.PlantedLocation;
			Foot.SpringLocation = Foot.PlantedLocation;
		}
	}
}

void UDIY_CastleGaitComponent::AnimateFeet(float Dt)
{
	(void)Dt;

	for (FDIY_GaitFoot& Foot : Feet)
	{
		// 支撑期：脚保持不动
		if (!Foot.bInSwing)
		{
			Foot.CurrentLocation = Foot.PlantedLocation;
			continue;
		}

		// 摆动期：把 0~PhaseWhenSwingEnds 重映射到 0~1
		const float PercentStep = (Foot.PhaseWhenSwingEnds > KINDA_SMALL_NUMBER)
			? FMath::Clamp(Foot.CurrentPhase / Foot.PhaseWhenSwingEnds, 0.f, 1.f)
			: 1.f;

		const float PercentEased = EaseInOutNorm(PercentStep, StepEaseIn, StepEaseOut);

		// 水平：缓入缓出插值
		const FVector Flat = FMath::Lerp(Foot.StrideOrigin, Foot.TargetLocation, PercentEased);

		// 垂直：sin 拱（峰值在摆动中点）
		const float HeightOffset = Foot.StrideHeight * FMath::Sin(PercentStep * PI);

		Foot.CurrentLocation = Flat + FVector(0.f, 0.f, HeightOffset);
		Foot.PlantedLocation = Flat;

		// 摆动结束时把脚钉在新落点上
		if (PercentStep >= 1.f)
		{
			Foot.CurrentLocation = Foot.TargetLocation;
			Foot.PlantedLocation = Foot.TargetLocation;
			Foot.bInSwing = false;
			Foot.bAtRest = true;
		}
	}
}

float UDIY_CastleGaitComponent::WrapPhase(float Phase)
{
	float Wrapped = FMath::Fmod(Phase, 1.f);
	if (Wrapped < 0.f)
	{
		Wrapped += 1.f;
	}
	return Wrapped;
}

float UDIY_CastleGaitComponent::BlendTowardsPhase(float Current, float Target, float Rate)
{
	// 沿最短方向插值，避免 0.99 -> 0.01 时绕整圈
	float Delta = Target - Current;
	if (Delta > 0.5f)
	{
		Delta -= 1.f;
	}
	else if (Delta < -0.5f)
	{
		Delta += 1.f;
	}
	return WrapPhase(Current + Delta * FMath::Clamp(Rate, 0.f, 1.f));
}

float UDIY_CastleGaitComponent::EaseInOutNorm(float Input, float EaseIn, float EaseOut)
{
	const float T = FMath::Clamp(Input, 0.f, 1.f);
	const float InAmount = FMath::Clamp(EaseIn, 0.f, 1.f);
	const float OutAmount = FMath::Clamp(EaseOut, 0.f, 1.f);

	// 两端对称的幂曲线：起点慢、中点最快、落点慢
	const float Exponent = 1.f + (InAmount + OutAmount) * 1.5f;
	const float SinCurve = 0.5f - 0.5f * FMath::Cos(T * PI); // 天然的两端缓
	return FMath::Lerp(T, SinCurve, FMath::Clamp(Exponent - 1.f, 0.f, 1.f));
}

void UDIY_CastleGaitComponent::SpringDamperVector(
	FVector& InOutValue, FVector& InOutVelocity,
	const FVector& Target, float Stiffness, float Damping, float Dt)
{
	// 二阶弹簧：a = -k*(x - target) - c*v
	const FVector Displacement = InOutValue - Target;
	InOutVelocity += (-Stiffness * Displacement - Damping * InOutVelocity) * Dt;
	InOutValue += InOutVelocity * Dt;
}

FVector UDIY_CastleGaitComponent::GetFootLocation(int32 Index) const
{
	if (Feet.IsValidIndex(Index))
	{
		return Feet[Index].CurrentLocation;
	}
	return FVector::ZeroVector;
}

bool UDIY_CastleGaitComponent::IsFootSwinging(int32 Index) const
{
	if (Feet.IsValidIndex(Index))
	{
		return Feet[Index].bInSwing;
	}
	return false;
}
