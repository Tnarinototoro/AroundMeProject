#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "DIY_PlatformServiceStateWidget.generated.h"


UCLASS()
class AROUNDME_API UDIY_PlatformServiceStateWidget : public UUserWidget
{
    GENERATED_BODY()

public:
    virtual void NativeConstruct() override;
    virtual void NativeOnInitialized() override;
    void UpdateText(const FString& NewText);

private:
    UPROPERTY()
    class UTextBlock* InfoTextBlock;
    class UCanvasPanel* infoPanel;
    class UButton *StartServiceButton;
    class UVerticalBox* VerticalBox;
    class UButton *StopServiceButton;
};