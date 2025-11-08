#pragma once
#if UE_BUILD_DEVELOPMENT || UE_BUILD_DEBUG

#include "../DIY_ImGuiProxy.h"

class FDIY_ImGuiContentProxy_Sky : public FDIY_ImGuiContentProxy_MenuWindow
{
public:
    FDIY_ImGuiContentProxy_Sky(FDIY_ImGuiProxy &InOwningProxy);

    virtual void DrawWindow(float DeltaTime) override;

public:



    //0-2400
    float TimeOfDay{1200.f};

    //0-2.0f
    float OverallIntensity{1.f};

    //-0.2-1.f
    float Contrast{0.1f};

    //0-1.5f
    float Saturation{1.0f};


};
#endif
