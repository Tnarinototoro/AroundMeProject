// All rights reserved to ShadowCandle Studio

#include "DIY_MainPlayerController.h"
#include "Kismet/GameplayStatics.h"

void ADIY_MainPlayerController::ProcessCustomGestures(float DeltaTime)
{
    // ActiveTouchCount 是在 InputTouch 里的 Began/Ended 实时更新的
    if (ActiveTouchCount != LastFrameTouchCount)
    {
        // 触发手指数变化事件
        OnDIY_TouchCountChanged(ActiveTouchCount, LastFrameTouchCount);

        // 更新记录，确保只触发一次
        LastFrameTouchCount = ActiveTouchCount;
    }

    // 如果屏幕上没手指，后续逻辑（Swipe, Pinch等）就不用跑了
    if (ActiveTouchCount <= 0)
        return;

    // 1. 快速收集所有当前活跃的手指索引
    TArray<int32, TInlineAllocator<10>> ActiveIndices;
    for (int32 i = 0; i < 10; ++i)
    {
        if (TrackedTouches[i].bIsPressed)
        {
            ActiveIndices.Add(i);
        }
    }

    // --- A. 单指/多指通用位移 (Swipe) ---
    // 计算所有活跃手指的平均位移
    FVector2D AverageDelta = FVector2D::ZeroVector;
    for (int32 Idx : ActiveIndices)
    {
        AverageDelta += TrackedTouches[Idx].GetDelta();
    }
    AverageDelta /= ActiveIndices.Num();

    // 触发事件：即使 Delta 是 (0,0)，我们也抛出事件，以便蓝图里的 Switch 逻辑能归零
    OnDIY_GestureSwipe(AverageDelta, ActiveIndices.Num(), DeltaTime);

    // --- B. 专门的双指逻辑 (Pinch & Rotate) ---
    if (ActiveIndices.Num() == 2)
    {
        const FDIY_TouchInfo &T1 = TrackedTouches[ActiveIndices[0]];
        const FDIY_TouchInfo &T2 = TrackedTouches[ActiveIndices[1]];

        // 1. Pinch (缩放)
        float CurrentDist = FVector2D::Distance(T1.CurrentLoc, T2.CurrentLoc);
        float LastDist = FVector2D::Distance(T1.LastFrameLoc, T2.LastFrameLoc);
        float PinchDelta = CurrentDist - LastDist;

        // 只有当两指间距真的发生变化时才触发
        if (FMath::Abs(PinchDelta) > 0.001f)
        {
            OnDIY_GesturePinch(PinchDelta, CurrentDist);
        }

        // 2. Rotate (旋转)
        FVector2D CurDir = T1.CurrentLoc - T2.CurrentLoc;
        FVector2D LastDir = T1.LastFrameLoc - T2.LastFrameLoc;

        // 确保向量有效，防止除以零
        if (!CurDir.IsNearlyZero() && !LastDir.IsNearlyZero())
        {
            float AngleCurrent = FMath::Atan2(CurDir.Y, CurDir.X);
            float AngleLast = FMath::Atan2(LastDir.Y, LastDir.X);
            float DegreesDelta = FMath::RadiansToDegrees(AngleCurrent - AngleLast);

            // 修正角度在 -180 到 180 度之间的跳转问题
            if (DegreesDelta > 180.0f)
                DegreesDelta -= 360.0f;
            if (DegreesDelta < -180.0f)
                DegreesDelta += 360.0f;

            if (FMath::Abs(DegreesDelta) > 0.01f)
            {
                OnDIY_GestureRotate(DegreesDelta);
            }
        }
    }

    // --- C. 行为消耗 (关键步骤) ---
    // 我们必须在 Tick 结束前，手动把本帧的位置“同步”到上一帧位置
    // 这样如果用户手指按住不动，下一帧 GetDelta() 就会得到 (0,0)
    for (int32 i = 0; i < 10; ++i)
    {
        if (TrackedTouches[i].bIsPressed)
        {
            TrackedTouches[i].LastFrameLoc = TrackedTouches[i].CurrentLoc;
        }
    }
}

void ADIY_MainPlayerController::PlayerTick(float DeltaTime)
{
    Super::PlayerTick(DeltaTime);

    // 每一帧统一处理手势生成
    ProcessCustomGestures(DeltaTime);
}

int32 ADIY_MainPlayerController::GetActiveTouchCount() const
{
    return ActiveTouchCount;
}

bool ADIY_MainPlayerController::GetHitResultUnderCursorWithIgnore(ECollisionChannel TraceChannel, const TArray<AActor *> &IgnoreActors, FHitResult &OutHit)
{
    ULocalPlayer *LocalPlayer = Cast<ULocalPlayer>(Player);
    if (!LocalPlayer || !LocalPlayer->ViewportClient)
        return false;

    FVector2D MousePosition;
    if (!LocalPlayer->ViewportClient->GetMousePosition(MousePosition))
        return false;

    // 1. 将屏幕坐标转换为世界空间射线
    FVector WorldLocation, WorldDirection;
    if (UGameplayStatics::DeprojectScreenToWorld(this, MousePosition, WorldLocation, WorldDirection))
    {
        // 2. 配置射线参数，添加忽略列表
        FCollisionQueryParams Params;
        Params.AddIgnoredActors(IgnoreActors);

        FVector TraceEnd = WorldLocation + (WorldDirection * 100000.f); // 足够远的距离

        // 3. 执行射线检测
        return GetWorld()->LineTraceSingleByChannel(OutHit, WorldLocation, TraceEnd, TraceChannel, Params);
    }

    return false;
}

bool ADIY_MainPlayerController::DIY_GetHitResultUnderCursor(ECollisionChannel TraceChannel, bool bTraceComplex, const TArray<AActor *> &IgnoreActors, FHitResult &OutHitResult, bool bIgnoreSelf)
{
    ULocalPlayer *LocalPlayer = Cast<ULocalPlayer>(Player);
    if (!LocalPlayer || !LocalPlayer->ViewportClient)
        return false;

    FVector2D MousePosition;
    if (LocalPlayer->ViewportClient->GetMousePosition(MousePosition))
    {
        FVector WorldLocation, WorldDirection;
        if (UGameplayStatics::DeprojectScreenToWorld(this, MousePosition, WorldLocation, WorldDirection))
        {
            FCollisionQueryParams Params(SCENE_QUERY_STAT(ClickTrace), bTraceComplex);
            Params.AddIgnoredActors(IgnoreActors);
            if (bIgnoreSelf)
                Params.AddIgnoredActor(this);
            if (GetPawn())
                Params.AddIgnoredActor(GetPawn());

            FVector TraceEnd = WorldLocation + (WorldDirection * HitResultTraceDistance); // 使用控制器的默认射线长度

            return GetWorld()->LineTraceSingleByChannel(OutHitResult, WorldLocation, TraceEnd, TraceChannel, Params);
        }
    }
    return false;
}

bool ADIY_MainPlayerController::DIY_GetHitResultUnderFinger(ETouchIndex::Type FingerIndex, ECollisionChannel TraceChannel, bool bTraceComplex, const TArray<AActor *> &IgnoreActors, FHitResult &OutHitResult, bool bIgnoreSelf)
{
    FVector2f TouchPosition;
    bool bIsPressed = false;
    GetInputTouchState(FingerIndex, TouchPosition.X, TouchPosition.Y, bIsPressed);

    if (bIsPressed)
    {
        FVector WorldLocation, WorldDirection;
        if (UGameplayStatics::DeprojectScreenToWorld(this, FVector2D(TouchPosition), WorldLocation, WorldDirection))
        {
            FCollisionQueryParams Params(SCENE_QUERY_STAT(TouchTrace), bTraceComplex);
            Params.AddIgnoredActors(IgnoreActors);
            if (bIgnoreSelf)
                Params.AddIgnoredActor(this);
            if (GetPawn())
                Params.AddIgnoredActor(GetPawn());

            FVector TraceEnd = WorldLocation + (WorldDirection * HitResultTraceDistance);

            return GetWorld()->LineTraceSingleByChannel(OutHitResult, WorldLocation, TraceEnd, TraceChannel, Params);
        }
    }
    return false;
}

bool ADIY_MainPlayerController::DIY_GetHitResultUnderInput(ECollisionChannel TraceChannel, bool bTraceComplex, const TArray<AActor *> &IgnoreActors, FHitResult &OutHitResult, ETouchIndex::Type FingerIndex, bool bIgnoreSelf)
{
    FVector2D InputPosition;
    bool bIsInputActive = false;

    // --- 平台分支处理 ---
#if (PLATFORM_ANDROID || PLATFORM_IOS)
    // 移动端：直接获取手指状态
    FVector2f TouchPosition;
    GetInputTouchState(FingerIndex, TouchPosition.X, TouchPosition.Y, bIsInputActive);
    InputPosition = FVector2D(TouchPosition);
#else
    // 桌面端：优先尝试鼠标位置
    ULocalPlayer *LocalPlayer = Cast<ULocalPlayer>(Player);
    if (LocalPlayer && LocalPlayer->ViewportClient)
    {
        bIsInputActive = LocalPlayer->ViewportClient->GetMousePosition(InputPosition);
    }

    // 如果没有鼠标（可能是模拟器或特殊设备），降级尝试 Touch1
    if (!bIsInputActive)
    {
        FVector2f TouchPos;
        GetInputTouchState(FingerIndex, TouchPos.X, TouchPos.Y, bIsInputActive);
        InputPosition = FVector2D(TouchPos);
    }
#endif

    // --- 核心射线执行逻辑 (全平台通用) ---
    if (bIsInputActive)
    {
        FVector WorldLocation, WorldDirection;
        if (UGameplayStatics::DeprojectScreenToWorld(this, InputPosition, WorldLocation, WorldDirection))
        {
            FCollisionQueryParams Params(SCENE_QUERY_STAT(InputTrace), bTraceComplex);
            Params.AddIgnoredActors(IgnoreActors);

            if (bIgnoreSelf)
                Params.AddIgnoredActor(this);
            if (GetPawn())
                Params.AddIgnoredActor(GetPawn());

            // HitResultTraceDistance 是 PC 基类的默认成员，通常为 100,000
            FVector TraceEnd = WorldLocation + (WorldDirection * HitResultTraceDistance);

            return GetWorld()->LineTraceSingleByChannel(OutHitResult, WorldLocation, TraceEnd, TraceChannel, Params);
        }
    }

    OutHitResult = FHitResult();
    return false;
}

bool ADIY_MainPlayerController::InputTouch(uint32 Handle, ETouchType::Type Type, const FVector2D &TouchLocation, float Force, FDateTime DeviceTimestamp, uint32 TouchpadIndex)
{
    // 调用基类，保留引擎默认的 Click 事件和 UI 交互功能
    bool bResult = Super::InputTouch(Handle, Type, TouchLocation, Force, DeviceTimestamp, TouchpadIndex);

    int32 FingerIndex = (int32)Handle;
    if (FingerIndex >= 10)
        return bResult;

    FDIY_TouchInfo &Info = TrackedTouches[FingerIndex];

    switch (Type)
    {
    case ETouchType::Began:
        Info.bIsPressed = true;
        Info.StartLoc = TouchLocation;
        Info.CurrentLoc = TouchLocation;
        Info.LastFrameLoc = TouchLocation;
        Info.PressTime = GetWorld()->GetTimeSeconds();
        ActiveTouchCount++;
        break;

    case ETouchType::Moved:
        // 只更新当前位置，不要在这里动 LastFrameLoc
        Info.CurrentLoc = TouchLocation;
        break;

    case ETouchType::Ended:
        Info.bIsPressed = false;
        ActiveTouchCount = FMath::Max(0, ActiveTouchCount - 1);
        break;

    default:
        break;
    }

    return bResult;
}