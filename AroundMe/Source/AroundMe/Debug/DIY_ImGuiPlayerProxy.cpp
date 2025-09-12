

#if 1
#include "DIY_ImGuiPlayerProxy.h"

#include "DIY_ImGui.h"
#include "DIY_DebugImGuiSubsystem.h"
#include "DynamicResolutionState.h"
#include "JsonObjectWrapper.h"

#include "Contents/DIY_ImGuiContentProxy_Camera.h"

extern ENGINE_API float GAverageFPS;

FDIY_ImGuiCommonPlayerProxy::FDIY_ImGuiCommonPlayerProxy(UDIY_DebugImGuiSubsystem &InSubsystem)
    : FDIY_ImGuiProxy(InSubsystem)
{
    LoadBuildVersion();
}

void FDIY_ImGuiCommonPlayerProxy::DrawFramerate()
{
    if (GEngine)
    {
        constexpr float WarningFPS = 28.0f;
        constexpr float ErrorFPS = 20.0f;
        ImVec4 color = ImVec4(1.0f, 1.0f, 1.0f, 1.0f);
        if (GAverageFPS < ErrorFPS)
        {
            color = ImVec4(1.0f, 0.0f, 0.0f, 1.0f);
        }
        else if (GAverageFPS < WarningFPS)
        {
            color = ImVec4(1.0f, 1.0f, 0.0f, 1.0f);
        }
        else
        {
            color = ImVec4(1.0f, 1.0f, 1.0f, 1.0f);
        }
        ImGui::TextColored(color, "FPS %.2f", GAverageFPS);
    }
}

void FDIY_ImGuiCommonPlayerProxy::DrawUsedMemory()
{
    FPlatformMemoryStats MemoryStats = FPlatformMemory::GetStats();
    const float UsedPhysicalMem = MemoryStats.UsedPhysical / (1024.0f * 1024.0f);
    const float UsedVirtualMem = MemoryStats.UsedVirtual / (1024.0f * 1024.0f);

    ImGui::Text("PMem:%.3fMB", UsedPhysicalMem);
    ImGui::SetItemTooltip("Detail UsedPhysicalMem:%f, UsedVirtualMem:%f", UsedPhysicalMem, UsedVirtualMem);
}

void FDIY_ImGuiCommonPlayerProxy::DrawDynamicResolution()
{
    FDynamicResolutionStateInfos DynamicResolutionStateInfos;
    GEngine->GetDynamicResolutionCurrentStateInfos(/* out */ DynamicResolutionStateInfos);
    float ResolutionFraction = DynamicResolutionStateInfos.ResolutionFractionApproximations[GDynamicPrimaryResolutionFraction];
    float ScreenPercentage = ResolutionFraction * 100.0f;
    char Text[0xff] = {};
    ImVec4 TextColor = ImVec4(1.0f, 1.0f, 1.0f, 1.0f);
    switch (DynamicResolutionStateInfos.Status)
    {
    case EDynamicResolutionStatus::Unsupported:
        sprintf_s(Text, "DynRes: Unsupported");
        break;
    case EDynamicResolutionStatus::Disabled:
        sprintf_s(Text, "DynRes: Disabled");
        break;
    case EDynamicResolutionStatus::Paused:
        sprintf_s(Text, "DynRes: Paused");
        break;
    case EDynamicResolutionStatus::Enabled:
    {
        sprintf_s(Text, "DynRes: %3.1f", ScreenPercentage);
        float ScrPer2Col = FMath::Clamp((ScreenPercentage - 50.0f) / 50.0f, 0.0f, 1.0f);
        TextColor.x = 1.0f - ScrPer2Col;
        TextColor.y = ScrPer2Col;
        TextColor.z = 0.0f;
    }
    break;
    default:
        sprintf_s(Text, "DynRes: Unknown");
        break;
    }
    ImGui::TextColored(TextColor, Text);
}

void FDIY_ImGuiCommonPlayerProxy::DrawBuildVersion()
{
    ImGui::Text("Build: %s", TCHAR_TO_ANSI(*BuildVersionString));
}

void FDIY_ImGuiCommonPlayerProxy::LoadBuildVersion()
{
#if WITH_EDITOR
    // // FApp::GetBuildVersionはUnrealSyncから取得したときにCode変更時のビルドしたバージョンが埋め込まれており、
    // // Contentの変更続きのChangelist番号とずれることがあったので、Sync時に値が更新されるBuild.versionから取得する
    // FString EngineBuildPath = FPaths::Combine(FPaths::EngineUserDir(), "Build", "Build.version");
    // FString JsonString;
    // FFileHelper::LoadFileToString(JsonString, *EngineBuildPath);
    // FJsonObjectWrapper JsonWrapper;
    // JsonWrapper.JsonObjectFromString(JsonString);
    // FString BranchName;
    // int Changelist;
    // JsonWrapper.JsonObject->TryGetNumberField(TEXT("Changelist"), Changelist);
    // JsonWrapper.JsonObject->TryGetStringField(TEXT("BranchName"), BranchName);
    // BuildVersionString = FString::Printf(TEXT("%s-CL-%d"), *BranchName, Changelist);
#else
    BuildVersionString = FApp::GetBuildVersion();
#endif
}

FDIY_ImGuiMainPlayerProxy::FDIY_ImGuiMainPlayerProxy(UDIY_DebugImGuiSubsystem &InSubsystem)
    : FDIY_ImGuiCommonPlayerProxy(InSubsystem)
{
    ContentProxies = {

        new FDIY_ImGuiContentProxy_Camera(*this)};
}

void FDIY_ImGuiMainPlayerProxy::UpdateWindows(float DeltaTime)
{
}

static void RegisterMenu(const std::string &MenuName)
{
    if (ImGui::BeginMenu(MenuName.c_str()))
    {
        ImGui::EndMenu();
    }
}

void FDIY_ImGuiMainPlayerProxy::UpdateMainMenu(float DeltaTime)
{
    UWorld *World = OwningSubsystem.GetWorld();
    if (!ensure(World))
        return;
    if (ImGui::BeginMainMenuBar(
            // ImVec2(100, 0)
            ))
    {
        RegisterMenu(DIY_ImGuiNames::MenuCategoryNameSettings);
        ImGui::Separator();
        RegisterMenu(DIY_ImGuiNames::MenuCategoryNameRenderer);
        RegisterMenu(DIY_ImGuiNames::MenuCategoryNameVisualizer);
        RegisterMenu(DIY_ImGuiNames::MenuCategoryNameGamePlay);
        RegisterMenu(DIY_ImGuiNames::MenuCategoryNameUI);
        RegisterMenu(DIY_ImGuiNames::MenuCategoryNameSystem);
        RegisterMenu(DIY_ImGuiNames::MenuCategoryNameWwise);
        ImGui::Separator();
        ImGui::Checkbox("ShowWindow", &bShowWindows);
        ImGui::Checkbox("ShowImGUI", &bShowImGui);
        ImGui::Separator();
        DrawFramerate();
        ImGui::Separator();
        DrawUsedMemory();
        ImGui::Separator();
        DrawDynamicResolution();
        ImGui::Separator();
        DrawBuildVersion();
        ImGui::EndMainMenuBar();
    }
}

#endif
