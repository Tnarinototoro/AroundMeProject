#include "DIY_EmergentInteractDefines.h"

void DIY_InteractUtilities::SetFlag(uint64 &OriginCombinedFlag, const uint64 &inFlag)
{
    OriginCombinedFlag|=inFlag;
}

void DIY_InteractUtilities::UnSetFlag(uint64 &OriginCombineFlag, const uint64 &inFlag)
{
    OriginCombineFlag&=(~inFlag);
}