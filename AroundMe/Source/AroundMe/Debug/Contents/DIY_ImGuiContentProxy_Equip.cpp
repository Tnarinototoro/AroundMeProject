
#if UE_BUILD_DEVELOPMENT || UE_BUILD_DEBUG
#include "DIY_ImGuiContentProxy_Equip.h"
#include "../DIY_ImGui.h"
#include "AroundMe/Debug/DIY_GlobalDebugSettings.h"

FDIY_ImGuiContentProxy_Equip::FDIY_ImGuiContentProxy_Equip(FDIY_ImGuiProxy &InOwningProxy)
    : FDIY_ImGuiContentProxy_MenuWindow(InOwningProxy, DIY_ImGuiNames::MenuCategoryNameGamePlay, "Equip", "EquipPanel")
{
}

void FDIY_ImGuiContentProxy_Equip::DrawWindow(float DeltaTime)
{
    ImGui::Text("PetControlRigPanel");
    ImGui::Checkbox("ShowControlRigInfo", &DIY_GlobalDebugSettings::sInstance.bShowControlRigInfo);
    ImGui::Checkbox("ShowKagoDebugInfo", &DIY_GlobalDebugSettings::sInstance.bShowKagoDebugInfo);
    ImGui::Checkbox("ShowHandHeadDebugInfo", &DIY_GlobalDebugSettings::sInstance.bShowHandHeadDebugInfo);
    ImGui::Checkbox("ShowRobotHandDebugInfo", &DIY_GlobalDebugSettings::sInstance.bShowRobotHandDebugInfo);

    if (!DIY_GlobalDebugSettings::sInstance.bShowControlRigInfo)
    {
        DIY_GlobalDebugSettings::sInstance.bShowKagoDebugInfo = false;
        DIY_GlobalDebugSettings::sInstance.bShowHandHeadDebugInfo = false;
        DIY_GlobalDebugSettings::sInstance.bShowRobotHandDebugInfo = false;
    }
}

#endif
