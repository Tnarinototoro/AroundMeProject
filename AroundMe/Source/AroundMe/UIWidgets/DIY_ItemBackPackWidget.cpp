#include "DIY_ItemBackPackWidget.h"
#include "Components/ScrollBox.h"
#include "Components/GridPanel.h"
#include "Components/GridSlot.h"
#include "Components/TextBlock.h"
#include "Blueprint/WidgetTree.h"

void UDIY_ItemBackPackWidget::NativeConstruct()
{
    Super::NativeConstruct();
    // Additional initialization if needed
}

void UDIY_ItemBackPackWidget::NativeOnInitialized()
{
    Super::NativeOnInitialized();

    // Create ScrollBox
    ScrollBox = WidgetTree->ConstructWidget<UScrollBox>(UScrollBox::StaticClass(), TEXT("ScrollBox"));
    if (ScrollBox)
    {
        WidgetTree->RootWidget = ScrollBox;

        // Create GridPanel
        GridPanel = WidgetTree->ConstructWidget<UGridPanel>(UGridPanel::StaticClass(), TEXT("GridPanel"));
        if (GridPanel)
        {
            ScrollBox->AddChild(GridPanel);
        }
    }
}

void UDIY_ItemBackPackWidget::InitializeBackPack(int32 Rows, int32 Cols)
{
    RowNum = Rows;
    ColNum = Cols;
    CreateGrid();
}

void UDIY_ItemBackPackWidget::CreateGrid()
{
    if (!GridPanel)
        return;

    GridPanel->ClearChildren();

    for (int32 Row = 0; Row < RowNum; ++Row)
    {
        for (int32 Col = 0; Col < ColNum; ++Col)
        {
            UTextBlock *NewTextBlock = WidgetTree->ConstructWidget<UTextBlock>(UTextBlock::StaticClass());
            if (NewTextBlock)
            {
                NewTextBlock->SetText(FText::FromString(FString::Printf(TEXT("R%dC%d"), Row + 1, Col + 1)));

                UGridSlot *GridSlot = GridPanel->AddChildToGrid(NewTextBlock, Row, Col);
                if (GridSlot)
                {
                    GridSlot->SetPadding(FMargin(5.0f));
                }
            }
        }
    }
}
