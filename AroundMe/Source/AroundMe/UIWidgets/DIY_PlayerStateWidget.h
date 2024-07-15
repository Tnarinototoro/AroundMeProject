#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "DIY_PlayerStateWidget.generated.h"

UCLASS()
class AROUNDME_API UDIY_PlayerStateWidget : public UUserWidget
{
    GENERATED_BODY()

public:
    virtual void NativeConstruct() override;
    virtual void NativeOnInitialized() override;
    void UpdateText(const FString &NewText);

private:
    UPROPERTY()
    class UTextBlock *InfoTextBlock;
    class UCanvasPanel *infoPanel;
};