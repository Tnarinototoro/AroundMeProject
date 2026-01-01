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
#include "DIY_ItemSubMenuWidget.h"
#include "Blueprint/SlateBlueprintLibrary.h"

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
        }
    }

    ItemSubMenuWidget = Cast<UDIY_ItemSubMenuWidget>(CreateWidget(GetWorld(), UDIY_ItemSubMenuWidget::StaticClass()));

    if (ItemSubMenuWidget)
    {
        ItemSubMenuWidget->AddToViewport(1);
        // ItemSubMenuWidget->SetAnchorsInViewport({0.5f, 0.5f});
        // ItemSubMenuWidget->SetAlignmentInViewport({0.f, 0.f});
        ItemSubMenuWidget->SetPositionInViewport({600.f, 500.f});
        ItemSubMenuWidget->SetVisibility(ESlateVisibility::Hidden);
        ItemSubMenuWidget->InitializeSubMenu(5);
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
void UDIY_ItemBackPackWidget::RequestVisibility_BackpackUI_CountText_At_Slot(int32 row, int32 col, ESlateVisibility invisibility)
{
    if (!GridPanel || row >= RowNum || col >= ColNum)
        return;
    GetSlotCountText(row, col)->SetVisibility(invisibility);
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
                    IconImage->SetBrushFromTexture(UDIY_Utilities::DIY_GetItemManagerInstance(GetWorld())->GetItemIconTexture(UDIY_Utilities::GetInvalidAssetID()));
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

void UDIY_ItemBackPackWidget::ShowSubMenuAt(int32 Row, int32 Col)
{
    if (Row < 0 || Col < 0)
        return;
    if (!ItemSubMenuWidget || !GridPanel || Row >= RowNum || Col >= ColNum)
        return;

    UBorder *CurBorder = GetSlotBorder(Row, Col);
    if (!CurBorder)
        return;

    // 获取CurBorder的屏幕位置
    FGeometry BorderGeometry = CurBorder->GetCachedGeometry();
    FVector2D PixelPosition, ViewportPosition;

    // 将Local坐标转换为Viewport坐标
    USlateBlueprintLibrary::LocalToViewport(GetWorld(), BorderGeometry, FVector2D(0.f, 0.f), PixelPosition, ViewportPosition);

    // EASY_LOG_MAINPLAYER("Border screen position X: %f, Y: %f", ViewportPosition.X, ViewportPosition.Y);

    ViewportPosition.X -= ItemSubMenuWidget->GetDesiredSize().X;

    ItemSubMenuWidget->SetPositionInViewport(ViewportPosition, false);
    ItemSubMenuWidget->SetVisibility(ESlateVisibility::Visible);
}

void UDIY_ItemBackPackWidget::HideSubMenu()
{
    if (ItemSubMenuWidget)
    {
        ItemSubMenuWidget->SetVisibility(ESlateVisibility::Hidden);
    }
}
void UDIY_ItemBackPackWidget::RequestToggleSubMenuButtonAt(uint32 inIndex, bool inIsEnabled)
{
    ensureMsgf(ItemSubMenuWidget != nullptr, TEXT("Item Sub menu is not created properly! "));

    if (!IsItemSubMenuShown_Impl())
        return;

    ItemSubMenuWidget->RequestToggleCommandEnabledAt_Impl(inIndex, inIsEnabled);
}
int32 UDIY_ItemBackPackWidget::GetItemSubMenuCommandsNum() const
{
    ensureMsgf(ItemSubMenuWidget != nullptr, TEXT("Item Sub menu is not created properly! "));
    return ItemSubMenuWidget->GetCommandsNum();
}
FString UDIY_ItemBackPackWidget::GetItemSubMenuCommandStringAt(uint32 inIndex)
{
    ensureMsgf(ItemSubMenuWidget != nullptr, TEXT("Item Sub menu is not created properly! "));

    return ItemSubMenuWidget->GetCommandStringAt(inIndex);
}
bool UDIY_ItemBackPackWidget::IsItemSubMenuShown_Impl() const
{
    ensureMsgf(ItemSubMenuWidget != nullptr, TEXT("Item Sub menu is not created properly! "));

    return ItemSubMenuWidget->IsVisible();
}