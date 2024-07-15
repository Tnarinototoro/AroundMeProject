#include "DIY_ItemBackPackWidget.h"
#include "Components/ScrollBox.h"
#include "Components/GridPanel.h"
#include "Components/GridSlot.h"
#include "Components/TextBlock.h"
#include "Blueprint/WidgetTree.h"
#include "Components/CanvasPanel.h"
#include "Components/Image.h"
#include "Components/CanvasPanelSlot.h"
#include "../GameUtilities/DIY_Utilities.h"
#include "../Player/Items/DIY_ItemManager.h"
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
            UPanelSlot *grid_panel = ScrollBox->AddChild(GridPanel);
            // GridPanel->SetSize(FVector2D(600.0f, 400.0f)); // 手动设置GridPanel的大小
        }
        WidgetTree->RootWidget->SetRenderScale({6.0f, 6.0f});
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
    // GridPanel->SetRenderScale(FVector2D(10.5f, 10.5f)); // 增大GridPanel的缩放比例
    for (int32 Row = 0; Row < RowNum; ++Row)
    {
        for (int32 Col = 0; Col < ColNum; ++Col)
        {
            UCanvasPanel *SlotCanvas = WidgetTree->ConstructWidget<UCanvasPanel>();
            if (SlotCanvas)
            {
                UImage *IconImage = WidgetTree->ConstructWidget<UImage>();
                UTextBlock *CountText = WidgetTree->ConstructWidget<UTextBlock>();

                if (IconImage && CountText)
                {
                    //@TODO set icon image
                    IconImage->SetBrushFromTexture(UDIY_Utilities::DIY_GetItemManagerInstance()->GetItemIconTexture(EItemID::EItemID_Count));
                    CountText->SetText(FText::AsNumber(0));
                    // Text::AsNumber(FDIY_BackPackItemSlotInfo.ItemCount)
                    UCanvasPanelSlot *IconSlot = SlotCanvas->AddChildToCanvas(IconImage);
                    UCanvasPanelSlot *TextSlot = SlotCanvas->AddChildToCanvas(CountText);
                    IconImage->SetDesiredSizeOverride(FVector2D(200.0f, 200.0f));

                    FSlateFontInfo FontInfo = CountText->GetFont();
                    FontInfo.Size = 1; // 设置文本字体大小
                    CountText->SetFont(FontInfo);

                    if (IconSlot && TextSlot)
                    {
                        IconSlot->SetAnchors(FAnchors(0, 0, 1, 1));
                        IconSlot->SetOffsets(FMargin(0));

                        TextSlot->SetAnchors(FAnchors(1, 1));
                        TextSlot->SetAlignment(FVector2D(1.0f, 1.0f));
                        TextSlot->SetOffsets(FMargin(-10, -10, 0, 0)); // 右下角偏移
                    }

                    UGridSlot *GridSlot = GridPanel->AddChildToGrid(SlotCanvas, Row, Col);
                    if (GridSlot)
                    {
                        GridSlot->SetPadding(FMargin(5.0f));
                        GridSlot->SetColumnSpan(2); // 调整每个格子的跨度
                        GridSlot->SetRowSpan(2);
                        GridSlot->SetHorizontalAlignment(HAlign_Fill);
                        GridSlot->SetVerticalAlignment(VAlign_Fill); // 填充每个Grid Slot
                    }
                }
            }
        }
    }
}