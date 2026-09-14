#include "PropHuntQTEUserWidget.h"

#include "Blueprint/WidgetTree.h"
#include "Components/CanvasPanel.h"
#include "Components/CanvasPanelSlot.h"
#include "Components/Image.h"
#include "Components/TextBlock.h"

void UPropHuntQTEUserWidget::NativeOnInitialized()
{
    Super::NativeOnInitialized();

    UCanvasPanel* Root = WidgetTree->ConstructWidget<UCanvasPanel>(UCanvasPanel::StaticClass(), TEXT("Root"));
    WidgetTree->RootWidget = Root;

    CircleImage = WidgetTree->ConstructWidget<UImage>(UImage::StaticClass(), TEXT("Circle"));
    CircleSlot = Root->AddChildToCanvas(CircleImage);
    CircleSlot->SetAnchors(FAnchors(0.5f, 0.5f, 0.5f, 0.5f));
    CircleSlot->SetAlignment(FVector2D(0.5f, 0.5f));
    CircleSlot->SetSize(FVector2D(100.0f, 100.0f));

    // 红色半透明圆形画刷。
    FSlateBrush Brush;
    Brush.DrawAs = ESlateBrushDrawType::RoundedBox;
    Brush.OutlineSettings.CornerRadii = FVector4(50.0f, 50.0f, 50.0f, 50.0f);
    Brush.OutlineSettings.RoundingType = ESlateBrushRoundingType::HalfHeightRadius;
    Brush.TintColor = FSlateColor(FLinearColor(1.0f, 0.0f, 0.0f, 0.5f));
    CircleImage->SetBrush(Brush);

    KeyText = WidgetTree->ConstructWidget<UTextBlock>(UTextBlock::StaticClass(), TEXT("Key"));
    UCanvasPanelSlot* KeySlot = Root->AddChildToCanvas(KeyText);
    KeySlot->SetAnchors(FAnchors(0.5f, 0.5f, 0.5f, 0.5f));
    KeySlot->SetAlignment(FVector2D(0.5f, 0.5f));

    FSlateFontInfo Font = KeyText->GetFont();
    Font.Size = 48;
    KeyText->SetFont(Font);
    KeyText->SetColorAndOpacity(FSlateColor(FLinearColor::White));
    KeyText->SetText(FText::FromString(TEXT("Space")));
}

void UPropHuntQTEUserWidget::SetProgress(float Progress)
{
    if (CircleSlot)
    {
        const float Size = FMath::Lerp(100.0f, 2200.0f, FMath::Clamp(Progress, 0.0f, 1.0f));
        CircleSlot->SetSize(FVector2D(Size, Size));
    }
}

void UPropHuntQTEUserWidget::SetExpectedKey(const FString& KeyString)
{
    if (KeyText)
    {
        KeyText->SetText(FText::FromString(KeyString));
    }
}
