// Copyright (c) 2025 KOJIMA PRODUCTIONS
// Author: James Einosuke Stanton (stanton@kojimaproductions.jp)

#pragma once

#include "CoreMinimal.h"

#include "DIY_ImGuiPositionOverride.generated.h"

UENUM()
enum class EDIY_ImGuiPositionOverride : uint8
{
    None,
    TopLeft,
    TopCenter,
    TopRight,
    CenterLeft,
    Center,
    CenterRight,
    BottomLeft,
    BottomCenter,
    BottomRight,

    Count
};
