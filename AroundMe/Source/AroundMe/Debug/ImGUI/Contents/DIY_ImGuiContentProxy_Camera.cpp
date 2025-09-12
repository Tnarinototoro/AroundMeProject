#if 1
#include "DIY_ImGuiContentProxy_Camera.h"
#include "../DIY_ImGui.h"

#include "../../DIY_DebugUserGameSettings.h"

FDIY_ImGuiContentProxy_Camera::FDIY_ImGuiContentProxy_Camera(FDIY_ImGuiProxy &InOwningProxy)
    : FDIY_ImGuiContentProxy_MenuWindow(InOwningProxy, DIY_ImGuiNames::MenuCategoryNameGamePlay, "Camera", "Camera")
{
}

void FDIY_ImGuiContentProxy_Camera::DrawWindow(float DeltaTime)
{
}

#endif
