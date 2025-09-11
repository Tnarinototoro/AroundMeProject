#pragma once
#include <functional>
#include "EngineUtils.h"

namespace DIY_SysUtil
{
    template <class Class>
    bool Implements(UObject *Object)
    {
        return (IsValid(Object) && Object->Implements<Class>());
    }

    FORCEINLINE UWorld *GetWorld(const UObject *Object)
    {
        return GEngine->GetWorldFromContextObject(Object, EGetWorldErrorMode::ReturnNull);
    }

    UGameInstance *GetGameInstance(const UObject *Object);

    template <class T>
    T *GetWorldSubsystem(const UObject *Object)
    {
        if (UWorld *World = GetWorld(Object))
        {
            return World->GetSubsystem<T>();
        }
        return nullptr;
    }

    template <class T>
    T *GetGameInstanceSubsystem(const UObject *Object)
    {
        if (UGameInstance *GameInstance = GetGameInstance(Object))
        {
            return GameInstance->GetSubsystem<T>();
        }
        return nullptr;
    }

    template <class T>
    T *FindFirstActorInWorld(const UObject *Object, const TSubclassOf<T> &Class = T::StaticClass())
    {
        if (UWorld *World = GetWorld(Object))
        {
            for (TActorIterator<T> It(World, Class); It; ++It)
            {
                if (IsValid(*It))
                {
                    return *It;
                }
            }
        }
        return nullptr;
    }

}
