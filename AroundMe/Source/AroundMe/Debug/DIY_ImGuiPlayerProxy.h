#pragma once

#if UE_BUILD_DEVELOPMENT || UE_BUILD_DEBUG
#include "DIY_ImGuiProxy.h"

class FDIY_ImGuiCommonPlayerProxy : public FDIY_ImGuiProxy
{
public:
    FDIY_ImGuiCommonPlayerProxy(UDIY_DebugImGuiSubsystem &InSubsystem);
    void DrawFramerate();
    void DrawUsedMemory();
    void DrawDynamicResolution();
    void DrawBuildVersion();

private:
    void LoadBuildVersion();
    FString BuildVersionString;
};

class FDIY_ImGuiMainPlayerProxy : public FDIY_ImGuiCommonPlayerProxy
{
public:
    FDIY_ImGuiMainPlayerProxy(UDIY_DebugImGuiSubsystem &InSubsystem);

    virtual ~FDIY_ImGuiMainPlayerProxy() override
    {
    }

public:
    virtual void UpdateWindows(float DeltaTime) override;
    virtual void UpdateMainMenu(float DeltaTime) override;
};

#endif