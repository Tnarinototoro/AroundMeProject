#include "PropHuntNameplateWidget.h"

#include "Blueprint/WidgetTree.h"
#include "Components/CanvasPanel.h"
#include "Components/TextBlock.h"

void UPropHuntNameplateWidget::NativeOnInitialized()
{
    Super::NativeOnInitialized();

    UCanvasPanel* Root = WidgetTree->ConstructWidget<UCanvasPanel>(UCanvasPanel::StaticClass(), TEXT("Root"));
    WidgetTree->RootWidget = Root;

    InfoText = WidgetTree->ConstructWidget<UTextBlock>(UTextBlock::StaticClass(), TEXT("Info"));
    Root->AddChildToCanvas(InfoText);

    FSlateFontInfo Font = InfoText->GetFont();
    Font.Size = 36;
    InfoText->SetFont(Font);
    InfoText->SetColorAndOpacity(FSlateColor(FLinearColor::Yellow));
    InfoText->SetShadowOffset(FVector2D(1.0f, 1.0f));
    InfoText->SetShadowColorAndOpacity(FLinearColor::Black);
    InfoText->SetText(FText::FromString(TEXT("Player")));
}

void UPropHuntNameplateWidget::SetInfoText(const FString& Text)
{
    if (InfoText)
    {
        InfoText->SetText(FText::FromString(Text));
    }
}
