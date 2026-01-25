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
#include "Kismet/GameplayStatics.h"
#include "Engine/World.h"
#include "DIY_PlatformServiceSubsystem.h"
#include "Components/EditableText.h"

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

        MessageTitleInput = WidgetTree->ConstructWidget<UEditableText>(UEditableText::StaticClass(), TEXT("MessageTitleInput"));
        if (MessageTitleInput)
        {
            MessageTitleInput->SetHintText(FText::FromString(TEXT("Enter Message Title...")));
            MessageTitleInput->WidgetStyle.Font.Size = 16.0f;

            UVerticalBoxSlot *TitleSlot = VerticalBox->AddChildToVerticalBox(MessageTitleInput);
            if (TitleSlot)
            {
                TitleSlot->SetPadding(FMargin(10.f, 10.f, 10.f, 5.f));
                TitleSlot->SetHorizontalAlignment(EHorizontalAlignment::HAlign_Fill);
            }
        }

        MessageContentInput = WidgetTree->ConstructWidget<UEditableText>(UEditableText::StaticClass(), TEXT("MessageContentInput"));
        if (MessageContentInput)
        {
            MessageContentInput->SetHintText(FText::FromString(TEXT("Enter Message Content...")));
            MessageContentInput->WidgetStyle.Font.Size = 16.0f;

            UVerticalBoxSlot *ContentSlot = VerticalBox->AddChildToVerticalBox(MessageContentInput);
            if (ContentSlot)
            {
                ContentSlot->SetPadding(FMargin(10.f, 5.f, 10.f, 10.f));
                ContentSlot->SetHorizontalAlignment(EHorizontalAlignment::HAlign_Fill);
            }
        }

        SendMessageButton = WidgetTree->ConstructWidget<UButton>(UButton::StaticClass(), TEXT("SendMessageButton"));
        if (SendMessageButton)
        {
            SendMessageButton->OnClicked.AddDynamic(this, &UDIY_PlatformServiceStateWidget::SendMessageButtonClicked);

            UTextBlock *SendBtnText = WidgetTree->ConstructWidget<UTextBlock>(UTextBlock::StaticClass());
            if (SendBtnText)
            {
                SendBtnText->SetText(FText::FromString(TEXT("SEND TO ALIEN")));
                FSlateFontInfo BtnFont = SendBtnText->GetFont();
                BtnFont.Size = 20.f;
                SendBtnText->SetFont(BtnFont);
                SendMessageButton->AddChild(SendBtnText);
            }

            UVerticalBoxSlot *SendBtnSlot = VerticalBox->AddChildToVerticalBox(SendMessageButton);
            if (SendBtnSlot)
            {
                SendBtnSlot->SetPadding(FMargin(20.f, 10.f, 20.f, 20.f));
                SendBtnSlot->SetHorizontalAlignment(EHorizontalAlignment::HAlign_Fill);
            }
        }

        ResetWifiDirectStateButton = WidgetTree->ConstructWidget<UButton>(UButton::StaticClass(), TEXT("ResetWifiDirectStateButton"));
        if (ResetWifiDirectStateButton)
        {
            ResetWifiDirectStateButton->SetIsEnabled(true);
            ResetWifiDirectStateButton->OnClicked.AddDynamic(this, &UDIY_PlatformServiceStateWidget::ResetWifiDirectStateButtonClicked);

            UTextBlock *ResetWifiBtnText = WidgetTree->ConstructWidget<UTextBlock>(UTextBlock::StaticClass());
            if (ResetWifiBtnText)
            {
                ResetWifiBtnText->SetText(FText::FromString(TEXT("ResetWifiState")));
                FSlateFontInfo BtnFont = ResetWifiBtnText->GetFont();
                BtnFont.Size = 20.f;
                ResetWifiBtnText->SetFont(BtnFont);
                ResetWifiDirectStateButton->AddChild(ResetWifiBtnText);
            }

            UVerticalBoxSlot *ResetWifiBtnSlot = VerticalBox->AddChildToVerticalBox(ResetWifiDirectStateButton);
            if (ResetWifiBtnSlot)
            {
                ResetWifiBtnSlot->SetPadding(FMargin(20.f, 10.f, 20.f, 20.f));
                ResetWifiBtnSlot->SetHorizontalAlignment(EHorizontalAlignment::HAlign_Fill);
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

    if (UDIYPlatformServiceSubsystem *Subsys = UDIYPlatformServiceSubsystem::Get(GetWorld()))
    {
        Subsys->StartPlatformService();
    }

    EASY_LOG_MAINPLAYER("StartServiceButtonClicked");
}

void UDIY_PlatformServiceStateWidget::StopServiceButtonClicked()
{
    ensureMsgf(StartServiceButton != nullptr && nullptr != StopServiceButton, TEXT("Buttons are not initialized well"));
    StartServiceButton->SetIsEnabled(!StartServiceButton->GetIsEnabled());
    StopServiceButton->SetIsEnabled(!StopServiceButton->GetIsEnabled());
    if (UDIYPlatformServiceSubsystem *Subsys = UDIYPlatformServiceSubsystem::Get(GetWorld()))
    {
        Subsys->StopPlatformService();
    }
    EASY_LOG_MAINPLAYER("StopServiceButtonClicked");
}

void UDIY_PlatformServiceStateWidget::SendMessageButtonClicked()
{

    if (MessageTitleInput && MessageContentInput)
    {
        FString Title = MessageTitleInput->GetText().ToString();
        FString Content = MessageContentInput->GetText().ToString();

        EASY_LOG_MAINPLAYER("Sending Alien Message - Title: %s, Content: %s", *Title, *Content);
        if (UDIYPlatformServiceSubsystem *Subsys = UDIYPlatformServiceSubsystem::Get(GetWorld()))
        {
            Subsys->PushAlienMessage(Title, Content);
        }
    }
}

void UDIY_PlatformServiceStateWidget::ResetWifiDirectStateButtonClicked()
{
    ensureMsgf(ResetWifiDirectStateButton != nullptr, TEXT("ResetWifiDirectStateButton not initialized well"));

    if (UDIYPlatformServiceSubsystem *Subsys = UDIYPlatformServiceSubsystem::Get(GetWorld()))
    {
        Subsys->ResetWifiDirectState();
    }
    EASY_LOG_MAINPLAYER("ResetWifiDirectStateButton Clicked");
}
