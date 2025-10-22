#if 1
#include "DIY_ImGuiContentProxy_Weather.h"
#include "../DIY_ImGui.h"


FDIY_ImGuiContentProxy_Weather::FDIY_ImGuiContentProxy_Weather(FDIY_ImGuiProxy &InOwningProxy)
    : FDIY_ImGuiContentProxy_MenuWindow(InOwningProxy, DIY_ImGuiNames::MenuCategoryNameSystem, "Weather", "WeatherDebugPanel")
{

}

void FDIY_ImGuiContentProxy_Weather::DrawWindow(float DeltaTime)
{
    ImGui::Text("BGM");
    ImGui::SliderInt("Hour", &hour, -1, 23);
#if UE_BUILD_DEVELOPMENT || UE_BUILD_DEBUG
    
#endif
}

#endif
