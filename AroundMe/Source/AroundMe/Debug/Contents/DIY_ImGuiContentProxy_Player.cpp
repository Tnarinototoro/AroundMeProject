#if 1
#include "DIY_ImGuiContentProxy_Player.h"
#include "../DIY_ImGui.h"
#include "../../Player/DIY_MainPlayer.h"

FDIY_ImGuiContentProxy_Player::FDIY_ImGuiContentProxy_Player(FDIY_ImGuiProxy &InOwningProxy)
    : FDIY_ImGuiContentProxy_MenuWindow(InOwningProxy, DIY_ImGuiNames::MenuCategoryNameGamePlay, "Player", "Player")
{
}

void FDIY_ImGuiContentProxy_Player::DrawWindow(float DeltaTime)
{
    ImGui::Text("PlayerInfo");
    if (ImGui::Checkbox("ShowPlayerInfo", &bShowPlayerState))
    {
        ADIY_MainPlayer::Dbg_Enable_PlayerInfo_Widget = bShowPlayerState;
    }
}

#endif
