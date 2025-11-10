
#if UE_BUILD_DEVELOPMENT || UE_BUILD_DEBUG
#include "DIY_ImGuiContentProxy_Equip.h"
#include "../DIY_ImGui.h"
#include "../../Player/Equipments/Debug/DIY_EquipmentDebugSettings.h"

FDIY_ImGuiContentProxy_Equip::FDIY_ImGuiContentProxy_Equip(FDIY_ImGuiProxy &InOwningProxy)
    : FDIY_ImGuiContentProxy_MenuWindow(InOwningProxy, DIY_ImGuiNames::MenuCategoryNameGamePlay, "Equip", "EquipPanel")
{
}

void FDIY_ImGuiContentProxy_Equip::DrawWindow(float DeltaTime)
{
    ImGui::Text("PetControlRigPanel");
    ImGui::Checkbox("ShowItemInfo", &DIY_EquipmentDebugSettings::sInstance.bShowControlRigInfo);
    ImGui::Checkbox("ShowKagoDebugInfo", &DIY_EquipmentDebugSettings::sInstance.bShowKagoDebugInfo);
    ImGui::Checkbox("ShowHandHeadDebugInfo", &DIY_EquipmentDebugSettings::sInstance.bShowHandHeadDebugInfo);
    ImGui::Checkbox("ShowRobotHandDebugInfo", &DIY_EquipmentDebugSettings::sInstance.bShowRobotHandDebugInfo);

    if (!DIY_EquipmentDebugSettings::sInstance.bShowControlRigInfo)
    {
        DIY_EquipmentDebugSettings::sInstance.bShowKagoDebugInfo = false;
        DIY_EquipmentDebugSettings::sInstance.bShowHandHeadDebugInfo = false;
        DIY_EquipmentDebugSettings::sInstance.bShowRobotHandDebugInfo = false;
    }
}

#endif
