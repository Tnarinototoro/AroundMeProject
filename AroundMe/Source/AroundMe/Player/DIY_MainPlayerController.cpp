// All rights reserved to ShadowCandle Studio

#include "DIY_MainPlayerController.h"
#include "Kismet/GameplayStatics.h"

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

bool ADIY_MainPlayerController::DIY_GetHitResultUnderCursor(ECollisionChannel TraceChannel, bool bTraceComplex, const TArray<AActor*>& IgnoreActors, FHitResult& OutHitResult, bool bIgnoreSelf)
{
    ULocalPlayer* LocalPlayer = Cast<ULocalPlayer>(Player);
    if (!LocalPlayer || !LocalPlayer->ViewportClient) return false;

    FVector2D MousePosition;
    if (LocalPlayer->ViewportClient->GetMousePosition(MousePosition))
    {
        FVector WorldLocation, WorldDirection;
        if (UGameplayStatics::DeprojectScreenToWorld(this, MousePosition, WorldLocation, WorldDirection))
        {
            FCollisionQueryParams Params(SCENE_QUERY_STAT(ClickTrace), bTraceComplex);
            Params.AddIgnoredActors(IgnoreActors);
            if (bIgnoreSelf) Params.AddIgnoredActor(this);
            if (GetPawn()) Params.AddIgnoredActor(GetPawn());

            FVector TraceEnd = WorldLocation + (WorldDirection * HitResultTraceDistance); // 使用控制器的默认射线长度

            return GetWorld()->LineTraceSingleByChannel(OutHitResult, WorldLocation, TraceEnd, TraceChannel, Params);
        }
    }
    return false;
}

bool ADIY_MainPlayerController::DIY_GetHitResultUnderFinger(ETouchIndex::Type FingerIndex, ECollisionChannel TraceChannel, bool bTraceComplex, const TArray<AActor*>& IgnoreActors, FHitResult& OutHitResult, bool bIgnoreSelf)
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
            if (bIgnoreSelf) Params.AddIgnoredActor(this);
            if (GetPawn()) Params.AddIgnoredActor(GetPawn());

            FVector TraceEnd = WorldLocation + (WorldDirection * HitResultTraceDistance);

            return GetWorld()->LineTraceSingleByChannel(OutHitResult, WorldLocation, TraceEnd, TraceChannel, Params);
        }
    }
    return false;
}

bool ADIY_MainPlayerController::DIY_GetHitResultUnderInput(ECollisionChannel TraceChannel, bool bTraceComplex, const TArray<AActor*>& IgnoreActors, FHitResult& OutHitResult, ETouchIndex::Type FingerIndex, bool bIgnoreSelf)
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
    ULocalPlayer* LocalPlayer = Cast<ULocalPlayer>(Player);
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

            if (bIgnoreSelf) Params.AddIgnoredActor(this);
            if (GetPawn()) Params.AddIgnoredActor(GetPawn());

            // HitResultTraceDistance 是 PC 基类的默认成员，通常为 100,000
            FVector TraceEnd = WorldLocation + (WorldDirection * HitResultTraceDistance);

            return GetWorld()->LineTraceSingleByChannel(OutHitResult, WorldLocation, TraceEnd, TraceChannel, Params);
        }
    }

    OutHitResult = FHitResult();
    return false;
}
