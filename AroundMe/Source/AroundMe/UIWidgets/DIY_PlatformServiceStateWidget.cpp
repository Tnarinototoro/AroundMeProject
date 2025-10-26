#include "DIY_PlatformServiceStateWidget.h"
#include "SlateOptMacros.h"
#include "Components/TextBlock.h"
#include "Components/Button.h"
#include "Components/VerticalBox.h"
#include "Components/Widget.h"
#include "Blueprint/WidgetTree.h"
#include "../GameUtilities/Logs/DIY_LogHelper.h"
#include "Components/CanvasPanel.h"
#include "Components/CanvasPanelSlot.h"
#include "Components/VerticalBoxSlot.h"
#include "DIYBFL_PlatformService.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/World.h"
void UDIY_PlatformServiceStateWidget::NativeConstruct()
{
    Super::NativeConstruct();
}

void UDIY_PlatformServiceStateWidget::NativeOnInitialized()
{
    Super::NativeOnInitialized();

    VerticalBox = WidgetTree->ConstructWidget<UVerticalBox>(UVerticalBox::StaticClass(), TEXT("RootVerticalBox"));
    if (VerticalBox)
    {
        WidgetTree->RootWidget = VerticalBox;

        InfoTextBlock = WidgetTree->ConstructWidget<UTextBlock>(UTextBlock::StaticClass(), TEXT("Text"));
        if (InfoTextBlock)
        {
            InfoTextBlock->SetText(FText::FromString(TEXT("PlatFormService Panel")));
            FSlateFontInfo cur_font = InfoTextBlock->GetFont();
            cur_font.Size = 18.0f;
            InfoTextBlock->SetFont(cur_font);
            InfoTextBlock->SetColorAndOpacity(FLinearColor::Red);

            UVerticalBoxSlot *TextBlockSlot = VerticalBox->AddChildToVerticalBox(InfoTextBlock);
            if (TextBlockSlot)
            {
                TextBlockSlot->SetSize(FSlateChildSize());
                TextBlockSlot->SetHorizontalAlignment(EHorizontalAlignment::HAlign_Center);
                TextBlockSlot->SetPadding(FMargin(0, 20));
            }
        }

        StartServiceButton = WidgetTree->ConstructWidget<UButton>(UButton::StaticClass(), TEXT("StartServiceButton"));
        if (StartServiceButton)
        {
            
            StartServiceButton->OnClicked.AddDynamic(this, &UDIY_PlatformServiceStateWidget::StartServiceButtonClicked);
            UTextBlock *ButtonText = WidgetTree->ConstructWidget<UTextBlock>(UTextBlock::StaticClass(), TEXT("StartServiceButtonText"));
            if (ButtonText)
            {
                ButtonText->SetText(FText::FromString(TEXT("Start Service")));
                ButtonText->SetColorAndOpacity(FLinearColor::White);
                ButtonText->SetFont(FSlateFontInfo(FPaths::EngineContentDir() / TEXT("Slate/Fonts/Roboto-Regular.ttf"), 24));

                StartServiceButton->AddChild(ButtonText);
            }

            UVerticalBoxSlot *ButtonSlot = VerticalBox->AddChildToVerticalBox(StartServiceButton);
            if (ButtonSlot)
            {
                ButtonSlot->SetSize(FSlateChildSize());
                ButtonSlot->SetHorizontalAlignment(EHorizontalAlignment::HAlign_Fill);
                ButtonSlot->SetVerticalAlignment(EVerticalAlignment::VAlign_Fill);
                ButtonSlot->SetPadding(FMargin(0, 20));
            }
        }

        StopServiceButton = WidgetTree->ConstructWidget<UButton>(UButton::StaticClass(), TEXT("StopServiceButton"));
        if (StopServiceButton)
        {
            
            StopServiceButton->OnClicked.AddDynamic(this, &UDIY_PlatformServiceStateWidget::StopServiceButtonClicked);
            StopServiceButton->SetIsEnabled(false);
            UTextBlock *ButtonText = WidgetTree->ConstructWidget<UTextBlock>(UTextBlock::StaticClass(), TEXT("StopServiceButtonText"));
            if (ButtonText)
            {
                ButtonText->SetText(FText::FromString(TEXT("Stop Service")));
                ButtonText->SetColorAndOpacity(FLinearColor::White);
                ButtonText->SetFont(FSlateFontInfo(FPaths::EngineContentDir() / TEXT("Slate/Fonts/Roboto-Regular.ttf"), 24));

                StopServiceButton->AddChild(ButtonText);
            }

            UVerticalBoxSlot *ButtonSlot = VerticalBox->AddChildToVerticalBox(StopServiceButton);
            if (ButtonSlot)
            {

                ButtonSlot->SetSize(FSlateChildSize());
                ButtonSlot->SetHorizontalAlignment(EHorizontalAlignment::HAlign_Fill);
                ButtonSlot->SetVerticalAlignment(EVerticalAlignment::VAlign_Fill);
                ButtonSlot->SetPadding(FMargin(0, 20));
            }
        }

    }
}

void UDIY_PlatformServiceStateWidget::UpdateText(const FString &NewText)
{
    if (InfoTextBlock)
    {
        InfoTextBlock->SetText(FText::FromString(NewText));
    }
}

void UDIY_PlatformServiceStateWidget::StartServiceButtonClicked()
{
    ensureMsgf(StartServiceButton != nullptr && nullptr != StopServiceButton, TEXT("Buttons are not initialized well"));
    StartServiceButton->SetIsEnabled(!StartServiceButton->GetIsEnabled());
    StopServiceButton->SetIsEnabled(!StopServiceButton->GetIsEnabled());
    UDIYBFL_PlatformService::StartPlatformService();
    EASY_LOG_MAINPLAYER("StartServiceButtonClicked");
}

void UDIY_PlatformServiceStateWidget::StopServiceButtonClicked()
{
    ensureMsgf(StartServiceButton != nullptr && nullptr != StopServiceButton, TEXT("Buttons are not initialized well"));
    StartServiceButton->SetIsEnabled(!StartServiceButton->GetIsEnabled());
    StopServiceButton->SetIsEnabled(!StopServiceButton->GetIsEnabled());
    UDIYBFL_PlatformService::StopPlatformService();
    EASY_LOG_MAINPLAYER("StopServiceButtonClicked");
}
