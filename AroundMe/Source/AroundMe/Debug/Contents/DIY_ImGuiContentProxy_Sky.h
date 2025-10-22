#pragma once
#if 1

#include "../DIY_ImGuiProxy.h"

class FDIY_ImGuiContentProxy_Sky : public FDIY_ImGuiContentProxy_MenuWindow
{
public:
    FDIY_ImGuiContentProxy_Sky(FDIY_ImGuiProxy &InOwningProxy);

    virtual void DrawWindow(float DeltaTime) override;

public:
    float TimeOfDay{1200.f};
};
#endif
