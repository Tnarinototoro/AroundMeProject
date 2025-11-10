#pragma once
#if UE_BUILD_DEVELOPMENT || UE_BUILD_DEBUG

#include "../DIY_ImGuiProxy.h"

class FDIY_ImGuiContentProxy_Weather : public FDIY_ImGuiContentProxy_MenuWindow
{
public:
    FDIY_ImGuiContentProxy_Weather(FDIY_ImGuiProxy &InOwningProxy);

    virtual void DrawWindow(float DeltaTime) override;

public:

    //0-20
    int32 WeatherPresetType{0};
};
#endif
