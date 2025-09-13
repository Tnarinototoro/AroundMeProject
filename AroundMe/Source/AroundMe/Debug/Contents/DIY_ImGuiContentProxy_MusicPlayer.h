#pragma once
#if 1

#include "../DIY_ImGuiProxy.h"

class FDIY_ImGuiContentProxy_MusicPlayer : public FDIY_ImGuiContentProxy_MenuWindow
{
public:
    FDIY_ImGuiContentProxy_MusicPlayer(FDIY_ImGuiProxy &InOwningProxy);

    virtual void DrawWindow(float DeltaTime) override;

public:
    int hour{-1};
};
#endif
