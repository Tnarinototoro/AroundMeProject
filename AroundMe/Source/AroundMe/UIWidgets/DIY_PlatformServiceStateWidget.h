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

    // --- 新增组件 ---
    class UEditableText* MessageTitleInput;   // 消息标题输入框
    class UEditableText* MessageContentInput; // 消息内容输入框
    class UButton* SendMessageButton;         // 发送按钮

    UFUNCTION()
    void SendMessageButtonClicked();          // 发送按钮的回调
};