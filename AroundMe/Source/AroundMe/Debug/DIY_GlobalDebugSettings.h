#if UE_BUILD_DEVELOPMENT || UE_BUILD_DEBUG
#pragma once

class DIY_GlobalDebugSettings
{
public:
    bool bShowControlRigInfo{false};
    bool bShowKagoDebugInfo{false};
    bool bShowHandHeadDebugInfo{false};
    bool bShowRobotHandDebugInfo{false};
    bool bShowItemState{false};
    bool bShowPlayerState{false};
    int OverrideBGMHour{-1};
    static DIY_GlobalDebugSettings sInstance;
};
#endif
