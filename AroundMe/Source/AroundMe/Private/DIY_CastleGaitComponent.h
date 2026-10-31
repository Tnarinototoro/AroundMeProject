// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DIY_CastleGaitComponent.generated.h"

/**
 * 单只脚的运行时状态。算法思路移植自 Locomotor 插件（FLocomotorFoot），
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

	/** 髋部（腿根）在本组件空间的静止位置，来自绑定时的骨骼位置 */
	UPROPERTY(BlueprintReadOnly, Category = "Gait")
	FVector RestLocation = FVector::ZeroVector;

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

	UPROPERTY(BlueprintReadOnly, Category = "Gait")
	bool bInSwing = false;

	UPROPERTY(BlueprintReadOnly, Category = "Gait")
	bool bWasInSwing = false;

	/** 本帧刚抬脚 */
	UPROPERTY(BlueprintReadOnly, Category = "Gait")
	bool bUnplantedThisTick = false;

	UPROPERTY(BlueprintReadOnly, Category = "Gait")
	bool bAtRest = true;

	/** 当前脚的世界位置（已含抬脚高度） */
	UPROPERTY(BlueprintReadOnly, Category = "Gait")
	FVector CurrentLocation = FVector::ZeroVector;
};

/**
 * 移动城堡四足步态组件。
 *
 * 设计前提（和原实现的区别）：
 *  - 城堡本体是权威运动源，这个组件不移动任何 Actor，只负责算脚在哪
 *  - 根目标由外部每帧喂入（通常是城堡 Pawn 的当前变换），不再靠 Beacon 瞬移
 *  - 内部固定 120Hz 子步进，外部帧率变化不会改变脚部轨迹形状
 *
 * 用法：
 *  1. 在城堡 Pawn 的 BeginPlay 里调 InitializeFeet，传入四个腿根骨骼位置
 *  2. 每帧（或 PostAnim）调 UpdateGait，传入城堡的世界变换和 DeltaTime
 *  3. 用 GetFootLocation(i) 取脚的世界位置，喂给 ControlRig 的 Control 或 ABP 变量
 */
UCLASS(ClassGroup = (DIY), meta = (BlueprintSpawnableComponent))
class AROUNDME_API UDIY_CastleGaitComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UDIY_CastleGaitComponent();

	// ------------------------------------------------------------------
	// 可调参数（对应 Locomotor 的同名设置）
	// ------------------------------------------------------------------

	/** 一步的最短距离（cm）。低于这个距离不会触发迈步 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gait|Movement")
	float MinimumStepLength = 150.f;

	/** 最小移动速度（cm/s） */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gait|Movement")
	float SpeedMin = 200.f;

	/** 最大移动速度（cm/s）。步长 = 速度 / 相位速度，会影响摆动时长 */
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
	float StepHeight = 300.f;

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

	/** 内部固定仿真步长（秒）。默认 1/120，和 Locomotor 一致 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gait|Simulation")
	float FixedTimeStep = 1.f / 120.f;

	/** 单帧最多跑几个子步，防止卡顿时雪崩 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gait|Simulation")
	int32 MaxSubSteps = 8;

	/** 是否输出调试线（脚到落点的轨迹） */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gait|Debug")
	bool bDrawDebug = false;

	// ------------------------------------------------------------------
	// 蓝图接口
	// ------------------------------------------------------------------

	/**
	 * 初始化四只脚。腿根相对城堡（本组件所属 Actor）的静止位置。
	 * @param FootRestLocal 四个腿根在本 Actor 本地空间的坐标
	 */
	UFUNCTION(BlueprintCallable, Category = "Gait")
	void InitializeFeet(const TArray<FVector>& FootRestLocal);

	/**
	 * 推进步态仿真。每帧调用。
	 * @param RootWorld     城堡当前的世界变换（权威运动源）
	 * @param DeltaSeconds  帧间隔
	 */
	UFUNCTION(BlueprintCallable, Category = "Gait")
	void UpdateGait(const FTransform& RootWorld, float DeltaSeconds);

	/** 取第 Index 只脚的世界坐标（已含抬脚高度） */
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Gait")
	FVector GetFootLocation(int32 Index) const;

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

private:
	/** 一次固定步长的仿真 */
	void SimulateStep(const FTransform& RootWorld, float Dt);

	/** 更新目标点：算出这一帧脚"应该"落在哪，并在摆动期用弹簧软跟随 */
	void UpdateFootTargets(const FTransform& RootWorld, float Dt);

	/** 根据相位把脚移动到当前应该的位置 */
	void AnimateFeet(float Dt);

	/** 相位环绕到 0~1 */
	static float WrapPhase(float Phase);

	/** 相位插值（沿最短方向追赶） */
	static float BlendTowardsPhase(float Current, float Target, float Rate);

	/** 缓入缓出重映射 */
	static float EaseInOutNorm(float Input, float EaseIn, float EaseOut);

	/** 简易临界阻尼弹簧积分（标量） */
	static void SpringDamperVector(
		FVector& InOutValue, FVector& InOutVelocity,
		const FVector& Target, float Stiffness, float Damping, float Dt);

	UPROPERTY()
	TArray<FDIY_GaitFoot> Feet;

	/** 累计待仿真的时间 */
	float AccumulatedTime = 0.f;

	/** 全局相位 */
	float GlobalPhase = 0.f;

	/** 当前速度 / 相位速度 */
	float CurrentSpeed = 0.f;
	float CurrentPhaseSpeed = 0.f;
	float CurrentPercentOfMaxSpeed = 0.f;

	/** 上一次的城堡变换，用来算速度 */
	FVector PrevRootLocation = FVector::ZeroVector;
	bool bHasPrevRoot = false;

	/** 是否已经初始化过脚 */
	bool bInitialized = false;
};
