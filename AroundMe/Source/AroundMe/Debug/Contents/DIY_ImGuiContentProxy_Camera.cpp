#if UE_BUILD_DEVELOPMENT || UE_BUILD_DEBUG
#include "DIY_ImGuiContentProxy_Camera.h"
#include "../DIY_ImGui.h"

FDIY_ImGuiContentProxy_Camera::FDIY_ImGuiContentProxy_Camera(FDIY_ImGuiProxy &InOwningProxy)
    : FDIY_ImGuiContentProxy_MenuWindow(InOwningProxy, DIY_ImGuiNames::MenuCategoryNameGamePlay, "Camera", "Camera")
{
}

void FDIY_ImGuiContentProxy_Camera::DrawWindow(float DeltaTime)
{
    ImGui::Text("This is the first window for camera");

    
}

#endif
