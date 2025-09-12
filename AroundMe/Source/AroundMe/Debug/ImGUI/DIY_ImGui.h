#pragma once

#if 1
#include <imgui.h>

DECLARE_LOG_CATEGORY_CLASS(LogDIY_ImGui, Log, All);

namespace DIY_ImGui
{
    void Tick(const UObject *Owner, float DeltaTime, const TFunctionRef<void()> &CustomRenderFunction);
}

#endif