#pragma once
#if 1

#include "../DIY_ImGuiProxy.h"

class FDIY_ImGuiContentProxy_Weather : public FDIY_ImGuiContentProxy_MenuWindow
{
public:
    FDIY_ImGuiContentProxy_Weather(FDIY_ImGuiProxy &InOwningProxy);

    virtual void DrawWindow(float DeltaTime) override;

public:
    int hour{-1};
};
#endif
