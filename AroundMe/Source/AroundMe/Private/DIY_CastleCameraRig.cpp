// Copyright Epic Games, Inc. All Rights Reserved.

#include "DIY_CastleCameraRig.h"
#include "Engine/World.h"
#include "GameFramework/Actor.h"
#include "GameFramework/PlayerController.h"
#include "GameFramework/SpringArmComponent.h"
#include "InputCoreTypes.h"

UDIY_CastleCameraRig::UDIY_CastleCameraRig()
{
	PrimaryComponentTick.bCanEverTick = true;
	PrimaryComponentTick.bStartWithTickEnabled = true;
}

void UDIY_CastleCameraRig::BeginPlay()
{
	Super::BeginPlay();

	CachedArm = FindArm();

	if (CachedArm && DefaultArmLength > 0.f)
	{
		CachedArm->TargetArmLength = FMath::Clamp(DefaultArmLength, MinArmLength, MaxArmLength);
	}
}

USpringArmComponent* UDIY_CastleCameraRig::FindArm() const
{
	const AActor* Owner = GetOwner();
	if (!Owner)
	{
		return nullptr;
	}

	return Owner->FindComponentByClass<USpringArmComponent>();
}

void UDIY_CastleCameraRig::TickComponent(float DeltaTime, ELevelTick TickType,
	FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (!CachedArm)
	{
		CachedArm = FindArm();
		if (!CachedArm)
		{
			return;
		}
	}

	UWorld* World = GetWorld();
	APlayerController* PC = World ? World->GetFirstPlayerController() : nullptr;
	if (!PC)
	{
		return;
	}

	// ---- 鼠标环绕 ----
	bool bAllowLook = true;
	if (bRequireRightMouseButton)
	{
		bAllowLook = PC->IsInputKeyDown(EKeys::RightMouseButton);
	}

	if (bAllowLook)
	{
		float MouseDeltaX = 0.f;
		float MouseDeltaY = 0.f;
		PC->GetInputMouseDelta(MouseDeltaX, MouseDeltaY);

		if (!FMath::IsNearlyZero(MouseDeltaX) || !FMath::IsNearlyZero(MouseDeltaY))
		{
			FRotator ArmRot = CachedArm->GetRelativeRotation();

			ArmRot.Yaw += MouseDeltaX * LookSensitivity;

			const float PitchDelta = MouseDeltaY * LookSensitivity * (bInvertPitch ? 1.f : -1.f);
			ArmRot.Pitch = FMath::Clamp(ArmRot.Pitch + PitchDelta, MinPitch, MaxPitch);

			CachedArm->SetRelativeRotation(ArmRot);
		}
	}

	// ---- 滚轮缩放 ----
	const float Wheel = PC->GetInputAnalogKeyState(EKeys::MouseWheelAxis);
	if (!FMath::IsNearlyZero(Wheel))
	{
		// 滚上去 = 拉近
		const float NewLength = CachedArm->TargetArmLength - Wheel * ZoomSpeed;
		CachedArm->TargetArmLength = FMath::Clamp(NewLength, MinArmLength, MaxArmLength);
	}
}
