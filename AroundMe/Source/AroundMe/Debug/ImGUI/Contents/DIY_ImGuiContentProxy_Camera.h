#pragma once
#if 1
#include "../DIY_ImGuiNames.h"
#include "../DIY_ImGuiProxy.h"

class FDIY_ImGuiContentProxy_Camera : public FDIY_ImGuiContentProxy_MenuWindow
{
public:
    FDIY_ImGuiContentProxy_Camera(FDIY_ImGuiProxy &InOwningProxy);

    virtual void DrawWindow(float DeltaTime) override;

public:
};
#endif
