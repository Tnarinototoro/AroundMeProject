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
#include "../GameUtilities/Logs/DIY_LogHelper.h"
int32 UDIY_CraftReceiptRowWidget::col_num_setup = -1;
void UDIY_CraftReceiptRowWidget::InitializeReceipt(const TArray<FPrimaryAssetId> *inParentCachedItemIDs, int32 cur_row_index, int32 ColNum, const FVector2D &IconImageSlotSize, float TextSlotFontSize)
{
    HorizontalBox = WidgetTree->ConstructWidget<UHorizontalBox>(UHorizontalBox::StaticClass(), TEXT("HorizontalBox"));
    saved_cur_row_index = cur_row_index;
    ParentCachedItemIDs = inParentCachedItemIDs;
    ensureAlwaysMsgf(ParentCachedItemIDs, TEXT("ParentCachedItemIDs is null"));
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

            IconImage->SetBrushFromTexture(
                UDIY_Utilities::DIY_GetItemManagerInstance(
                    GetWorld())
                    ->GetItemIconTexture(
                        GetAssetIDAtThisRowWithCol(SlotIndex))

            );

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

class UBorder *UDIY_CraftReceiptRowWidget::GetSlotBorder(int32 col) const
{
    return Cast<UBorder>(GetSlotCanvas(col)->GetChildAt(0));
}
class UImage *UDIY_CraftReceiptRowWidget::GetSlotImage(int32 col) const
{
    return Cast<UImage>(GetSlotBorder(col)->GetChildAt(0));
}
class UTextBlock *UDIY_CraftReceiptRowWidget::GetSlotCountText(int32 col) const
{
    return Cast<UTextBlock>(GetSlotCanvas(col)->GetChildAt(1));
}
class UCanvasPanel *UDIY_CraftReceiptRowWidget::GetSlotCanvas(int32 col) const
{
    return Cast<UCanvasPanel>(HorizontalBox->GetChildAt(col));
}

FPrimaryAssetId UDIY_CraftReceiptRowWidget::GetAssetIDAtThisRowWithCol(int32 Col) const
{
    if (ParentCachedItemIDs == nullptr)
    {
        return FPrimaryAssetId();
    }

    int32 RealSlotIndex = UDIY_CraftReceiptRowWidget::col_num_setup * saved_cur_row_index + Col;
    if (Col >= 0 && RealSlotIndex >= 0 && RealSlotIndex < ParentCachedItemIDs->Num())
    {
        return (*ParentCachedItemIDs)[Col];
    }
    return FPrimaryAssetId();
}
