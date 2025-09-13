#pragma once
#if 1

#include "../DIY_ImGuiProxy.h"

class FDIY_ImGuiContentProxy_Player : public FDIY_ImGuiContentProxy_MenuWindow
{
public:
    FDIY_ImGuiContentProxy_Player(FDIY_ImGuiProxy &InOwningProxy);

    virtual void DrawWindow(float DeltaTime) override;

public:
    bool bShowPlayerState{false};
};
#endif
