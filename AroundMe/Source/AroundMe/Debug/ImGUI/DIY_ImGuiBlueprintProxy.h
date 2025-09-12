// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DIY_ImGuiBlueprintProxy.generated.h"

/**
 *
 */
UCLASS(Blueprintable)
class AROUNDME_API UDIY_ImGuiBlueprintProxy : public UObject
{
    GENERATED_BODY()
public:
};

#define ImGuiProxyPath(InPath)           \
    constexpr static const TCHAR *Path() \
    {                                    \
        return InPath;                   \
    }

#if 1

template <typename T>
T *GetImGuiBlueprintProxy()
{
    static_assert(TIsDerivedFrom<T, UDIY_ImGuiBlueprintProxy>::Value, "T must be derived from UDIY_ImGuiBlueprintProxy");
    static TWeakObjectPtr<T> Instance = nullptr;
    if (!Instance.IsValid())
    {
        FSoftClassPath ClassPath(T::Path());
        UClass *Class = ClassPath.TryLoadClass<T>();
        Instance = Class->GetDefaultObject<T>();
    }
    return Instance.Get();
}

#endif
