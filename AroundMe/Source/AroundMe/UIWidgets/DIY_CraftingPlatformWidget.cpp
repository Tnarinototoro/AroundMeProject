#include "DIY_CraftingPlatformWidget.h"
#include "SlateOptMacros.h"
#include "Components/Widget.h"
#include "../GameUtilities/Logs/DIY_LogHelper.h"
#include "Components/CanvasPanel.h"
#include "Components/CanvasPanelSlot.h"
#include "DIY_ItemBackPackWidget.h"
#include "Components/SizeBox.h"
#include "Components/ScrollBox.h"
#include "Components/TextBlock.h"
#include "Blueprint/WidgetTree.h"
#include "Components/Image.h"
#include "../GameUtilities/DIY_Utilities.h"
#include "../Player/Items/DIY_ItemManager.h"
#include "Components/Border.h"
#include "DIY_CraftReceiptRowWidget.h"
#include "Components/HorizontalBox.h"

void UDIY_CraftingPlatformWidget::NativeConstruct()
{
    Super::NativeConstruct();
}

void UDIY_CraftingPlatformWidget::NativeOnInitialized()
{
    Super::NativeOnInitialized();

    // Create SizeBox
    SizeBox = WidgetTree->ConstructWidget<USizeBox>(USizeBox::StaticClass(), TEXT("SizeBox"));
    if (SizeBox)
    {
        WidgetTree->RootWidget = SizeBox;

        // Create ScrollBox
        ScrollBox = WidgetTree->ConstructWidget<UScrollBox>(UScrollBox::StaticClass(), TEXT("ScrollBox"));
        if (ScrollBox)
        {
            ScrollBox->SetAlwaysShowScrollbar(true);
            SizeBox->AddChild(ScrollBox);
        }
    }
}

void UDIY_CraftingPlatformWidget::InitializeItemCraftingPlatformWidget(int32 RowsDisplayed_Limit, int32 Rows, int32 Cols, const FVector2D &inImageIconSlotSize, float inTextSlotFontSize)
{
    RowNum_Displayed_Limit = RowsDisplayed_Limit;
    ColNum = Cols;
    RowNum = Rows;
    IconImageSlotSize = inImageIconSlotSize;
    TextSlotFontSize = inTextSlotFontSize;

    CreateAllReceipts();
}

void UDIY_CraftingPlatformWidget::CreateAllReceipts()
{
    if (!ScrollBox)
        return;

    ScrollBox->ClearChildren();
    SizeBox->SetMaxDesiredHeight(RowNum_Displayed_Limit * IconImageSlotSize.Y);
    // Initialize grid with empty rows
    for (int32 Row = 0; Row < RowNum; ++Row)
    {
        AddReceiptRow(Row);
    }
}

void UDIY_CraftingPlatformWidget::AddReceiptRow(int32 RowIndex)
{
    UDIY_CraftReceiptRowWidget *ReceiptRow = CreateWidget<UDIY_CraftReceiptRowWidget>(this, UDIY_CraftReceiptRowWidget::StaticClass());
    if (ReceiptRow)
    {
        ReceiptRow->InitializeReceipt(ColNum, IconImageSlotSize, TextSlotFontSize);
        ScrollBox->AddChild(ReceiptRow);
    }
}

void UDIY_CraftingPlatformWidget::RequestScrollOffset(float inDesiredOffset)
{
    ensureMsgf(ScrollBox != nullptr, TEXT("scroll box is not inited well"));
    ScrollBox->ScrollToStart();
    ScrollBox->SetScrollOffset(inDesiredOffset);
}

bool UDIY_CraftingPlatformWidget::RequestChangeSlotBorderColor(int32 row, int32 col, const FLinearColor &inColor)
{
    UBorder *target_border = GetSlotBorder(row, col);
    if (nullptr == target_border)
    {
        return false;
    }

    target_border->SetBrushColor(inColor);
    return true;
}
bool UDIY_CraftingPlatformWidget::RequestChangeSlotCountText(int32 row, int32 col, const FText &inText)
{
    UTextBlock *target_text = GetSlotCountText(row, col);

    if (nullptr == target_text)
    {

        return false;
    }
    target_text->SetText(inText);
    return true;
}
bool UDIY_CraftingPlatformWidget::RequestChangeSlotImage(int32 row, int32 col, UTexture2D *Texture)
{
    UImage *target_image = GetSlotImage(row, col);

    if (nullptr == target_image)
    {

        return false;
    }

    target_image->SetBrushFromTexture(Texture);
    return true;
}
void UDIY_CraftingPlatformWidget::RequestVisibility_ItemCraftingPlatformUI(ESlateVisibility invisibility)
{
    this->SetVisibility(invisibility);
}
void UDIY_CraftingPlatformWidget::RequestVisibility_ItemCraftingPlatformUI_Slot_At(int32 row, int32 col, ESlateVisibility invisibility)
{
    if (!ScrollBox || !SizeBox || row >= RowNum || col >= ColNum)
        return;

    UHorizontalBox *cur_row_box = Cast<UHorizontalBox>(ScrollBox->GetChildAt(row));

    ensureMsgf(nullptr != cur_row_box, TEXT("receipt row widet is not found"));

    UCanvasPanel *SlotCanvas = Cast<UCanvasPanel>(cur_row_box->GetChildAt(col));
    if (!SlotCanvas)
        return;
    SlotCanvas->SetVisibility(invisibility);
}

void UDIY_CraftingPlatformWidget::RequestVisibility_ItemCraftingPlatformUI_CountText_At_Slot(int32 row, int32 col, ESlateVisibility invisibility)
{
    if (!ScrollBox || !SizeBox || row >= RowNum || col >= ColNum)
        return;
    GetSlotCountText(row, col)->SetVisibility(invisibility);
}
UBorder *UDIY_CraftingPlatformWidget::GetSlotBorder(int32 row, int32 col) const
{
    if (!ScrollBox || !SizeBox || row >= RowNum || col >= ColNum)
        return nullptr;

    UDIY_CraftReceiptRowWidget *cur_row = GetRowWidgetAt(row);
    return cur_row->GetSlotBorder(col);
}

UImage *UDIY_CraftingPlatformWidget::GetSlotImage(int32 row, int32 col) const
{
    if (!ScrollBox || !SizeBox || row >= RowNum || col >= ColNum)
        return nullptr;
    UDIY_CraftReceiptRowWidget *cur_row = GetRowWidgetAt(row);
    return cur_row->GetSlotImage(col);
}

UTextBlock *UDIY_CraftingPlatformWidget::GetSlotCountText(int32 row, int32 col) const
{
    if (!ScrollBox || !SizeBox || row >= RowNum || col >= ColNum)
        return nullptr;

    UDIY_CraftReceiptRowWidget *cur_row = GetRowWidgetAt(row);
    return cur_row->GetSlotCountText(col);
}

UDIY_CraftReceiptRowWidget *UDIY_CraftingPlatformWidget::GetRowWidgetAt(int32 row) const
{
    return Cast<UDIY_CraftReceiptRowWidget>(ScrollBox->GetChildAt(row));
}