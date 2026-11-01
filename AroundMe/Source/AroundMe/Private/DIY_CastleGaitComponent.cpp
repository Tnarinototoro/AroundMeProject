// Copyright Epic Games, Inc. All Rights Reserved.

#include "DIY_CastleGaitComponent.h"
#include "DrawDebugHelpers.h"
#include "Engine/World.h"
#include "GameFramework/Actor.h"
#include "Components/SceneComponent.h"

UDIY_CastleGaitComponent::UDIY_CastleGaitComponent()
{
	// 组件自己 tick：Pawn 不需要再显式调用 UpdateGait
	PrimaryComponentTick.bCanEverTick = true;
	PrimaryComponentTick.bStartWithTickEnabled = true;
}

void UDIY_CastleGaitComponent::BeginPlay()
{
	Super::BeginPlay();

	// 先在 Owner 身上按名字找 ToeMarker_0..3（蓝图里手工加的组件）
	CollectMarkersByName();

	// 没找到就运行时自己建一组（保证永远有东西可用）
	if (ToeMarkers.Num() == 0)
	{
		CreateToeMarkers();
	}

	RebuildFromMarkers();
}

void UDIY_CastleGaitComponent::CollectMarkersByName()
{
	AActor* Owner = GetOwner();
	if (!Owner)
	{
		return;
	}

	TArray<USceneComponent*> SceneComps;
	Owner->GetComponents<USceneComponent>(SceneComps);

	ToeMarkers.Reset();
	ToeMarkers.SetNum(4);

	for (USceneComponent* Comp : SceneComps)
	{
		if (!Comp)
		{
			continue;
		}

		const FString Name = Comp->GetName();
		if (!Name.StartsWith(TEXT("ToeMarker_")))
		{
			continue;
		}

		const FString IndexPart = Name.RightChop(FCString::Strlen(TEXT("ToeMarker_")));
		const int32 Index = FCString::Atoi(*IndexPart);
		if (Index >= 0 && Index < 4)
		{
			ToeMarkers[Index] = Comp;
		}
	}

	// 有任何一个槽是空的，就当没配好（交给 CreateToeMarkers 兼底）
	for (const TObjectPtr<USceneComponent>& Marker : ToeMarkers)
	{
		if (!Marker)
		{
			ToeMarkers.Reset();
			break;
		}
	}
}

void UDIY_CastleGaitComponent::TickComponent(float DeltaTime, ELevelTick TickType,
	FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (!bInitialized || Feet.Num() == 0)
	{
		return;
	}

	if (AActor* Owner = GetOwner())
	{
		UpdateGait(Owner->GetActorTransform(), DeltaTime);
	}
}

void UDIY_CastleGaitComponent::CreateToeMarkers()
{
	AActor* Owner = GetOwner();
	if (!Owner)
	{
		return;
	}

	USceneComponent* Root = Owner->GetRootComponent();
	if (!Root)
	{
		return;
	}

	// 默认摆成一个包围盒，用户再在视口里拖
	const FVector Defaults[4] = {
		FVector(11725.f, 0.f, 0.f),      // 前
		FVector(0.f, 11772.f, 0.f),      // 右
		FVector(-11742.f, 0.f, 0.f),     // 后
		FVector(0.f, -11488.f, 0.f)      // 左
	};

	ToeMarkers.Reset();

	for (int32 Index = 0; Index < 4; ++Index)
	{
		const FName MarkerName(*FString::Printf(TEXT("ToeMarker_%d"), Index));

		USceneComponent* Marker = NewObject<USceneComponent>(Owner, MarkerName);
		if (!Marker)
		{
			continue;
		}

		Marker->SetFlags(RF_Transactional);
		Owner->AddInstanceComponent(Marker);
		Marker->AttachToComponent(Root, FAttachmentTransformRules::KeepRelativeTransform);
		Marker->SetRelativeLocation(Defaults[Index]);
		Marker->RegisterComponent();

		ToeMarkers.Add(Marker);
	}

	RebuildFromMarkers();
}

void UDIY_CastleGaitComponent::RebuildFromMarkers()
{
	if (ToeMarkers.Num() == 0)
	{
		return;
	}

	AActor* Owner = GetOwner();
	if (!Owner)
	{
		return;
	}

	TArray<FVector> Local;
	Local.Reserve(ToeMarkers.Num());

	const FTransform OwnerXform = Owner->GetActorTransform();
	for (const TObjectPtr<USceneComponent>& Marker : ToeMarkers)
	{
		if (!Marker)
		{
			continue;
		}
		const FVector World = Marker->GetComponentLocation();
		Local.Add(OwnerXform.InverseTransformPosition(World));
	}

	if (Local.Num() > 0)
	{
		InitializeFeet(Local);
	}
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

		// 对角线分组：0/2 一组、1/3 一组，两组错开半个周期
		const bool bGroupA = (Index % 2 == 0);
		Foot.StaticPhaseOffset = bGroupA ? 0.f : 0.5f;

		Foot.CurrentPhase = 0.f;
		Foot.TargetPhase = 0.f;
		Foot.PhaseWhenSwingEnds = 0.5f;
		Foot.State = EDIY_GaitFootState::Fixed;
		Foot.bAtRest = true;
		Foot.bInSwing = false;
		Foot.bWasInSwing = false;
		Foot.SettleElapsed = 0.f;
	}

	bInitialized = NumFeet > 0;
	GlobalPhase = 0.f;
	CurrentSpeed = 0.f;
	CurrentPhaseSpeed = PhaseSpeedMin;
	CurrentPercentOfMaxSpeed = 0.f;
	AccumulatedTime = 0.f;
	bHasPrevRoot = false;
}

FVector UDIY_CastleGaitComponent::ResolveCenter() const
{
	const AActor* Owner = GetOwner();
	if (!Owner)
	{
		return CenterPointOffset;
	}

	const FTransform OwnerXform = Owner->GetActorTransform();

	// socket 非空：以 socket 位置为基准，再加偏移
	if (!CenterSocketName.IsNone())
	{
		if (const USceneComponent* Root = Owner->GetRootComponent())
		{
			if (Root->DoesSocketExist(CenterSocketName))
			{
				return Root->GetSocketLocation(CenterSocketName) + CenterPointOffset;
			}
		}
	}

	// 否则：Actor 位置 + 偏移
	return OwnerXform.TransformPosition(CenterPointOffset);
}

void UDIY_CastleGaitComponent::UpdateFixedPoints(const FTransform& RootWorld)
{
	UWorld* World = GetWorld();
	const FVector Center = ResolveCenter();

	for (int32 Index = 0; Index < Feet.Num(); ++Index)
	{
		FDIY_GaitFoot& Foot = Feet[Index];

		// 引导点（SceneComponent）的世界平面位置；没有就拿 Actor 变换 + 本地偏移
		FVector Flat = Foot.RestLocation;
		if (ToeMarkers.IsValidIndex(Index) && ToeMarkers[Index])
		{
			Flat = ToeMarkers[Index]->GetComponentLocation();
		}
		else
		{
			Flat = RootWorld.TransformPosition(FVector(Foot.RestLocation.X, Foot.RestLocation.Y, 0.f));
		}

		// 地面高度：从引导点上方往下打一条 trace
		bool bHit = false;
		FHitResult Hit;
		if (World)
		{
			const FVector Start = Flat + FVector(0.f, 0.f, TraceUp);
			const FVector End = Flat - FVector(0.f, 0.f, TraceDown);
			FCollisionQueryParams Params(SCENE_QUERY_STAT(CastleGaitGround), false, GetOwner());
			bHit = World->LineTraceSingleByChannel(
				Hit, Start, End, GroundTraceChannel, Params);
		}

		if (bHit)
		{
			Flat.Z = Hit.ImpactPoint.Z;
		}
		else
		{
			Flat.Z = Center.Z + FallbackGroundZ;
		}

		Foot.FixedPoint = Flat;
	}
}

void UDIY_CastleGaitComponent::UpdateGait(const FTransform& RootWorld, float DeltaSeconds)
{
	if (!bInitialized || Feet.Num() == 0 || DeltaSeconds <= KINDA_SMALL_NUMBER)
	{
		return;
	}

	// 每一帧都刷新最终落点（引导点随手拖 + 地面 trace）
	UpdateFixedPoints(RootWorld);

	// 第一次调用：把脚摆到固定点上，避免从原点弹过来
	if (!bHasPrevRoot)
	{
		bHasPrevRoot = true;
		PrevRootLocation = RootWorld.GetLocation();

		for (FDIY_GaitFoot& Foot : Feet)
		{
			Foot.PlantedLocation = Foot.FixedPoint;
			Foot.TargetLocation = Foot.FixedPoint;
			Foot.SpringLocation = Foot.FixedPoint;
			Foot.SpringVelocity = FVector::ZeroVector;
			Foot.StrideOrigin = Foot.FixedPoint;
			Foot.CurrentLocation = Foot.FixedPoint;
			Foot.StrideHeight = StepHeight * 0.2f;
			Foot.CurrentPhase = 0.f;
			Foot.TargetPhase = 0.f;
			Foot.State = EDIY_GaitFootState::Fixed;
			Foot.bAtRest = true;
			Foot.bInSwing = false;
			Foot.bWasInSwing = false;
		}
		return;
	}

	// 速度取自城堡的实际位移
	const FVector RootDelta = RootWorld.GetLocation() - PrevRootLocation;
	const float ActualSpeed = RootDelta.Size() / DeltaSeconds;
	PrevRootLocation = RootWorld.GetLocation();

	CurrentSpeed = FMath::Clamp(ActualSpeed, 0.f, SpeedMax);
	CurrentPercentOfMaxSpeed = (SpeedMax > SpeedMin)
		? FMath::Clamp(FMath::GetRangePct(SpeedMin, SpeedMax, CurrentSpeed), 0.f, 1.f)
		: 0.f;
	CurrentPhaseSpeed = FMath::Lerp(PhaseSpeedMin, PhaseSpeedMax, CurrentPercentOfMaxSpeed);

	// 固定步长子步进
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
		AccumulatedTime = 0.f;
	}

	if (bDrawDebug && GetWorld())
	{
		for (const FDIY_GaitFoot& Foot : Feet)
		{
			FColor StateColor = FColor::Green;
			switch (Foot.State)
			{
			case EDIY_GaitFootState::Fixed:          StateColor = FColor::Green;  break;
			case EDIY_GaitFootState::Lifting:        StateColor = FColor::Red;    break;
			case EDIY_GaitFootState::Landing:        StateColor = FColor::Orange; break;
			case EDIY_GaitFootState::LandingToFixed: StateColor = FColor::Cyan;   break;
			default: break;
			}

			DrawDebugSphere(GetWorld(), Foot.CurrentLocation, 60.f, 12, StateColor, false, -1.f, 0, 4.f);
			DrawDebugSphere(GetWorld(), Foot.FixedPoint, 30.f, 8, FColor::White, false, -1.f, 0, 2.f);
			DrawDebugLine(GetWorld(), Foot.CurrentLocation, Foot.FixedPoint, FColor::Yellow, false, -1.f, 0, 2.f);
		}
	}
}

void UDIY_CastleGaitComponent::SimulateStep(const FTransform& RootWorld, float Dt)
{
	GlobalPhase = WrapPhase(GlobalPhase + CurrentPhaseSpeed * Dt);
	UpdateFootTargets(RootWorld, Dt);
	AnimateFeet(Dt);
}

void UDIY_CastleGaitComponent::UpdateFootTargets(const FTransform& RootWorld, float Dt)
{
	for (int32 Index = 0; Index < Feet.Num(); ++Index)
	{
		FDIY_GaitFoot& Foot = Feet[Index];

		const float DistToFixed = FVector::Dist2D(Foot.PlantedLocation, Foot.FixedPoint);
		const float PhaseOfThisFoot = WrapPhase(GlobalPhase + Foot.StaticPhaseOffset);

		switch (Foot.State)
		{
		case EDIY_GaitFootState::Fixed:
		{
			// 钉死在落点，绝对不动
			Foot.CurrentLocation = Foot.PlantedLocation;
			Foot.TargetLocation = Foot.PlantedLocation;
			Foot.SpringLocation = Foot.PlantedLocation;
			Foot.SpringVelocity = FVector::ZeroVector;
			Foot.bInSwing = false;
			Foot.bAtRest = true;

			// 距固定点足够远、且轮到这只脚所在的那半周期 → 开始抬脚
			const bool bItsTurn = PhaseOfThisFoot < 0.5f;
			if (DistToFixed > MinimumStepLength && bItsTurn)
			{
				Foot.State = EDIY_GaitFootState::Lifting;
				Foot.bAtRest = false;
				Foot.bInSwing = true;
				Foot.bWasInSwing = false;
				Foot.bUnplantedThisTick = true;
				Foot.CurrentPhase = 0.f;
				Foot.StrideOrigin = Foot.PlantedLocation;
				Foot.SpringLocation = Foot.PlantedLocation;
				Foot.SpringVelocity = FVector::ZeroVector;
				Foot.TargetLocation = Foot.PlantedLocation;

				Foot.StrideHeight = FMath::Lerp(StepHeight * 0.2f, StepHeight, CurrentPercentOfMaxSpeed);

				const float PercentAtMin = FMath::Clamp(PercentOfStrideInAir, 0.1f, 0.95f);
				const float PercentAtMax = FMath::Clamp(
					PercentAtMin + AirExtensionAtMaxSpeed, PercentAtMin, 0.95f);
				Foot.PhaseWhenSwingEnds = FMath::Lerp(PercentAtMin, PercentAtMax, CurrentPercentOfMaxSpeed);
			}
			break;
		}

		case EDIY_GaitFootState::Lifting:
		case EDIY_GaitFootState::Landing:
		{
			Foot.bUnplantedThisTick = false;

			// 摆动期：目标点朝固定点推进，步长受速度钳制，用弹簧软跟随
			const float MaxStrideLength = (CurrentPhaseSpeed > KINDA_SMALL_NUMBER)
				? (CurrentSpeed / CurrentPhaseSpeed) * 1.5f
				: 3000.f;

			const FVector OriginToIdeal = Foot.FixedPoint - Foot.StrideOrigin;
			const float IdealDistance = OriginToIdeal.Size();
			const float StepLength = FMath::Min(IdealDistance, MaxStrideLength);
			const FVector Direction = (IdealDistance > KINDA_SMALL_NUMBER)
				? OriginToIdeal / IdealDistance
				: FVector::ZeroVector;
			const FVector NewTarget = Foot.StrideOrigin + Direction * StepLength;

			const float OldDistSq = FVector::DistSquared(Foot.FixedPoint, Foot.TargetLocation);
			const float NewDistSq = FVector::DistSquared(Foot.FixedPoint, NewTarget);
			if (NewDistSq <= OldDistSq)
			{
				SpringDamperVector(Foot.SpringLocation, Foot.SpringVelocity, NewTarget,
					TargetSpringStiffness, TargetSpringDamping, Dt);
				Foot.TargetLocation = Foot.SpringLocation;
			}

			// 相位推进
			Foot.CurrentPhase = FMath::Clamp(Foot.CurrentPhase + CurrentPhaseSpeed * Dt, 0.f, 1.f);

			if (Foot.State == EDIY_GaitFootState::Lifting &&
				Foot.CurrentPhase >= Foot.PhaseWhenSwingEnds)
			{
				Foot.State = EDIY_GaitFootState::Landing;
			}

			if (Foot.CurrentPhase >= 1.f)
			{
				Foot.PlantedLocation = Foot.FixedPoint;
				Foot.CurrentLocation = Foot.FixedPoint;
				Foot.State = EDIY_GaitFootState::LandingToFixed;
				Foot.SettleElapsed = 0.f;
				Foot.bInSwing = false;
				Foot.SpringLocation = Foot.FixedPoint;
				Foot.SpringVelocity = FVector::ZeroVector;
			}
			break;
		}

		case EDIY_GaitFootState::LandingToFixed:
		{
			Foot.bUnplantedThisTick = false;
			Foot.SettleElapsed += Dt;

			SpringDamperVector(Foot.CurrentLocation, Foot.SpringVelocity, Foot.FixedPoint,
				TargetSpringStiffness * 3.f, TargetSpringDamping * 1.5f, Dt);

			const float Residual = FVector::Dist(Foot.CurrentLocation, Foot.FixedPoint);
			if (Residual <= SettleTolerance || Foot.SettleElapsed >= SettleTime)
			{
				Foot.PlantedLocation = Foot.FixedPoint;
				Foot.CurrentLocation = Foot.FixedPoint;
				Foot.State = EDIY_GaitFootState::Fixed;
				Foot.bAtRest = true;
				Foot.SettleElapsed = 0.f;
			}
			break;
		}

		default:
			break;
		}
	}
}

void UDIY_CastleGaitComponent::AnimateFeet(float Dt)
{
	(void)Dt;

	for (FDIY_GaitFoot& Foot : Feet)
	{
		if (Foot.State != EDIY_GaitFootState::Lifting && Foot.State != EDIY_GaitFootState::Landing)
		{
			continue;
		}

		const float PercentStep = (Foot.PhaseWhenSwingEnds > KINDA_SMALL_NUMBER)
			? FMath::Clamp(Foot.CurrentPhase / Foot.PhaseWhenSwingEnds, 0.f, 1.f)
			: 1.f;

		const float PercentEased = EaseInOutNorm(PercentStep, StepEaseIn, StepEaseOut);
		const FVector Flat = FMath::Lerp(Foot.StrideOrigin, Foot.TargetLocation, PercentEased);
		const float HeightOffset = Foot.StrideHeight * FMath::Sin(PercentStep * PI);

		Foot.CurrentLocation = Flat + FVector(0.f, 0.f, HeightOffset);
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

float UDIY_CastleGaitComponent::EaseInOutNorm(float Input, float EaseIn, float EaseOut)
{
	const float T = FMath::Clamp(Input, 0.f, 1.f);
	const float InAmount = FMath::Clamp(EaseIn, 0.f, 1.f);
	const float OutAmount = FMath::Clamp(EaseOut, 0.f, 1.f);

	const float Exponent = 1.f + (InAmount + OutAmount) * 1.5f;
	const float SinCurve = 0.5f - 0.5f * FMath::Cos(T * PI);
	return FMath::Lerp(T, SinCurve, FMath::Clamp(Exponent - 1.f, 0.f, 1.f));
}

void UDIY_CastleGaitComponent::SpringDamperVector(
	FVector& InOutValue, FVector& InOutVelocity,
	const FVector& Target, float Stiffness, float Damping, float Dt)
{
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

EDIY_GaitFootState UDIY_CastleGaitComponent::GetFootState(int32 Index) const
{
	if (Feet.IsValidIndex(Index))
	{
		return Feet[Index].State;
	}
	return EDIY_GaitFootState::Fixed;
}

FVector UDIY_CastleGaitComponent::GetFixedPoint(int32 Index) const
{
	if (Feet.IsValidIndex(Index))
	{
		return Feet[Index].FixedPoint;
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
