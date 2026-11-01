// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "DIY_CastleGaitComponent.generated.h"

class USceneComponent;

/**
 * 单只脚的运行状态。
 *
 *  Fixed          钉死在地面落点，绝对不动（城堡在移动，脚被"拖着"）
 *  Lifting        抬脚前半段：抬离地面、水平朝目标推进
 *  Landing        下落段：高度回落，继续朝目标收拢
 *  LandingToFixed 落地后的小残差吸附（处理地面高度变化 / 目标点微动），进容差后回到 Fixed
 */
UENUM(BlueprintType)
enum class EDIY_GaitFootState : uint8
{
	Fixed,
	Lifting,
	Landing,
	LandingToFixed
};

/**
 * 单只脚的运行时状态。算法移植自 Locomotor 插件（FLocomotorFoot），
 * 保留了它防抖的几个关键机制：
 *  - 相位驱动，不直接赋值（当前相位追赶目标相位）
 *  - 水平位移用 EaseInOut，垂直用 sin(pi*t) 拱形
 *  - 抬脚那一帧锁定步高/摆动占比，整段摆动期不再变
 *  - 摆动中的目标点用阻尼弹簧跟随，拒绝"比上一帧更远离终点"的目标
 */
USTRUCT(BlueprintType)
struct FDIY_GaitFoot
{
	GENERATED_BODY()

	/** 该腿引导点的本 Actor 空间位置（来自 ToeMarker 组件） */
	UPROPERTY(BlueprintReadOnly, Category = "Gait")
	FVector RestLocation = FVector::ZeroVector;

	/** 当前这一帧算出来的"最终固定落点"（世界空间，Z 来自地面 trace） */
	UPROPERTY(BlueprintReadOnly, Category = "Gait")
	FVector FixedPoint = FVector::ZeroVector;

	/** 上一段摆动的落点（世界空间）。支撑期脚一直停在这里 */
	UPROPERTY(BlueprintReadOnly, Category = "Gait")
	FVector PlantedLocation = FVector::ZeroVector;

	/** 本段摆动的目标点（世界空间），摆动期用弹簧软跟随 */
	UPROPERTY(BlueprintReadOnly, Category = "Gait")
	FVector TargetLocation = FVector::ZeroVector;

	/** 弹簧当前值 */
	UPROPERTY(BlueprintReadOnly, Category = "Gait")
	FVector SpringLocation = FVector::ZeroVector;

	/** 弹簧速度 */
	UPROPERTY(BlueprintReadOnly, Category = "Gait")
	FVector SpringVelocity = FVector::ZeroVector;

	/** 本段摆动的起始点（抬脚瞬间锁定） */
	UPROPERTY(BlueprintReadOnly, Category = "Gait")
	FVector StrideOrigin = FVector::ZeroVector;

	/** 本段摆动锁定的抬脚高度 */
	UPROPERTY(BlueprintReadOnly, Category = "Gait")
	float StrideHeight = 0.f;

	/** 当前相位 0~1 */
	UPROPERTY(BlueprintReadOnly, Category = "Gait")
	float CurrentPhase = 1.f;

	/** 目标相位 0~1 */
	UPROPERTY(BlueprintReadOnly, Category = "Gait")
	float TargetPhase = 1.f;

	/** 本段摆动在哪个相位结束（抬脚时锁定） */
	UPROPERTY(BlueprintReadOnly, Category = "Gait")
	float PhaseWhenSwingEnds = 0.5f;

	/** 静态相位偏移（对角步态：同一组两条腿相位一致） */
	UPROPERTY(BlueprintReadOnly, Category = "Gait")
	float StaticPhaseOffset = 0.f;

	/** 当前状态 */
	UPROPERTY(BlueprintReadOnly, Category = "Gait")
	EDIY_GaitFootState State = EDIY_GaitFootState::Fixed;

	UPROPERTY(BlueprintReadOnly, Category = "Gait")
	bool bInSwing = false;

	UPROPERTY(BlueprintReadOnly, Category = "Gait")
	bool bWasInSwing = false;

	/** 本帧刚抬脚 */
	UPROPERTY(BlueprintReadOnly, Category = "Gait")
	bool bUnplantedThisTick = false;

	UPROPERTY(BlueprintReadOnly, Category = "Gait")
	bool bAtRest = true;

	/** LandingToFixed 已经持续了多久 */
	UPROPERTY(BlueprintReadOnly, Category = "Gait")
	float SettleElapsed = 0.f;

	/** 当前脚的世界位置（已含抬脚高度） */
	UPROPERTY(BlueprintReadOnly, Category = "Gait")
	FVector CurrentLocation = FVector::ZeroVector;
};

/**
 * 移动城堡四足步态组件。
 *
 * 设计前提：
 *  - 城堡本体是权威运动源，这个组件不移动任何 Actor，只负责算脚在哪
 *  - 组件自己 Tick，不需要 Pawn 显式调用
 *  - 四条腿的平面位置由 4 个 ToeMarker（SceneComponent，挂在 Actor 下、随手拖）给出，
 *    最终落点的 Z 由这些点向下 trace 地面决定
 *  - 内部固定 120Hz 子步进，外部帧率变化不会改变脚部轨迹形状
 *
 * 用法：
 *  1. 在组件 Details 面板点 "Create Toe Markers"，生成 ToeMarker_0~3
 *  2. 在视口里把这 4 个点拖到四条腿应该落脚的位置（它们跟着 Actor 走，拖一次就行）
 *  3. 用 GetFootLocation(i) 取脚的世界位置，喂给 ABP 里的 ControlRig
 */
UCLASS(ClassGroup = (DIY), meta = (BlueprintSpawnableComponent))
class AROUNDME_API UDIY_CastleGaitComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UDIY_CastleGaitComponent();

	// ------------------------------------------------------------------
	// 配置：四条腿的引导点（SceneComponent，手动摆放）
	// ------------------------------------------------------------------

	/** 四条腿的引导点。按 Create Toe Markers 自动生成并填好 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gait|Setup")
	TArray<TObjectPtr<USceneComponent>> ToeMarkers;

	/** 在编辑器里点这个按钮：生成 4 个 ToeMarker 组件（挂在 Actor 根下，跟着 Actor 走） */
	UFUNCTION(CallInEditor, BlueprintCallable, Category = "Gait|Setup")
	void CreateToeMarkers();

	/** 中心点相对 Actor 的偏移（CenterSocketName 为空时，以 Actor 位置为基准） */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gait|Setup")
	FVector CenterPointOffset = FVector::ZeroVector;

	/** 非空则以该 socket 的位置为基准，再加 CenterPointOffset */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gait|Setup")
	FName CenterSocketName = NAME_None;

	/** 地面 trace 向上起点距离（cm） */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gait|Ground")
	float TraceUp = 3000.f;

	/** 地面 trace 向下距离（cm） */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gait|Ground")
	float TraceDown = 30000.f;

	/** 地面 trace 的通道 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gait|Ground")
	TEnumAsByte<ECollisionChannel> GroundTraceChannel = ECC_Visibility;

	/** 没打到地面时的兜底高度（相对原点，cm） */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gait|Ground")
	float FallbackGroundZ = -5000.f;

	/** LandingToFixed 的目标时间（秒）；到时间仍在容差外就强制回 Fixed */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gait|Settle")
	float SettleTime = 0.12f;

	/** 落地吸附的容差（cm），小于它就认为到位 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gait|Settle")
	float SettleTolerance = 3.f;

	// ------------------------------------------------------------------
	// 可调参数（对应 Locomotor 的同名设置）
	// ------------------------------------------------------------------

	/** 一步的最短距离（cm）。低于这个距离不会触发迈步 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gait|Movement")
	float MinimumStepLength = 1000.f;

	/** 最小移动速度（cm/s） */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gait|Movement")
	float SpeedMin = 200.f;

	/** 最大移动速度（cm/s） */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gait|Movement")
	float SpeedMax = 1200.f;

	/** 最小相位速度（周期/秒） */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gait|Movement")
	float PhaseSpeedMin = 0.6f;

	/** 最大相位速度（周期/秒） */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gait|Movement")
	float PhaseSpeedMax = 1.6f;

	/** 摆动期占整个周期的比例（抬脚到落地） */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gait|Step", meta = (ClampMin = "0.1", ClampMax = "0.9"))
	float PercentOfStrideInAir = 0.35f;

	/** 最大速度时额外增加的腾空占比 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gait|Step", meta = (ClampMin = "0.0", ClampMax = "0.6"))
	float AirExtensionAtMaxSpeed = 0.2f;

	/** 抬脚高度（cm） */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gait|Step")
	float StepHeight = 1500.f;

	/** 起步缓入（0 = 立刻移动，1 = 强缓入） */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gait|Step", meta = (ClampMin = "0.0", ClampMax = "1.0"))
	float StepEaseIn = 0.5f;

	/** 落地缓出 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gait|Step", meta = (ClampMin = "0.0", ClampMax = "1.0"))
	float StepEaseOut = 0.2f;

	/** 摆动中目标点的弹簧刚度 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gait|Smoothing")
	float TargetSpringStiffness = 10.f;

	/** 摆动中目标点的弹簧阻尼 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gait|Smoothing")
	float TargetSpringDamping = 2.f;

	/** 内部固定仿真步长（秒） */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gait|Simulation")
	float FixedTimeStep = 1.f / 120.f;

	/** 单帧最多跑几个子步，防止卡顿时雪崩 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gait|Simulation")
	int32 MaxSubSteps = 8;

	/** 是否输出调试线 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gait|Debug")
	bool bDrawDebug = false;

	// ------------------------------------------------------------------
	// 蓝图接口
	// ------------------------------------------------------------------

	/**
	 * 初始化四只脚的平面静止位置（在本 Actor 本地空间）。
	 * 一般不需要手动调用：ToeMarkers 存在时会自动从它们取。
	 */
	UFUNCTION(BlueprintCallable, Category = "Gait")
	void InitializeFeet(const TArray<FVector> &FootRestLocal);

	/** 按 ToeMarkers 重建四只脚（取它们相对 Actor 的平面位置） */
	UFUNCTION(BlueprintCallable, Category = "Gait")
	void RebuildFromMarkers();

	/**
	 * 手动推进步态（组件自己 Tick 时不需要调用；保留给需要精确控制的场合）。
	 */
	UFUNCTION(BlueprintCallable, Category = "Gait")
	void UpdateGait(const FTransform &RootWorld, float DeltaSeconds);

	/** 取第 Index 只脚的世界坐标（已含抬脚高度） */
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Gait")
	FVector GetFootLocation(int32 Index) const;

	/** 取第 Index 只脚当前的状态 */
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Gait")
	EDIY_GaitFootState GetFootState(int32 Index) const;

	/** 取第 Index 只脚这一帧的最终固定落点（世界空间） */
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Gait")
	FVector GetFixedPoint(int32 Index) const;

	/** 取第 Index 只脚是否在摆动期 */
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Gait")
	bool IsFootSwinging(int32 Index) const;

	/** 当前脚数量 */
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Gait")
	int32 GetFootCount() const { return Feet.Num(); }

	/** 当前全局相位（0~1） */
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Gait")
	float GetGlobalPhase() const { return GlobalPhase; }

	/** 当前仿真速度（cm/s） */
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Gait")
	float GetCurrentSpeed() const { return CurrentSpeed; }

protected:
	virtual void BeginPlay() override;
	virtual void TickComponent(float DeltaTime, ELevelTick TickType,
							   FActorComponentTickFunction *ThisTickFunction) override;

private:
	/** 按名字 ToeMarker_0..3 在 Owner 身上自动找引导点 */
	void CollectMarkersByName();

	/** 中心点：socket 位置 + CenterPointOffset（无 socket 则为 Actor 位置 + 偏移） */
	FVector ResolveCenter() const;

	/** 重新算四只脚的 FixedPoint（引导点平面位置 + 地面 trace） */
	void UpdateFixedPoints(const FTransform &RootWorld);

	/** 一次固定步长的仿真 */
	void SimulateStep(const FTransform &RootWorld, float Dt);

	/** 更新目标点与状态机 */
	void UpdateFootTargets(const FTransform &RootWorld, float Dt);

	/** 根据相位与状态把脚移动到当前应该的位置 */
	void AnimateFeet(float Dt);

	/** 相位环绕到 0~1 */
	static float WrapPhase(float Phase);

	/** 缓入缓出重映射 */
	static float EaseInOutNorm(float Input, float EaseIn, float EaseOut);

	/** 简易临界阻尼弹簧积分（矢量） */
	static void SpringDamperVector(
		FVector &InOutValue, FVector &InOutVelocity,
		const FVector &Target, float Stiffness, float Damping, float Dt);

	UPROPERTY()
	TArray<FDIY_GaitFoot> Feet;

	float AccumulatedTime = 0.f;
	float GlobalPhase = 0.f;
	float CurrentSpeed = 0.f;
	float CurrentPhaseSpeed = 0.f;
	float CurrentPercentOfMaxSpeed = 0.f;

	FVector PrevRootLocation = FVector::ZeroVector;
	bool bHasPrevRoot = false;
	bool bInitialized = false;
};
