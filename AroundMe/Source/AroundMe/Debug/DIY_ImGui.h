#pragma once

#if 1
#include <imgui.h>
#include <string>
DECLARE_LOG_CATEGORY_CLASS(LogDIY_ImGui, Log, All);

// namespace DIY_ImGui
// {
//     void Tick(const UObject *Owner, float DeltaTime, const TFunctionRef<void()> &CustomRenderFunction);
// }
namespace DIY_ImGuiNames
{
    constexpr std::string MenuCategoryNameRenderer = "Renderer";
    constexpr std::string MenuCategoryNameVisualizer = "Visualizer";
    constexpr std::string MenuCategoryNameGamePlay = "GamePlay";
    constexpr std::string MenuCategoryNameUI = "UI";
    constexpr std::string MenuCategoryNameSystem = "System";
    constexpr std::string MenuCategoryNameSettings = "Settings";
    constexpr std::string MenuCategoryNameWwise = "Wwise";
}
#endif