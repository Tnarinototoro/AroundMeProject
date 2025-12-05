#if UE_BUILD_DEVELOPMENT || UE_BUILD_DEBUG
#include "DIY_ImGuiContentProxy_MusicPlayer.h"
#include "../DIY_ImGui.h"
#include "../../GameUtilities/MusicPlayer/DIY_MusicPlayer.h"
#include "../DIY_GlobalDebugSettings.h"
FDIY_ImGuiContentProxy_MusicPlayer::FDIY_ImGuiContentProxy_MusicPlayer(FDIY_ImGuiProxy &InOwningProxy)
    : FDIY_ImGuiContentProxy_MenuWindow(InOwningProxy, DIY_ImGuiNames::MenuCategoryNameSound, "MusicPlayer", "MusicPlayer")
{
}

void FDIY_ImGuiContentProxy_MusicPlayer::DrawWindow(float DeltaTime)
{
    ImGui::Text("BGM");
    ImGui::SliderInt("Hour", &DIY_GlobalDebugSettings::sInstance.OverrideBGMHour, -1, 23);
}

#endif
