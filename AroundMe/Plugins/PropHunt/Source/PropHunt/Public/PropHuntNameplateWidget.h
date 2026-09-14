#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "PropHuntNameplateWidget.generated.h"

class UTextBlock;

// 头顶名牌：显示玩家名字 + 角色。纯 C++ 构建，不用蓝图。
UCLASS()
class PROPHUNT_API UPropHuntNameplateWidget : public UUserWidget
{
    GENERATED_BODY()

public:
    void SetInfoText(const FString& Text);

protected:
    virtual void NativeOnInitialized() override;

    UPROPERTY()
    UTextBlock* InfoText;
};
