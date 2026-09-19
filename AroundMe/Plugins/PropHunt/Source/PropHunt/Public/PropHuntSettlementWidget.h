#pragma once

#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "PropHuntSettlementWidget.generated.h"

class UButton;
class UTextBlock;

// 结算界面：胜负提示 + 再来一局 / 回主菜单。
UCLASS()
class PROPHUNT_API UPropHuntSettlementWidget : public UCommonActivatableWidget
{
    GENERATED_BODY()

public:
    void SetResultText(const FString& Text);
    virtual void NativeOnInitialized() override;

protected:
    UFUNCTION()
    void OnRematchClicked();

    UFUNCTION()
    void OnMainMenuClicked();

    UPROPERTY()
    UTextBlock* ResultText;

    UPROPERTY()
    UButton* RematchButton;

    UPROPERTY()
    UButton* MainMenuButton;
};
