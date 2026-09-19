#include "PropHuntCompassWidget.h"

#include "Blueprint/WidgetTree.h"
#include "Components/CanvasPanel.h"
#include "Components/CanvasPanelSlot.h"
#include "Components/Image.h"

void UPropHuntCompassWidget::NativeOnInitialized()
{
    Super::NativeOnInitialized();

    UCanvasPanel* Root = WidgetTree->ConstructWidget<UCanvasPanel>(UCanvasPanel::StaticClass(), TEXT("Root"));
    WidgetTree->RootWidget = Root;

    // 罗盘底盘（圆形半透明背景）。
    UImage* CompassBase = WidgetTree->ConstructWidget<UImage>(UImage::StaticClass(), TEXT("Base"));
    UCanvasPanelSlot* BaseSlot = Root->AddChildToCanvas(CompassBase);
    BaseSlot->SetAnchors(FAnchors(0.5f, 0.5f, 0.5f, 0.5f));
    BaseSlot->SetAlignment(FVector2D(0.5f, 0.5f));
    BaseSlot->SetSize(FVector2D(120.0f, 120.0f));
    FSlateBrush BaseBrush;
    BaseBrush.DrawAs = ESlateBrushDrawType::RoundedBox;
    BaseBrush.OutlineSettings.CornerRadii = FVector4(60.0f, 60.0f, 60.0f, 60.0f);
    BaseBrush.OutlineSettings.RoundingType = ESlateBrushRoundingType::HalfHeightRadius;
    BaseBrush.TintColor = FSlateColor(FLinearColor(0.05f, 0.05f, 0.12f, 0.6f));
    CompassBase->SetBrush(BaseBrush);

    // 波纹圆环（扩散）。
    RippleImage = WidgetTree->ConstructWidget<UImage>(UImage::StaticClass(), TEXT("Ripple"));
    RippleSlot = Root->AddChildToCanvas(RippleImage);
    RippleSlot->SetAnchors(FAnchors(0.5f, 0.5f, 0.5f, 0.5f));
    RippleSlot->SetAlignment(FVector2D(0.5f, 0.5f));
    RippleSlot->SetSize(FVector2D(20.0f, 20.0f));

    // 中心信号源（圆点）。
    SignalDot = WidgetTree->ConstructWidget<UImage>(UImage::StaticClass(), TEXT("Dot"));
    SignalDotSlot = Root->AddChildToCanvas(SignalDot);
    SignalDotSlot->SetAnchors(FAnchors(0.5f, 0.5f, 0.5f, 0.5f));
    SignalDotSlot->SetAlignment(FVector2D(0.5f, 0.5f));
    SignalDotSlot->SetSize(FVector2D(16.0f, 16.0f));

    UpdateVisuals(0.0f);
}

void UPropHuntCompassWidget::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
    Super::NativeTick(MyGeometry, InDeltaTime);

    // 波纹扩散相位（越近扩散越快）。
    RipplePhase += InDeltaTime * (0.5f + CurrentStrength * 2.5f);
    if (RipplePhase >= 1.0f)
    {
        RipplePhase -= 1.0f;
    }

    UpdateVisuals(CurrentStrength);
}

void UPropHuntCompassWidget::SetSignalStrength(float Strength)
{
    CurrentStrength = FMath::Clamp(Strength, 0.0f, 1.0f);
}

void UPropHuntCompassWidget::UpdateVisuals(float Strength)
{
    // 颜色：远冷（蓝）近暖（红）。
    const FLinearColor FarColor(0.0f, 0.4f, 1.0f);
    const FLinearColor NearColor(1.0f, 0.1f, 0.0f);
    const FLinearColor DotColor = FMath::Lerp(FarColor, NearColor, Strength);

    // 中心圆点：越近越大。
    const float DotSize = 12.0f + Strength * 28.0f;
    if (SignalDot && SignalDotSlot)
    {
        FSlateBrush DotBrush;
        DotBrush.DrawAs = ESlateBrushDrawType::RoundedBox;
        DotBrush.OutlineSettings.CornerRadii = FVector4(DotSize * 0.5f, DotSize * 0.5f, DotSize * 0.5f, DotSize * 0.5f);
        DotBrush.OutlineSettings.RoundingType = ESlateBrushRoundingType::HalfHeightRadius;
        DotBrush.TintColor = FSlateColor(DotColor);
        SignalDot->SetBrush(DotBrush);
        SignalDotSlot->SetSize(FVector2D(DotSize, DotSize));
    }

    // 波纹：扩散圆环 + 淡出，越近越明显。
    if (RippleImage && RippleSlot)
    {
        const float RippleSize = 20.0f + RipplePhase * 90.0f;
        const float RippleAlpha = (1.0f - RipplePhase) * (0.25f + Strength * 0.75f);

        FSlateBrush RippleBrush;
        RippleBrush.DrawAs = ESlateBrushDrawType::RoundedBox;
        RippleBrush.OutlineSettings.CornerRadii = FVector4(RippleSize * 0.5f, RippleSize * 0.5f, RippleSize * 0.5f, RippleSize * 0.5f);
        RippleBrush.OutlineSettings.RoundingType = ESlateBrushRoundingType::HalfHeightRadius;
        RippleBrush.TintColor = FSlateColor(FLinearColor(DotColor.R, DotColor.G, DotColor.B, RippleAlpha));
        RippleImage->SetBrush(RippleBrush);
        RippleSlot->SetSize(FVector2D(RippleSize, RippleSize));
    }
}
