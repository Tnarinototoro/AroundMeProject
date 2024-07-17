#include "DIY_CraftingPlatformWidget.h"
#include "SlateOptMacros.h"
#include "Components/Widget.h"
#include "../GameUtilities/Logs/DIY_LogHelper.h"
#include "Components/CanvasPanel.h"
#include "Components/CanvasPanelSlot.h"
#include "DIY_ItemBackPackWidget.h"
#include "Components/ScrollBox.h"
#include "Components/GridPanel.h"
#include "Components/GridSlot.h"
#include "Components/TextBlock.h"
#include "Blueprint/WidgetTree.h"
#include "Components/Image.h"
#include "../GameUtilities/DIY_Utilities.h"
#include "../Player/Items/DIY_ItemManager.h"
#include "Components/Border.h"
void UDIY_CraftingPlatformWidget::NativeConstruct()
{
    Super::NativeConstruct();
}

void UDIY_CraftingPlatformWidget::NativeOnInitialized()
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
            UPanelSlot *grid_panel_slot = ScrollBox->AddChild(GridPanel);
        }
    }
}

void UDIY_CraftingPlatformWidget::InitializeBackPack(int32 Rows, int32 Cols, const FVector2D &inImageIconSlotSize, float inTextSlotFontSize)
{
    RowNum = Rows;
    ColNum = Cols;
    IconImageSlotSize = inImageIconSlotSize;
    TextSlotFontSize = inTextSlotFontSize;
    CreateGrid();
}
void UDIY_CraftingPlatformWidget::CreateGrid()
{
    if (!GridPanel)
        return;

    GridPanel->ClearChildren();

    for (int32 Row = 0; Row < RowNum; ++Row)
    {
        for (int32 Col = 0; Col < ColNum; ++Col)
        {
            UCanvasPanel *SlotCanvas = WidgetTree->ConstructWidget<UCanvasPanel>();
            if (SlotCanvas)
            {
                UBorder *Border = WidgetTree->ConstructWidget<UBorder>();
                UImage *IconImage = WidgetTree->ConstructWidget<UImage>();
                UTextBlock *CountText = WidgetTree->ConstructWidget<UTextBlock>();

                if (Border && IconImage && CountText)
                {
                    //@TODO set icon image
                    IconImage->SetBrushFromTexture(UDIY_Utilities::DIY_GetItemManagerInstance()->GetItemIconTexture(0));
                    CountText->SetText(FText::AsNumber(0));
                    // CountText->SetVisibility(ESlateVisibility::Hidden);
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

                    UGridSlot *GridSlot = GridPanel->AddChildToGrid(SlotCanvas, Row, Col);
                    if (GridSlot)
                    {
                        GridSlot->SetPadding(FMargin(1.0f));
                        GridSlot->SetHorizontalAlignment(HAlign_Fill);
                        GridSlot->SetVerticalAlignment(VAlign_Fill);
                    }
                }
            }
        }
    }
}