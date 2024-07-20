#include "DIY_CraftReceiptRowWidget.h"
#include "Components/HorizontalBox.h"
#include "Components/CanvasPanel.h"
#include "Components/Border.h"
#include "Components/Image.h"
#include "Components/TextBlock.h"
#include "Components/CanvasPanelSlot.h"
#include "Blueprint/WidgetTree.h"
#include "../GameUtilities/DIY_Utilities.h"
#include "../Player/Items/DIY_ItemManager.h"
#include "Components/HorizontalBoxSlot.h"

void UDIY_CraftReceiptRowWidget::InitializeReceipt(int32 ColNum, const FVector2D &IconImageSlotSize, float TextSlotFontSize)
{
    HorizontalBox = WidgetTree->ConstructWidget<UHorizontalBox>(UHorizontalBox::StaticClass(), TEXT("HorizontalBox"));
    if (HorizontalBox)
    {
        WidgetTree->RootWidget = HorizontalBox;

        for (int32 Col = 0; Col < ColNum; ++Col)
        {
            AddSlot(Col, IconImageSlotSize, TextSlotFontSize);
        }
    }
}

void UDIY_CraftReceiptRowWidget::AddSlot(int32 SlotIndex, const FVector2D &IconImageSlotSize, float TextSlotFontSize)
{
    UCanvasPanel *SlotCanvas = WidgetTree->ConstructWidget<UCanvasPanel>();
    if (SlotCanvas)
    {
        UBorder *Border = WidgetTree->ConstructWidget<UBorder>();
        UImage *IconImage = WidgetTree->ConstructWidget<UImage>();
        UTextBlock *CountText = WidgetTree->ConstructWidget<UTextBlock>();

        if (Border && IconImage && CountText)
        {
            IconImage->SetBrushFromTexture(UDIY_Utilities::DIY_GetItemManagerInstance()->GetItemIconTexture(SlotIndex));
            CountText->SetText(FText::AsNumber(SlotIndex));
            Border->SetBrushColor(FLinearColor::Transparent);
            Border->SetPadding(FMargin(1.0f));

            UCanvasPanelSlot *BorderSlot = SlotCanvas->AddChildToCanvas(Border);
            if (BorderSlot)
            {
                BorderSlot->SetSize(IconImageSlotSize);
            }

            Border->AddChild(IconImage);
            Border->SetHorizontalAlignment(HAlign_Fill);
            Border->SetVerticalAlignment(VAlign_Fill);

            UCanvasPanelSlot *TextSlot = SlotCanvas->AddChildToCanvas(CountText);

            FSlateFontInfo FontInfo = CountText->GetFont();
            FontInfo.Size = TextSlotFontSize;
            CountText->SetFont(FontInfo);
            CountText->SetVisibility(ESlateVisibility::Hidden);

            if (TextSlot)
            {
                TextSlot->SetAnchors(FAnchors(1, 1));
                TextSlot->SetOffsets(FMargin(-30, -30, 0, 0));
                TextSlot->SetAlignment(FVector2D(1.0f, 1.0f));
            }

            UHorizontalBoxSlot *HorizontalBoxSlot = HorizontalBox->AddChildToHorizontalBox(SlotCanvas);
            if (HorizontalBoxSlot)
            {
                HorizontalBoxSlot->SetPadding(FMargin(1.0f));
                HorizontalBoxSlot->SetHorizontalAlignment(HAlign_Fill);
                HorizontalBoxSlot->SetVerticalAlignment(VAlign_Fill);
            }
        }
    }
}
