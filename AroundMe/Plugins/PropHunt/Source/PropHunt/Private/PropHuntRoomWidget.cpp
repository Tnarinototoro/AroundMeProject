#include "PropHuntRoomWidget.h"

#include "PropHuntTypes.h"
#include "Blueprint/WidgetTree.h"
#include "Components/CanvasPanel.h"
#include "Components/CanvasPanelSlot.h"
#include "Components/Button.h"
#include "Components/TextBlock.h"
#include "PropHuntPlayerController.h"
#include "PropHuntPlayerState.h"
#include "PropHuntGameState.h"
#include "PropHuntTypes.h"
#include "GameFramework/PlayerController.h"
#include "GameFramework/PlayerState.h"

void UPropHuntRoomWidget::NativeOnInitialized()
{
    Super::NativeOnInitialized();

    UE_LOG(LogPropHunt, Warning, TEXT("[RoomWidget] NativeOnInitialized"));
    UCanvasPanel* Root = WidgetTree->ConstructWidget<UCanvasPanel>(UCanvasPanel::StaticClass(), TEXT("Root"));
    WidgetTree->RootWidget = Root;

    UTextBlock* Title = WidgetTree->ConstructWidget<UTextBlock>(UTextBlock::StaticClass(), TEXT("Title"));
    UCanvasPanelSlot* TitleSlot = Root->AddChildToCanvas(Title);
    TitleSlot->SetAnchors(FAnchors(0.5f, 0.1f, 0.5f, 0.1f));
    TitleSlot->SetAlignment(FVector2D(0.5f, 0.5f));
    FSlateFontInfo TitleFont = Title->GetFont();
    TitleFont.Size = 32;
    Title->SetFont(TitleFont);
    Title->SetText(FText::FromString(TEXT("Room")));

    // Hunter 按钮
    HunterButton = WidgetTree->ConstructWidget<UButton>(UButton::StaticClass(), TEXT("Hunter"));
    UCanvasPanelSlot* HunterSlot = Root->AddChildToCanvas(HunterButton);
    HunterSlot->SetAnchors(FAnchors(0.35f, 0.3f, 0.35f, 0.3f));
    HunterSlot->SetAlignment(FVector2D(0.5f, 0.5f));
    HunterSlot->SetSize(FVector2D(200.0f, 56.0f));
    HunterButton->OnClicked.AddDynamic(this, &UPropHuntRoomWidget::OnHunterClicked);
    UTextBlock* HunterLabel = WidgetTree->ConstructWidget<UTextBlock>(UTextBlock::StaticClass(), TEXT("HunterLabel"));
    HunterButton->AddChild(HunterLabel);
    FSlateFontInfo HunterFont = HunterLabel->GetFont();
    HunterFont.Size = 22;
    HunterLabel->SetFont(HunterFont);
    HunterLabel->SetText(FText::FromString(TEXT("Hunter")));

    // Ghost 按钮
    GhostButton = WidgetTree->ConstructWidget<UButton>(UButton::StaticClass(), TEXT("Ghost"));
    UCanvasPanelSlot* GhostSlot = Root->AddChildToCanvas(GhostButton);
    GhostSlot->SetAnchors(FAnchors(0.65f, 0.3f, 0.65f, 0.3f));
    GhostSlot->SetAlignment(FVector2D(0.5f, 0.5f));
    GhostSlot->SetSize(FVector2D(200.0f, 56.0f));
    GhostButton->OnClicked.AddDynamic(this, &UPropHuntRoomWidget::OnGhostClicked);
    UTextBlock* GhostLabel = WidgetTree->ConstructWidget<UTextBlock>(UTextBlock::StaticClass(), TEXT("GhostLabel"));
    GhostButton->AddChild(GhostLabel);
    FSlateFontInfo GhostFont = GhostLabel->GetFont();
    GhostFont.Size = 22;
    GhostLabel->SetFont(GhostFont);
    GhostLabel->SetText(FText::FromString(TEXT("Ghost")));

    // Ready 按钮
    ReadyButton = WidgetTree->ConstructWidget<UButton>(UButton::StaticClass(), TEXT("Ready"));
    UCanvasPanelSlot* ReadySlot = Root->AddChildToCanvas(ReadyButton);
    ReadySlot->SetAnchors(FAnchors(0.5f, 0.45f, 0.5f, 0.45f));
    ReadySlot->SetAlignment(FVector2D(0.5f, 0.5f));
    ReadySlot->SetSize(FVector2D(240.0f, 56.0f));
    ReadyButton->OnClicked.AddDynamic(this, &UPropHuntRoomWidget::OnReadyClicked);
    UTextBlock* ReadyLabel = WidgetTree->ConstructWidget<UTextBlock>(UTextBlock::StaticClass(), TEXT("ReadyLabel"));
    ReadyButton->AddChild(ReadyLabel);
    FSlateFontInfo ReadyFont = ReadyLabel->GetFont();
    ReadyFont.Size = 22;
    ReadyLabel->SetFont(ReadyFont);
    ReadyLabel->SetText(FText::FromString(TEXT("Ready")));

    // 状态文本
    StatusText = WidgetTree->ConstructWidget<UTextBlock>(UTextBlock::StaticClass(), TEXT("Status"));
    UCanvasPanelSlot* StatusSlot = Root->AddChildToCanvas(StatusText);
    StatusSlot->SetAnchors(FAnchors(0.5f, 0.65f, 0.5f, 0.65f));
    StatusSlot->SetAlignment(FVector2D(0.5f, 0.5f));
    StatusSlot->SetSize(FVector2D(500.0f, 180.0f));
    FSlateFontInfo StatusFont = StatusText->GetFont();
    StatusFont.Size = 20;
    StatusText->SetFont(StatusFont);
    StatusText->SetText(FText::FromString(TEXT("")));

    // 离开房间按钮
    LeaveButton = WidgetTree->ConstructWidget<UButton>(UButton::StaticClass(), TEXT("Leave"));
    UCanvasPanelSlot* LeaveSlot = Root->AddChildToCanvas(LeaveButton);
    LeaveSlot->SetAnchors(FAnchors(0.5f, 0.9f, 0.5f, 0.9f));
    LeaveSlot->SetAlignment(FVector2D(0.5f, 0.5f));
    LeaveSlot->SetSize(FVector2D(200.0f, 48.0f));
    LeaveButton->OnClicked.AddDynamic(this, &UPropHuntRoomWidget::OnLeaveClicked);
    UTextBlock* LeaveLabel = WidgetTree->ConstructWidget<UTextBlock>(UTextBlock::StaticClass(), TEXT("LeaveLabel"));
    LeaveButton->AddChild(LeaveLabel);
    FSlateFontInfo LeaveFont = LeaveLabel->GetFont();
    LeaveFont.Size = 20;
    LeaveLabel->SetFont(LeaveFont);
    LeaveLabel->SetText(FText::FromString(TEXT("Leave Room")));
}

void UPropHuntRoomWidget::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
    Super::NativeTick(MyGeometry, InDeltaTime);
    RefreshStatus();
}

void UPropHuntRoomWidget::OnHunterClicked()
{
    if (APropHuntPlayerController* PC = Cast<APropHuntPlayerController>(GetOwningPlayer()))
    {
        PC->ServerChooseTeam(EPropHuntRole::Hunter);
    }
}

void UPropHuntRoomWidget::OnGhostClicked()
{
    if (APropHuntPlayerController* PC = Cast<APropHuntPlayerController>(GetOwningPlayer()))
    {
        PC->ServerChooseTeam(EPropHuntRole::Ghost);
    }
}

void UPropHuntRoomWidget::OnReadyClicked()
{
    if (APropHuntPlayerController* PC = Cast<APropHuntPlayerController>(GetOwningPlayer()))
    {
        if (APropHuntPlayerState* PS = PC->GetPlayerState<APropHuntPlayerState>())
        {
            if (PS->TeamRole != EPropHuntRole::Spectator)
            {
                PC->ServerSetReady(!PS->bIsReady);
            }
        }
    }
}

void UPropHuntRoomWidget::OnLeaveClicked()
{
    if (APropHuntPlayerController* PC = Cast<APropHuntPlayerController>(GetOwningPlayer()))
    {
        PC->ServerRequestLeaveRoom();
    }
}

void UPropHuntRoomWidget::RefreshStatus()
{
    if (!StatusText)
    {
        return;
    }

    APropHuntPlayerController* PC = Cast<APropHuntPlayerController>(GetOwningPlayer());
    APropHuntPlayerState* PS = PC ? PC->GetPlayerState<APropHuntPlayerState>() : nullptr;
    APropHuntGameState* GS = GetWorld() ? GetWorld()->GetGameState<APropHuntGameState>() : nullptr;

    FString Text;

    if (PS)
    {
        FString RoleStr = PS->TeamRole == EPropHuntRole::Spectator
            ? TEXT("Not chosen")
            : StaticEnum<EPropHuntRole>()->GetDisplayNameTextByValue(static_cast<int64>(PS->TeamRole)).ToString();
        Text += FString::Printf(TEXT("Your team: %s\n"), *RoleStr);
        Text += FString::Printf(TEXT("Ready: %s\n\n"), PS->bIsReady ? TEXT("YES") : TEXT("NO"));
    }

    if (GS)
    {
        int32 HunterCount = 0;
        int32 GhostCount = 0;
        for (APlayerState* It : GS->PlayerArray)
        {
            APropHuntPlayerState* PPS = Cast<APropHuntPlayerState>(It);
            if (!PPS)
            {
                continue;
            }
            if (PPS->TeamRole == EPropHuntRole::Hunter)
            {
                ++HunterCount;
            }
            else if (PPS->TeamRole == EPropHuntRole::Ghost)
            {
                ++GhostCount;
            }
        }
        Text += FString::Printf(TEXT("Hunter: %d    Ghost: %d\n"), HunterCount, GhostCount);

        if (GS->CountdownRemaining > 0)
        {
            Text += FString::Printf(TEXT("Starting in %d..."), GS->CountdownRemaining);
        }
        else
        {
            Text += TEXT("Waiting for 1+ Hunter and 1+ Ghost, all Ready");
        }
    }

    StatusText->SetText(FText::FromString(Text));
}
