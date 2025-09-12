// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include <string>
#if 1
#include "DIY_ImGuiPositionOverride.h"

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

class FDIY_ImGuiContentProxy_InlineMenuWindow : public FDIY_ImGuiContentProxy
{
public:
    FDIY_ImGuiContentProxy_InlineMenuWindow(FDIY_ImGuiProxy &InOwningProxy, const std::string &InMenuCategoryName);

    std::string MenuCategoryName;

    virtual void UpdateMainMenu(float DeltaTime) override;
    virtual void DrawWindow(float DeltaTime) = 0;
};

// DEPRECATED
class FDIY_ImGuiContentProxy_DelegatedMenuWindow : public FDIY_ImGuiContentProxy_MenuWindow
{
public:
    DECLARE_DELEGATE_TwoParams(FUpdateDelegate, float DeltaTime, UWorld *World);

    FDIY_ImGuiContentProxy_DelegatedMenuWindow(FDIY_ImGuiProxy &InOwningProxy, const std::string &InMenuCategoryName, const std::string &InMenuItemName, const std::string &InWindowName, FUpdateDelegate &&InDelegate, int32 InWindowFlags = 0)
        : FDIY_ImGuiContentProxy_MenuWindow(InOwningProxy, InMenuCategoryName, InMenuItemName, InWindowName, InWindowFlags), OnUpdateWindow(MoveTemp(InDelegate))
    {
    }

    FUpdateDelegate OnUpdateWindow;
    virtual void DrawWindow(float DeltaTime) override
    {
        OnUpdateWindow.ExecuteIfBound(DeltaTime, GetWorld());
    }
};

#define DEFINE_IMGUI_CONTENT_PROXY(ClassName, CategoryName, Title, DisplayName)                                                    \
    class FDIY_ImGuiContentProxy_##ClassName : public FDIY_ImGuiContentProxy_MenuWindow                                            \
    {                                                                                                                              \
    public:                                                                                                                        \
        FDIY_ImGuiContentProxy_##ClassName(FDIY_ImGuiProxy &InOwningProxy)                                                         \
            : FDIY_ImGuiContentProxy_MenuWindow(InOwningProxy, DIY_ImGuiNames::MenuCategoryName##CategoryName, Title, DisplayName) \
        {                                                                                                                          \
        }                                                                                                                          \
        virtual void DrawWindow(float DeltaTime) override;                                                                         \
    };

#define DEFINE_IMGUI_CONTENT_PROXY_INLINE_MENU(ClassName, CategoryName)                                              \
    class FDIY_ImGuiContentProxy_##ClassName : public FDIY_ImGuiContentProxy_InlineMenuWindow                        \
    {                                                                                                                \
    public:                                                                                                          \
        FDIY_ImGuiContentProxy_##ClassName(FDIY_ImGuiProxy &InOwningProxy)                                           \
            : FDIY_ImGuiContentProxy_InlineMenuWindow(InOwningProxy, DIY_ImGuiNames::MenuCategoryName##CategoryName) \
        {                                                                                                            \
        }                                                                                                            \
        virtual void DrawWindow(float DeltaTime) override;                                                           \
    };

#define BEGIN_IMGUI_CONTENT_PROXY(ClassName, CategoryName, Title, DisplayName)                                                     \
    class FDIY_ImGuiContentProxy_##ClassName : public FDIY_ImGuiContentProxy_MenuWindow                                            \
    {                                                                                                                              \
    public:                                                                                                                        \
        FDIY_ImGuiContentProxy_##ClassName(FDIY_ImGuiProxy &InOwningProxy)                                                         \
            : FDIY_ImGuiContentProxy_MenuWindow(InOwningProxy, DIY_ImGuiNames::MenuCategoryName##CategoryName, Title, DisplayName) \
        {                                                                                                                          \
        }

#define BEGIN_IMGUI_CONTENT_PROXY_INLINE_MENU(ClassName, CategoryName)                                               \
    class FDIY_ImGuiContentProxy_##ClassName : public FDIY_ImGuiContentProxy_InlineMenuWindow                        \
    {                                                                                                                \
    public:                                                                                                          \
        FDIY_ImGuiContentProxy_##ClassName(FDIY_ImGuiProxy &InOwningProxy)                                           \
            : FDIY_ImGuiContentProxy_InlineMenuWindow(InOwningProxy, DIY_ImGuiNames::MenuCategoryName##CategoryName) \
        {                                                                                                            \
        }

#define BEGIN_IMGUI_CONTENT_PROXY_EXT(ClassName, CategoryName, Title, DisplayName, WindowFlags)                                                 \
    class FDIY_ImGuiContentProxy_##ClassName : public FDIY_ImGuiContentProxy_MenuWindow                                                         \
    {                                                                                                                                           \
    public:                                                                                                                                     \
        FDIY_ImGuiContentProxy_##ClassName(FDIY_ImGuiProxy &InOwningProxy)                                                                      \
            : FDIY_ImGuiContentProxy_MenuWindow(InOwningProxy, DIY_ImGuiNames::MenuCategoryName##CategoryName, Title, DisplayName, WindowFlags) \
        {                                                                                                                                       \
        }

#define END_IMGUI_CONTENT_PROXY()                      \
public:                                                \
    virtual void DrawWindow(float DeltaTime) override; \
    }                                                  \
    ;

#endif
