#include "DIY_StylizedRenderSettings.h"

UDIY_StylizedRenderSettings::UDIY_StylizedRenderSettings(const FObjectInitializer &ObjectInitializer)
    : Super(ObjectInitializer)
{
}

const UDIY_StylizedRenderSettings *UDIY_StylizedRenderSettings::Get()
{
    return GetDefault<UDIY_StylizedRenderSettings>();
}
