#if UE_BUILD_DEVELOPMENT || UE_BUILD_DEBUG
#include "DIY_ImGuiContentProxy_Item.h"
#include "../DIY_ImGui.h"
#include "../../Player/Items/DIY_Item.h"
#include "AroundMe/Debug/DIY_GlobalDebugSettings.h"

FDIY_ImGuiContentProxy_Item::FDIY_ImGuiContentProxy_Item(FDIY_ImGuiProxy &InOwningProxy)
    : FDIY_ImGuiContentProxy_MenuWindow(InOwningProxy, DIY_ImGuiNames::MenuCategoryNameGamePlay, "Item", "Item")
{
}

void FDIY_ImGuiContentProxy_Item::DrawWindow(float DeltaTime)
{
    ImGui::Text("ItemInfo");
    ImGui::Checkbox("ShowItemInfo", &DIY_GlobalDebugSettings::sInstance.bShowItemState);

}

#endif
