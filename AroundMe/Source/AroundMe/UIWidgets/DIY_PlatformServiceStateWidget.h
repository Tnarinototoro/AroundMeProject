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
    void UpdateText(const FString &NewText);

    UFUNCTION()
    void StartServiceButtonClicked();

    UFUNCTION()
    void StopServiceButtonClicked();

private:
    UPROPERTY()
    class UTextBlock *InfoTextBlock;
    class UCanvasPanel *infoPanel;
    class UButton *StartServiceButton;
    class UVerticalBox *VerticalBox;
    class UButton *StopServiceButton;

    class UEditableText *MessageTitleInput;
    class UEditableText *MessageContentInput;
    class UButton *SendMessageButton;
    class UButton *ResetWifiDirectStateButton;

    class UButton *ManuallySyncRealWorldInfoButton;

    UFUNCTION()
    void SendMessageButtonClicked();

    UFUNCTION()
    void ResetWifiDirectStateButtonClicked();

    UFUNCTION()
    void ManuallySyncRealWorldInfoButtonClicked();
};