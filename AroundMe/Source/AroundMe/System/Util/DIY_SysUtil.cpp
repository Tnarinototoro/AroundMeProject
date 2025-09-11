
#include "DIY_SysUtil.h"

UGameInstance *DIY_SysUtil::GetGameInstance(const UObject *Object)
{
    if (UWorld *World = GetWorld(Object))
    {
        return World->GetGameInstance();
    }
    return nullptr;
}
