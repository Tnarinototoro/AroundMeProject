#include "DIY_CraftingPlatformConsoleWidget.h"

#include "Components/Button.h"
#include "Blueprint/WidgetTree.h"
#include "Components/TextBlock.h"
#include "Components/CanvasPanel.h"
#include "Components/Image.h"
#include "Components/CanvasPanelSlot.h"
#include "../GameUtilities/Logs/DIY_LogHelper.h"
#include "../GameUtilities/DIY_Utilities.h"
#include "../Player/Items/DIY_ItemManager.h"
#include "Components/VerticalBox.h"
#include "Components/VerticalBoxSlot.h"
void UDIY_CraftingPlatformConsoleWidget::NativeConstruct()
{
    Super::NativeConstruct();
}

void UDIY_CraftingPlatformConsoleWidget::InitializeCraftingPlatformConsole()
{

    CreateConsoleWidget();
}

void UDIY_CraftingPlatformConsoleWidget::UpdateConsoleReceiptText(const FString &inString)
{
    if (nullptr == ReceiptText)
        return;
    ReceiptText->SetText(FText::FromString(inString));
}

void UDIY_CraftingPlatformConsoleWidget::RequestToggleExecuteCraftingEnabled(bool inIsEnabled)
{
    ensureMsgf(nullptr != ExecuteCraftingButton, TEXT("ExecuteCraftingButton is null"));

    if (nullptr != ExecuteCraftingButton && ExecuteCraftingButton->GetIsEnabled() != inIsEnabled)
    {
        ExecuteCraftingButton->SetIsEnabled(inIsEnabled);
    }
}
void UDIY_CraftingPlatformConsoleWidget::NativeOnInitialized()
{
    Super::NativeOnInitialized();

    BackGroundVerticalBox = WidgetTree->ConstructWidget<UVerticalBox>(UVerticalBox::StaticClass(), TEXT("BackGroundVerticalBox"));
    WidgetTree->RootWidget = BackGroundVerticalBox;
}

void UDIY_CraftingPlatformConsoleWidget::RequestChangeConsolWidgetImage(UTexture2D *Texture)
{
    ReceiptImage->SetBrushFromTexture(Texture);

    FSlateBrush tmp_brush = ReceiptImage->GetBrush();
    tmp_brush.SetImageSize({200.f, 200.f});
    ReceiptImage->SetBrush(tmp_brush);
}

void UDIY_CraftingPlatformConsoleWidget::RquestToggleCraftButtonEnable(bool inEnable)
{
    if (ExecuteCraftingButton->GetIsEnabled() != inEnable)
    {
        ExecuteCraftingButton->SetIsEnabled(inEnable);
    }
}
void UDIY_CraftingPlatformConsoleWidget::CreateConsoleWidget()
{

    if (!BackGroundVerticalBox)
        return;

    BackGroundVerticalBox->ClearChildren();
    ReceiptImage = WidgetTree->ConstructWidget<UImage>(UImage::StaticClass(), TEXT("ReceiptImage"));

    ReceiptText = WidgetTree->ConstructWidget<UTextBlock>(UTextBlock::StaticClass(), TEXT("ReceiptText"));

    ExecuteCraftingButton = WidgetTree->ConstructWidget<UButton>(UButton::StaticClass(), TEXT("ExecuteCraftingButton"));

    ensureMsgf(nullptr != ReceiptImage && nullptr != ReceiptText && nullptr != ExecuteCraftingButton, TEXT("DIY_CraftingPlatformConsoleWidget Created Successfully "));
    UVerticalBoxSlot *cur_slot = BackGroundVerticalBox->AddChildToVerticalBox(ReceiptImage);

    cur_slot->SetSize(FSlateChildSize{ESlateSizeRule::Automatic});

    cur_slot->SetHorizontalAlignment(EHorizontalAlignment::HAlign_Center);
    cur_slot->SetVerticalAlignment(EVerticalAlignment::VAlign_Center);
    cur_slot->SetPadding(FMargin(0, 20));
    RequestChangeConsolWidgetImage(UDIY_Utilities::DIY_GetItemManagerInstance(GetWorld())->GetItemIconTexture(-1));

    cur_slot = BackGroundVerticalBox->AddChildToVerticalBox(ReceiptText);
    cur_slot->SetHorizontalAlignment(EHorizontalAlignment::HAlign_Center);
    cur_slot->SetVerticalAlignment(EVerticalAlignment::VAlign_Center);
    cur_slot->SetPadding(FMargin(0, 20));
    ReceiptText->SetText(FText::FromString(TEXT("Craft item info sample")));

    cur_slot = BackGroundVerticalBox->AddChildToVerticalBox(ExecuteCraftingButton);
    cur_slot->SetHorizontalAlignment(EHorizontalAlignment::HAlign_Center);
    cur_slot->SetVerticalAlignment(EVerticalAlignment::VAlign_Center);
    cur_slot->SetPadding(FMargin(0, 20));
    UTextBlock *button_text = WidgetTree->ConstructWidget<UTextBlock>(UTextBlock::StaticClass(), TEXT("CraftButton"));
    button_text->SetText(FText::FromString(TEXT("Craft")));
    FSlateFontInfo FontInfo = button_text->GetFont();

    FontInfo.Size = 18.0f;
    button_text->SetFont(FontInfo);
    ExecuteCraftingButton->AddChild(button_text);

    // for (int32 i = 0; i < NumCommands; ++i)
    // {
    //     UButton *CommandButton = WidgetTree->ConstructWidget<UButton>();

    //     if (CommandButton)
    //     {
    //         CommandButton->SetDisplayLabel(FString::Printf(TEXT("Cmd_Discard_%d"), i));
    //         CommandButton->SetIsEnabled(false);
    //         UTextBlock *ButtonText = WidgetTree->ConstructWidget<UTextBlock>(UTextBlock::StaticClass(), TEXT("DiscardButttonText"));
    //         if (ButtonText)
    //         {
    //             ButtonText->SetText(FText::FromString(TEXT("Discard")));
    //             ButtonText->SetColorAndOpacity(FLinearColor::White);
    //             ButtonText->SetFont(FSlateFontInfo(FPaths::EngineContentDir() / TEXT("Slate/Fonts/Roboto-Regular.ttf"), 24));

    //             CommandButton->AddChild(ButtonText);
    //         }
    //         CommandList->AddChild(CommandButton);
    //     }
    // }
}

// FString UDIY_CraftingPlatformConsoleWidget::GetCommandStringAt(uint32 inIndex)
// {
//     ensureMsgf(inIndex < (uint32)GetCommandsNum(), TEXT("GetCommand string at invalid index"));

//     UButton *cur_button = Cast<UButton>(CommandList->GetChildAt(inIndex));

//     ensureMsgf(nullptr != cur_button, TEXT("cur button is nullptr"));
//     return cur_button->GetDisplayLabel();
// }