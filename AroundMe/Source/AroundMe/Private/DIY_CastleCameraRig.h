// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DIY_CastleCameraRig.generated.h"

class USpringArmComponent;

/**
 * 移动城堡的相机操作组件。
 *
 * 挂到拥有 SpringArm 的 Pawn 上即可：
 *  - 鼠标移动 → 绕 Pawn 旋转弹簧臂（pitch 有范围限制）
 *  - 鼠标滚轮 → 拉长/缩短弹簧臂（有最短/最长限制）
 *
 * 不依赖 Enhanced Input / IMC，直接读 PlayerController 的鼠标增量与滚轮轴。
 */
UCLASS(ClassGroup = (DIY), meta = (BlueprintSpawnableComponent))
class AROUNDME_API UDIY_CastleCameraRig : public UActorComponent
{
	GENERATED_BODY()

public:
	UDIY_CastleCameraRig();

	/** 鼠标移动灵敏度（度/像素） */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera")
	float LookSensitivity = 0.6f;

	/** 滚轮缩放速度（cm/格） */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera")
	float ZoomSpeed = 1500.f;

	/** 臂长下限（cm） */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera")
	float MinArmLength = 6000.f;

	/** 臂长上限（cm） */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera")
	float MaxArmLength = 60000.f;

	/** 起始臂长（cm）。BeginPlay 时应用一次；<=0 表示不改 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera")
	float DefaultArmLength = 18000.f;

	/** 俯仰下限（度，负值=往下看） */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera")
	float MinPitch = -80.f;

	/** 俯仰上限（度） */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera")
	float MaxPitch = 30.f;

	/** 反转竖直方向 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera")
	bool bInvertPitch = false;

	/** 没有鼠标按键也能转（调试用） */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera")
	bool bRequireRightMouseButton = false;

protected:
	virtual void BeginPlay() override;
	virtual void TickComponent(float DeltaTime, ELevelTick TickType,
		FActorComponentTickFunction* ThisTickFunction) override;

private:
	USpringArmComponent* FindArm() const;

	UPROPERTY()
	TObjectPtr<USpringArmComponent> CachedArm;
};
