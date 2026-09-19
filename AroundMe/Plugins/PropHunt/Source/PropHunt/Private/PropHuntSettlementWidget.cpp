#include "PropHuntSettlementWidget.h"

#include "Blueprint/WidgetTree.h"
#include "Components/CanvasPanel.h"
#include "Components/CanvasPanelSlot.h"
#include "Components/Button.h"
#include "Components/TextBlock.h"
#include "PropHuntPlayerController.h"

void UPropHuntSettlementWidget::NativeOnInitialized()
{
    Super::NativeOnInitialized();

    UCanvasPanel* Root = WidgetTree->ConstructWidget<UCanvasPanel>(UCanvasPanel::StaticClass(), TEXT("Root"));
    WidgetTree->RootWidget = Root;

    // 胜负文本
    ResultText = WidgetTree->ConstructWidget<UTextBlock>(UTextBlock::StaticClass(), TEXT("Result"));
    UCanvasPanelSlot* ResultSlot = Root->AddChildToCanvas(ResultText);
    ResultSlot->SetAnchors(FAnchors(0.5f, 0.35f, 0.5f, 0.35f));
    ResultSlot->SetAlignment(FVector2D(0.5f, 0.5f));
    FSlateFontInfo ResultFont = ResultText->GetFont();
    ResultFont.Size = 48;
    ResultText->SetFont(ResultFont);
    ResultText->SetText(FText::FromString(TEXT("Result")));

    // 再来一局按钮
    RematchButton = WidgetTree->ConstructWidget<UButton>(UButton::StaticClass(), TEXT("Rematch"));
    UCanvasPanelSlot* RematchSlot = Root->AddChildToCanvas(RematchButton);
    RematchSlot->SetAnchors(FAnchors(0.5f, 0.55f, 0.5f, 0.55f));
    RematchSlot->SetAlignment(FVector2D(0.5f, 0.5f));
    RematchSlot->SetSize(FVector2D(320.0f, 60.0f));
    RematchButton->OnClicked.AddDynamic(this, &UPropHuntSettlementWidget::OnRematchClicked);
    UTextBlock* RematchLabel = WidgetTree->ConstructWidget<UTextBlock>(UTextBlock::StaticClass(), TEXT("RematchLabel"));
    RematchButton->AddChild(RematchLabel);
    FSlateFontInfo RematchFont = RematchLabel->GetFont();
    RematchFont.Size = 24;
    RematchLabel->SetFont(RematchFont);
    RematchLabel->SetText(FText::FromString(TEXT("Rematch")));

    // 回主菜单按钮
    MainMenuButton = WidgetTree->ConstructWidget<UButton>(UButton::StaticClass(), TEXT("MainMenu"));
    UCanvasPanelSlot* MenuSlot = Root->AddChildToCanvas(MainMenuButton);
    MenuSlot->SetAnchors(FAnchors(0.5f, 0.68f, 0.5f, 0.68f));
    MenuSlot->SetAlignment(FVector2D(0.5f, 0.5f));
    MenuSlot->SetSize(FVector2D(320.0f, 60.0f));
    MainMenuButton->OnClicked.AddDynamic(this, &UPropHuntSettlementWidget::OnMainMenuClicked);
    UTextBlock* MenuLabel = WidgetTree->ConstructWidget<UTextBlock>(UTextBlock::StaticClass(), TEXT("MenuLabel"));
    MainMenuButton->AddChild(MenuLabel);
    FSlateFontInfo MenuFont = MenuLabel->GetFont();
    MenuFont.Size = 24;
    MenuLabel->SetFont(MenuFont);
    MenuLabel->SetText(FText::FromString(TEXT("Main Menu")));
}

void UPropHuntSettlementWidget::SetResultText(const FString& Text)
{
    if (ResultText)
    {
        ResultText->SetText(FText::FromString(Text));
    }
}

void UPropHuntSettlementWidget::OnRematchClicked()
{
    if (APropHuntPlayerController* PC = Cast<APropHuntPlayerController>(GetOwningPlayer()))
    {
        PC->ServerRequestRematch();
    }
}

void UPropHuntSettlementWidget::OnMainMenuClicked()
{
    if (APropHuntPlayerController* PC = Cast<APropHuntPlayerController>(GetOwningPlayer()))
    {
        PC->ServerRequestBackToMenu();
    }
}
