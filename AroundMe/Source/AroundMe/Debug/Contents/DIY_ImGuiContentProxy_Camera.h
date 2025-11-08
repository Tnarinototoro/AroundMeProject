#pragma once
#if UE_BUILD_DEVELOPMENT || UE_BUILD_DEBUG

#include "../DIY_ImGuiProxy.h"

class FDIY_ImGuiContentProxy_Camera : public FDIY_ImGuiContentProxy_MenuWindow
{
public:
    FDIY_ImGuiContentProxy_Camera(FDIY_ImGuiProxy &InOwningProxy);

    virtual void DrawWindow(float DeltaTime) override;

public:
};
#endif
