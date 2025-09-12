// Fill out your copyright notice in the Description page of Project Settings.

#if 1
#include "DIY_ImGuiProxy.h"

#include "DIY_DebugImGuiSubsystem.h"
#include "DIY_ImGui.h"
#include "../DIY_DebugUserGameSettings.h"
#include "Slate/SceneViewport.h"

// Need this so we can StaticCastSharedRef from SViewport to SWidget
#include "Widgets/SViewport.h"

FDIY_ImGuiProxy::FDIY_ImGuiProxy(UDIY_DebugImGuiSubsystem &InSubsystem)
    : OwningSubsystem(InSubsystem)
{
}

FDIY_ImGuiProxy::~FDIY_ImGuiProxy()
{
    for (FDIY_ImGuiContentProxy *ContentProxy : ContentProxies)
    {
        delete ContentProxy;
    }
    ContentProxies.Reset();
}

void FDIY_ImGuiProxy::Tick(float DeltaTime)
{
    if (bShowImGui)
    {
        /*if (bPushFocus)
        {
            bPushFocus = false;
        }*/
        if (bShowMainMenuBar)
        {
            UpdateMainMenu(DeltaTime);
            UpdateContentsMainMenu(DeltaTime);
        }
        if (bShowWindows)
        {
            UpdateWindows(DeltaTime);
            UpdateContentsWindow(DeltaTime);
        }
    }
    PostUpdateContentsTick(DeltaTime);
}

void FDIY_ImGuiProxy::UpdateWindows(float DeltaTime)
{
}

void FDIY_ImGuiProxy::UpdateMainMenu(float DeltaTime)
{
}

void FDIY_ImGuiProxy::UpdateContentsWindow(float DeltaTime)
{
    for (FDIY_ImGuiContentProxy *ContentProxy : ContentProxies)
    {
        ContentProxy->UpdateWindow(DeltaTime);
    }
}

void FDIY_ImGuiProxy::UpdateContentsMainMenu(float DeltaTime)
{
    for (FDIY_ImGuiContentProxy *ContentProxy : ContentProxies)
    {
        ContentProxy->UpdateMainMenu(DeltaTime);
    }
}

void FDIY_ImGuiProxy::PostUpdateContentsTick(float DeltaTime)
{
    for (FDIY_ImGuiContentProxy *ContentProxy : ContentProxies)
    {
        ContentProxy->PostUpdateTick(DeltaTime);
    }
}

void FDIY_ImGuiProxy::SaveProxyState()
{
    GConfig->SetBool(TEXT("PlayerProxy"), TEXT("ShowImGui"), bShowImGui, OwningSubsystem.GetImGuiStateIni());
    GConfig->SetBool(TEXT("PlayerProxy"), TEXT("ShowMainMenuBar"), bShowMainMenuBar, OwningSubsystem.GetImGuiStateIni());
    GConfig->SetBool(TEXT("PlayerProxy"), TEXT("ShowWindows"), bShowWindows, OwningSubsystem.GetImGuiStateIni());

    for (FDIY_ImGuiContentProxy *ContentProxy : ContentProxies)
    {
        ContentProxy->SaveProxyState();
    }
}

UWorld &FDIY_ImGuiContentProxy::GetWorldRef() const
{
    return GetOwningSubsystem().GetWorldRef();
}

FDIY_ImGuiContentProxy_MenuWindow::FDIY_ImGuiContentProxy_MenuWindow(FDIY_ImGuiProxy &InOwningProxy, const std::string &InMenuCategoryName,
                                                                     const std::string &InMenuItemName, const std::string &InWindowName, int32 InWindowFlags)
    : FDIY_ImGuiContentProxy(InOwningProxy), MenuCategoryName(InMenuCategoryName), MenuItemName(InMenuItemName), WindowName(InWindowName), WindowFlags(InWindowFlags)
{
    if (const UDIY_DebugUserGameSettings *UserGameSettings = GetDefault<UDIY_DebugUserGameSettings>())
    {
        if (UserGameSettings->bUseLastWindowState)
        {
            FString WindowNameString = GetWindowNameString();
            GConfig->GetBool(*WindowNameString, TEXT("LastOpened"), bShowWindow, GetOwningSubsystem().GetImGuiStateIni());
        }
    }
}

void FDIY_ImGuiContentProxy_MenuWindow::UpdateWindow(float DeltaTime)
{
    if (bShowWindow)
    {
        ApplyPositionOverride();

        if (ImGui::Begin(WindowName.c_str(), &bShowWindow, WindowFlags))
        {
            bWindowDrawnThisFrame = true;
            DrawWindow(DeltaTime);
            ImGui::End();
        }
    }
}

void FDIY_ImGuiContentProxy_MenuWindow::UpdateMainMenu(float DeltaTime)
{
    if (ImGui::BeginMainMenuBar())
    {
        if (ImGui::BeginMenu(MenuCategoryName.c_str()))
        {
            ImGui::MenuItem(MenuItemName.c_str(), nullptr, &bShowWindow);
            ImGui::EndMenu();
        }
        ImGui::EndMainMenuBar();
    }
}

void FDIY_ImGuiContentProxy_MenuWindow::PostUpdateTick(float DeltaTime)
{
    /* in derived classes you can use this to do clean-up works when the window is not drawn
    void FDIY_ImGuiContentProxy_DerivedProxy::PostUpdateTick(float DeltaTime)
    {
        if (!IsWindowDrawnThisFrame())
        {
            DoSomething();
        }
        FDIY_ImGuiContentProxy_MenuWindow::PostUpdateTick(DeltaTime);
    }
    */
    bWindowDrawnThisFrame = false;
}

void FDIY_ImGuiContentProxy_MenuWindow::SaveProxyState()
{
    FString WindowNameString = GetWindowNameString();
    GConfig->SetBool(*WindowNameString, TEXT("LastOpened"), bShowWindow, GetOwningSubsystem().GetImGuiStateIni());
}

void FDIY_ImGuiContentProxy_MenuWindow::ApplyPositionOverride() const
{
    if (PositionOverride == EDIY_ImGuiPositionOverride::None)
    {
        return;
    }

    constexpr float Padding = 4.f;

    FVector2D ViewportPosition;
    FVector2D ViewportSize;
    if (!GetPieWindowRect(GetOwningSubsystem().GetWorld(), ViewportPosition, ViewportSize))
    {
        return;
    }

    // Note that the ImGui viewport starts at (0,0) in the top-left corner of the window, even if its not taking up the whole screen.
    constexpr ImVec2 ViewportPositionImVec = ImVec2(0, 0);
    const ImVec2 ViewportSizeImVec = ImVec2(ViewportSize.X, ViewportSize.Y);

    ImVec2 Position;
    ImVec2 Pivot;
    if (PositionOverride == EDIY_ImGuiPositionOverride::TopLeft)
    {
        Position = ViewportPositionImVec + ImVec2(Padding, Padding);
        Pivot = ImVec2(0.0f, 0.0f);
    }
    else if (PositionOverride == EDIY_ImGuiPositionOverride::TopCenter)
    {
        Position = ImVec2(ViewportPositionImVec.x + ViewportSizeImVec.x / 2.f, ViewportPositionImVec.y) + ImVec2(0, Padding);
        Pivot = ImVec2(0.5f, 0.0f);
    }
    else if (PositionOverride == EDIY_ImGuiPositionOverride::TopRight)
    {
        Position = ImVec2(ViewportPositionImVec.x + ViewportSizeImVec.x, ViewportPositionImVec.y) + ImVec2(-Padding, Padding);
        Pivot = ImVec2(1.0f, 0.0f);
    }
    else if (PositionOverride == EDIY_ImGuiPositionOverride::CenterLeft)
    {
        Position = ImVec2(ViewportPositionImVec.x, ViewportPositionImVec.y + ViewportSizeImVec.y / 2.f) + ImVec2(Padding, 0);
        Pivot = ImVec2(0.0f, 0.5f);
    }
    else if (PositionOverride == EDIY_ImGuiPositionOverride::Center)
    {
        Position = ImVec2(ViewportPositionImVec.x + ViewportSizeImVec.x / 2.f, ViewportPositionImVec.y + ViewportSizeImVec.y / 2.f);
        Pivot = ImVec2(0.5f, 0.5f);
    }
    else if (PositionOverride == EDIY_ImGuiPositionOverride::CenterRight)
    {
        Position = ImVec2(ViewportPositionImVec.x + ViewportSizeImVec.x, ViewportPositionImVec.y + ViewportSizeImVec.y / 2.f) + ImVec2(-Padding, 0);
        Pivot = ImVec2(1.0f, 0.5f);
    }
    else if (PositionOverride == EDIY_ImGuiPositionOverride::BottomLeft)
    {
        Position = ImVec2(ViewportPositionImVec.x, ViewportPositionImVec.y + ViewportSizeImVec.y) + ImVec2(Padding, -Padding);
        Pivot = ImVec2(0.0f, 1.0f);
    }
    else if (PositionOverride == EDIY_ImGuiPositionOverride::BottomCenter)
    {
        Position = ImVec2(ViewportPositionImVec.x + ViewportSizeImVec.x / 2.f, ViewportPositionImVec.y + ViewportSizeImVec.y) + ImVec2(0, -Padding);
        Pivot = ImVec2(0.5f, 1.0f);
    }
    else if (PositionOverride == EDIY_ImGuiPositionOverride::BottomRight)
    {
        Position = ImVec2(ViewportPositionImVec.x + ViewportSizeImVec.x, ViewportPositionImVec.y + ViewportSizeImVec.y) + ImVec2(-Padding, -Padding);
        Pivot = ImVec2(1.0f, 1.0f);
    }

    ImGui::SetNextWindowPos(Position, ImGuiCond_Always, Pivot);
}

bool FDIY_ImGuiContentProxy_MenuWindow::GetPieWindowRect(const UWorld *World, FVector2D &OutPos, FVector2D &OutSize)
{
    OutPos = FVector2D::ZeroVector;
    OutSize = FVector2D::ZeroVector;
    if (!World)
        return false;

    if (const UGameViewportClient *GameViewport = World->GetGameViewport())
    {
        const TSharedRef<SWidget> ViewportWidget = StaticCastSharedRef<SWidget>(GameViewport->GetGameViewportWidget().ToSharedRef());
        if (TSharedPtr<SWindow> Win = FSlateApplication::Get().FindWidgetWindow(ViewportWidget))
        {
            const FGeometry ViewportGeometry = ViewportWidget->GetTickSpaceGeometry();
            OutPos = ViewportGeometry.GetAbsolutePosition();
            OutSize = ViewportGeometry.GetAbsoluteSize();
            return true;
        }
    }

    return false;
}

FDIY_ImGuiContentProxy_InlineMenuWindow::FDIY_ImGuiContentProxy_InlineMenuWindow(FDIY_ImGuiProxy &InOwningProxy, const std::string &InMenuCategoryName)
    : FDIY_ImGuiContentProxy(InOwningProxy), MenuCategoryName(InMenuCategoryName)
{
}

void FDIY_ImGuiContentProxy_InlineMenuWindow::UpdateMainMenu(float DeltaTime)
{
    if (ImGui::BeginMainMenuBar())
    {
        if (ImGui::BeginMenu(MenuCategoryName.c_str()))
        {
            DrawWindow(DeltaTime);
            ImGui::EndMenu();
        }
        ImGui::EndMainMenuBar();
    }
}

#endif
