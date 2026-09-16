#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "PropHuntMenuRootWidget.generated.h"

// 承载 Common UI 菜单栈的 root UserWidget（UUserWidget 是 abstract，需要一个具体子类）。
UCLASS()
class PROPHUNT_API UPropHuntMenuRootWidget : public UUserWidget
{
    GENERATED_BODY()
};
