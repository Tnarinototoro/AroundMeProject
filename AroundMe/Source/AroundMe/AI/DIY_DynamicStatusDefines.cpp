#include "DIY_DynamicStatusDefines.h"

bool FDIY_DynamicStatus::IsSick() const
{
    return HealthTags.HasTag(FGameplayTag::RequestGameplayTag("Status.Physical"));
}
