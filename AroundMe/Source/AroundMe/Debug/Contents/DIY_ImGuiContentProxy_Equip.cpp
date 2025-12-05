
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
    ImGui::Checkbox("ShowControlRigInfo", &FDIY_GlobalDebugSettings::sInstance.equipment.bShowControlRigInfo);
    ImGui::Checkbox("ShowKagoDebugInfo", &FDIY_GlobalDebugSettings::sInstance.equipment.bShowKagoDebugInfo);
    ImGui::Checkbox("ShowHandHeadDebugInfo", &FDIY_GlobalDebugSettings::sInstance.equipment.bShowHandHeadDebugInfo);
    ImGui::Checkbox("ShowRobotHandDebugInfo", &FDIY_GlobalDebugSettings::sInstance.equipment.bShowRobotHandDebugInfo);

    if (!FDIY_GlobalDebugSettings::sInstance.equipment.bShowControlRigInfo)
    {
        FDIY_GlobalDebugSettings::sInstance.equipment.bShowKagoDebugInfo = false;
        FDIY_GlobalDebugSettings::sInstance.equipment.bShowHandHeadDebugInfo = false;
        FDIY_GlobalDebugSettings::sInstance.equipment.bShowRobotHandDebugInfo = false;
    }
}

#endif
