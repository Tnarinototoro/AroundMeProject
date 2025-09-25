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
    constexpr const char* MenuCategoryNameRenderer = "Renderer";
    constexpr const char* MenuCategoryNameVisualizer = "Visualizer";
    constexpr const char* MenuCategoryNameGamePlay = "GamePlay";
    constexpr const char* MenuCategoryNameUI = "UI";
    constexpr const char* MenuCategoryNameSystem = "System";
    constexpr const char* MenuCategoryNameSettings = "Settings";
    constexpr const char* MenuCategoryNameSound = "Sound";
    constexpr const char* MenuCategoryNameWwise = "Wwise";
}
#endif