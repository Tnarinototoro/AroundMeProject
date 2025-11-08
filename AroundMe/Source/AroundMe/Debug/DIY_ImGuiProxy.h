// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#if UE_BUILD_DEVELOPMENT || UE_BUILD_DEBUG
#include "DIY_ImGuiPositionOverride.h"
#include <string>
class FDIY_ImGuiContentProxy;
class UDIY_DebugImGuiSubsystem;

/**
 * Base class for ImGui proxy that handles main menu and windows.
 * Instantiated per PIE client.
 */
class FDIY_ImGuiProxy
{
public:
    FDIY_ImGuiProxy(UDIY_DebugImGuiSubsystem &InSubsystem);
    virtual ~FDIY_ImGuiProxy();

    UDIY_DebugImGuiSubsystem &OwningSubsystem;

    bool bShowImGui = true;
    bool bShowMainMenuBar = true;
    bool bShowWindows = true;

    bool bPushFocus = false;

    void Tick(float DeltaTime);

public:
    virtual void UpdateWindows(float DeltaTime);
    virtual void UpdateMainMenu(float DeltaTime);

    void UpdateContentsWindow(float DeltaTime);
    void UpdateContentsMainMenu(float DeltaTime);
    void PostUpdateContentsTick(float DeltaTime);

    TArray<FDIY_ImGuiContentProxy *> ContentProxies;

public:
    void SaveProxyState();
};

/**
 * Base class for implementation of debug features
 * need to be registered in FDIY_ImGuiProxy to instantiate
 */
class FDIY_ImGuiContentProxy
{
public:
    FDIY_ImGuiContentProxy(FDIY_ImGuiProxy &InOwningProxy)
        : OwningProxy(InOwningProxy)
    {
    }
    virtual ~FDIY_ImGuiContentProxy() {}

    FDIY_ImGuiProxy &OwningProxy;
    FORCEINLINE UDIY_DebugImGuiSubsystem &GetOwningSubsystem() const
    {
        return OwningProxy.OwningSubsystem;
    }
    UWorld &GetWorldRef() const;
    UWorld *GetWorld() const
    {
        return &GetWorldRef();
    }

    // called every frame when should draw windows
    virtual void UpdateWindow(float DeltaTime) {}

    // called every frame when should draw main menu bar
    virtual void UpdateMainMenu(float DeltaTime) {}

    // Called even when imgui is not shown. Don't draw anything in this function. Only use for internal logic.
    virtual void PostUpdateTick(float DeltaTime) {}

    virtual void SaveProxyState() {}
};

/**
 * Base class for basic single window that toggled by a main menu tab button.
 * Per window show state is handled by this class.
 * show state is also saved in config across play session.
 */
class FDIY_ImGuiContentProxy_MenuWindow : public FDIY_ImGuiContentProxy
{
public:
    FDIY_ImGuiContentProxy_MenuWindow(FDIY_ImGuiProxy &InOwningProxy, const std::string &InMenuCategoryName, const std::string &InMenuItemName, const std::string &InWindowName, int32 InWindowFlags = 0);

    bool bShowWindow = false;

    std::string MenuCategoryName;
    std::string MenuItemName;
    std::string WindowName;
    int32 WindowFlags = 0;
    EDIY_ImGuiPositionOverride PositionOverride = EDIY_ImGuiPositionOverride::None;

protected:
    // Only valid in PostUpdateTick
    bool IsWindowDrawnThisFrame() const
    {
        return bWindowDrawnThisFrame;
    }

private:
    bool bWindowDrawnThisFrame = false;

public:
    virtual void UpdateWindow(float DeltaTime) override;
    virtual void UpdateMainMenu(float DeltaTime) override;
    virtual void PostUpdateTick(float DeltaTime) override;

    // Called every frame when should draw this window.
    virtual void DrawWindow(float DeltaTime) = 0;

    virtual void SaveProxyState() override;
    FORCEINLINE FString GetWindowNameString() const
    {
        return StringCast<TCHAR>(WindowName.c_str()).Get();
    }

    void ApplyPositionOverride() const;
    static bool GetPieWindowRect(const UWorld *World, FVector2D &OutPos, FVector2D &OutSize);
};

#endif
