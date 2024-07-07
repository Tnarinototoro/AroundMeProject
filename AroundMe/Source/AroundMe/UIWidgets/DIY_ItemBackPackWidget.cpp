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
#include "../GameUtilities/Logs/DIY_LogHelper.h"
#include "../Player/Items/DIY_ItemManager.h"
#include "Components/Border.h"
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
            UPanelSlot *grid_panel_slot = ScrollBox->AddChild(GridPanel);

            // GridPanel->SetSize(FVector2D(600.0f, 400.0f)); // 手动设置GridPanel的大小
        }
        // WidgetTree->RootWidget->SetRenderScale({6.0f, 6.0f});
    }
}

void UDIY_ItemBackPackWidget::InitializeBackPack(int32 Rows, int32 Cols, const FVector2D &inImageIconSlotSize, float inTextSlotFontSize)
{
    RowNum = Rows;
    ColNum = Cols;
    IconImageSlotSize = inImageIconSlotSize;
    TextSlotFontSize = inTextSlotFontSize;
    CreateGrid();
}
bool UDIY_ItemBackPackWidget::RequestChangeSlotBorderColor(int32 row, int32 col, const FLinearColor &inColor)
{
    UBorder *target_border = GetSlotBorder(row, col);
    if (nullptr == target_border)
    {
        return false;
    }

    target_border->SetBrushColor(inColor);
    return true;
}
bool UDIY_ItemBackPackWidget::RequestChangeSlotCountText(int32 row, int32 col, const FText &inText)
{
    UTextBlock *target_text = GetSlotCountText(row, col);

    if (nullptr == target_text)
    {

        return false;
    }
    target_text->SetText(inText);
    return true;
}
bool UDIY_ItemBackPackWidget::RequestChangeSlotImage(int32 row, int32 col, UTexture2D *Texture)
{
    UImage *target_image = GetSlotImage(row, col);

    if (nullptr == target_image)
    {

        return false;
    }

    target_image->SetBrushFromTexture(Texture);
    return true;
}
void UDIY_ItemBackPackWidget::RequestVisibility_BackpackUI(ESlateVisibility invisibility)
{
    this->SetVisibility(invisibility);
}
void UDIY_ItemBackPackWidget::RequestVisibility_BackpackUI_Slot_At(int32 row, int32 col, ESlateVisibility invisibility)
{
    if (!GridPanel || row >= RowNum || col >= ColNum)
        return;

    UCanvasPanel *SlotCanvas = Cast<UCanvasPanel>(GridPanel->GetChildAt(row * ColNum + col));
    if (!SlotCanvas)
        return;
    SlotCanvas->SetVisibility(invisibility);
}
UBorder *UDIY_ItemBackPackWidget::GetSlotBorder(int32 row, int32 col) const
{
    if (!GridPanel || row >= RowNum || col >= ColNum)
        return nullptr;

    UCanvasPanel *SlotCanvas = Cast<UCanvasPanel>(GridPanel->GetChildAt(row * ColNum + col));
    if (!SlotCanvas)
        return nullptr;

    return Cast<UBorder>(SlotCanvas->GetChildAt(0)); // Assuming the border is the first child
}

UImage *UDIY_ItemBackPackWidget::GetSlotImage(int32 row, int32 col) const
{
    if (!GridPanel || row >= RowNum || col >= ColNum)
        return nullptr;

    UCanvasPanel *SlotCanvas = Cast<UCanvasPanel>(GridPanel->GetChildAt(row * ColNum + col));
    if (!SlotCanvas)
        return nullptr;
    UBorder *target_border = Cast<UBorder>(SlotCanvas->GetChildAt(0));

    if (target_border == nullptr)
        return nullptr;

    return Cast<UImage>(target_border->GetChildAt(0)); // Assuming the image is the second child
}

UTextBlock *UDIY_ItemBackPackWidget::GetSlotCountText(int32 row, int32 col) const
{
    if (!GridPanel || row >= RowNum || col >= ColNum)
        return nullptr;

    UCanvasPanel *SlotCanvas = Cast<UCanvasPanel>(GridPanel->GetChildAt(row * ColNum + col));
    if (!SlotCanvas)
        return nullptr;

    return Cast<UTextBlock>(SlotCanvas->GetChildAt(1)); // Assuming the text block is the third child
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
            UCanvasPanel *SlotCanvas = WidgetTree->ConstructWidget<UCanvasPanel>();
            if (SlotCanvas)
            {
                UBorder *Border = WidgetTree->ConstructWidget<UBorder>();
                UImage *IconImage = WidgetTree->ConstructWidget<UImage>();
                UTextBlock *CountText = WidgetTree->ConstructWidget<UTextBlock>();

                if (Border && IconImage && CountText)
                {
                    //@TODO set icon image
                    IconImage->SetBrushFromTexture(UDIY_Utilities::DIY_GetItemManagerInstance()->GetItemIconTexture(-1));
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
