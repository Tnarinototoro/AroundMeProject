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

void UDIY_CraftingPlatformWidget::InitializeItemCraftingPlatformWidget(int32 Rows_Max, int32 Cols, const FVector2D &inImageIconSlotSize, float inTextSlotFontSize)
{
    RowNum_Displayed = Rows_Max;
    ColNum = Cols;
    IconImageSlotSize = inImageIconSlotSize;
    TextSlotFontSize = inTextSlotFontSize;
    CreateAllReceipts();
}

void UDIY_CraftingPlatformWidget::CreateAllReceipts()
{
    if (!ScrollBox)
        return;

    ScrollBox->ClearChildren();
    SizeBox->SetMaxDesiredHeight(RowNum_Displayed * IconImageSlotSize.Y);
    // Initialize grid with empty rows
    for (int32 Row = 0; Row < RowNum_Displayed * 10; ++Row)
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
