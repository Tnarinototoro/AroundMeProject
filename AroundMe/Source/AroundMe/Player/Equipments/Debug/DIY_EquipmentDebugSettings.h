#if UE_BUILD_DEVELOPMENT || UE_BUILD_DEBUG
#pragma once

class DIY_EquipmentDebugSettings
{
public:
	bool bShowControlRigInfo{false};
	bool bShowKagoDebugInfo{false};
	bool bShowHandHeadDebugInfo{false};
	bool bShowRobotHandDebugInfo{false};

	static DIY_EquipmentDebugSettings sInstance;

};
#endif
