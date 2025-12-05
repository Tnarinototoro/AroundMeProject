#if UE_BUILD_DEVELOPMENT || UE_BUILD_DEBUG
#include "DIY_ImGuiContentProxy_Player.h"
#include "../DIY_ImGui.h"
#include "../../Player/DIY_MainPlayer.h"
#include "../DIY_GlobalDebugSettings.h"

FDIY_ImGuiContentProxy_Player::FDIY_ImGuiContentProxy_Player(FDIY_ImGuiProxy &InOwningProxy)
    : FDIY_ImGuiContentProxy_MenuWindow(InOwningProxy, DIY_ImGuiNames::MenuCategoryNameGamePlay, "Player", "Player")
{
}

void FDIY_ImGuiContentProxy_Player::DrawWindow(float DeltaTime)
{
    ImGui::Text("PlayerInfo");
    ImGui::Checkbox("ShowPlayerInfo", &DIY_GlobalDebugSettings::sInstance.bShowPlayerState);
}

#endif
