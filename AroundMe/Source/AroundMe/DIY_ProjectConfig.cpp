#include "DIY_ProjectConfig.h"

const UDIY_ProjectConfig* UDIY_ProjectConfig::GetConfigInstance()
{
	return GetDefault<UDIY_ProjectConfig>();
}

UDIY_ProjectConfig::UDIY_ProjectConfig(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
   
}