#include "PropHuntPauseMenuWidget.h"

#include "Blueprint/WidgetTree.h"
#include "Components/CanvasPanel.h"
#include "Components/CanvasPanelSlot.h"
#include "Components/Button.h"
#include "Components/TextBlock.h"
#include "PropHuntPlayerController.h"

void UPropHuntPauseMenuWidget::NativeOnInitialized()
{
    Super::NativeOnInitialized();

    UCanvasPanel* Root = WidgetTree->ConstructWidget<UCanvasPanel>(UCanvasPanel::StaticClass(), TEXT("Root"));
    WidgetTree->RootWidget = Root;

    // 标题
    UTextBlock* Title = WidgetTree->ConstructWidget<UTextBlock>(UTextBlock::StaticClass(), TEXT("Title"));
    UCanvasPanelSlot* TitleSlot = Root->AddChildToCanvas(Title);
    TitleSlot->SetAnchors(FAnchors(0.5f, 0.28f, 0.5f, 0.28f));
    TitleSlot->SetAlignment(FVector2D(0.5f, 0.5f));
    FSlateFontInfo TitleFont = Title->GetFont();
    TitleFont.Size = 48;
    Title->SetFont(TitleFont);
    Title->SetText(FText::FromString(TEXT("Paused")));

    // 继续按钮
    ResumeButton = WidgetTree->ConstructWidget<UButton>(UButton::StaticClass(), TEXT("Resume"));
    UCanvasPanelSlot* ResumeSlot = Root->AddChildToCanvas(ResumeButton);
    ResumeSlot->SetAnchors(FAnchors(0.5f, 0.42f, 0.5f, 0.42f));
    ResumeSlot->SetAlignment(FVector2D(0.5f, 0.5f));
    ResumeSlot->SetSize(FVector2D(320.0f, 56.0f));
    ResumeButton->OnClicked.AddDynamic(this, &UPropHuntPauseMenuWidget::OnResumeClicked);
    UTextBlock* ResumeLabel = WidgetTree->ConstructWidget<UTextBlock>(UTextBlock::StaticClass(), TEXT("ResumeLabel"));
    ResumeButton->AddChild(ResumeLabel);
    FSlateFontInfo ResumeFont = ResumeLabel->GetFont();
    ResumeFont.Size = 22;
    ResumeLabel->SetFont(ResumeFont);
    ResumeLabel->SetText(FText::FromString(TEXT("Resume")));

    // 回主菜单按钮
    MainMenuButton = WidgetTree->ConstructWidget<UButton>(UButton::StaticClass(), TEXT("MainMenu"));
    UCanvasPanelSlot* MenuSlot = Root->AddChildToCanvas(MainMenuButton);
    MenuSlot->SetAnchors(FAnchors(0.5f, 0.55f, 0.5f, 0.55f));
    MenuSlot->SetAlignment(FVector2D(0.5f, 0.5f));
    MenuSlot->SetSize(FVector2D(320.0f, 56.0f));
    MainMenuButton->OnClicked.AddDynamic(this, &UPropHuntPauseMenuWidget::OnMainMenuClicked);
    UTextBlock* MenuLabel = WidgetTree->ConstructWidget<UTextBlock>(UTextBlock::StaticClass(), TEXT("MenuLabel"));
    MainMenuButton->AddChild(MenuLabel);
    FSlateFontInfo MenuFont = MenuLabel->GetFont();
    MenuFont.Size = 22;
    MenuLabel->SetFont(MenuFont);
    MenuLabel->SetText(FText::FromString(TEXT("Main Menu")));

    // 退出游戏按钮
    QuitButton = WidgetTree->ConstructWidget<UButton>(UButton::StaticClass(), TEXT("Quit"));
    UCanvasPanelSlot* QuitSlot = Root->AddChildToCanvas(QuitButton);
    QuitSlot->SetAnchors(FAnchors(0.5f, 0.68f, 0.5f, 0.68f));
    QuitSlot->SetAlignment(FVector2D(0.5f, 0.5f));
    QuitSlot->SetSize(FVector2D(320.0f, 56.0f));
    QuitButton->OnClicked.AddDynamic(this, &UPropHuntPauseMenuWidget::OnQuitClicked);
    UTextBlock* QuitLabel = WidgetTree->ConstructWidget<UTextBlock>(UTextBlock::StaticClass(), TEXT("QuitLabel"));
    QuitButton->AddChild(QuitLabel);
    FSlateFontInfo QuitFont = QuitLabel->GetFont();
    QuitFont.Size = 22;
    QuitLabel->SetFont(QuitFont);
    QuitLabel->SetText(FText::FromString(TEXT("Quit Game")));
}

void UPropHuntPauseMenuWidget::OnResumeClicked()
{
    if (APropHuntPlayerController* PC = Cast<APropHuntPlayerController>(GetOwningPlayer()))
    {
        PC->HidePauseMenu();
    }
}

void UPropHuntPauseMenuWidget::OnMainMenuClicked()
{
    if (APropHuntPlayerController* PC = Cast<APropHuntPlayerController>(GetOwningPlayer()))
    {
        PC->ServerRequestLeaveGame(false);
    }
}

void UPropHuntPauseMenuWidget::OnQuitClicked()
{
    if (APropHuntPlayerController* PC = Cast<APropHuntPlayerController>(GetOwningPlayer()))
    {
        PC->ServerRequestLeaveGame(true);
    }
}
