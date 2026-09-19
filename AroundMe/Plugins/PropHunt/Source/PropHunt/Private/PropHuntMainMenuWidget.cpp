#include "PropHuntMainMenuWidget.h"

#include "PropHuntTypes.h"
#include "Blueprint/WidgetTree.h"
#include "Components/CanvasPanel.h"
#include "Components/CanvasPanelSlot.h"
#include "Components/Button.h"
#include "Components/TextBlock.h"
#include "PropHuntRoomSubsystem.h"
#include "PropHuntMenuSubsystem.h"
#include "Kismet/KismetSystemLibrary.h"

void UPropHuntMainMenuWidget::NativeOnInitialized()
{
    Super::NativeOnInitialized();

    UCanvasPanel* Root = WidgetTree->ConstructWidget<UCanvasPanel>(UCanvasPanel::StaticClass(), TEXT("Root"));
    WidgetTree->RootWidget = Root;

    UTextBlock* Title = WidgetTree->ConstructWidget<UTextBlock>(UTextBlock::StaticClass(), TEXT("Title"));
    UCanvasPanelSlot* TitleSlot = Root->AddChildToCanvas(Title);
    TitleSlot->SetAnchors(FAnchors(0.5f, 0.3f, 0.5f, 0.3f));
    TitleSlot->SetAlignment(FVector2D(0.5f, 0.5f));
    FSlateFontInfo TitleFont = Title->GetFont();
    TitleFont.Size = 48;
    Title->SetFont(TitleFont);
    Title->SetText(FText::FromString(TEXT("Prop Hunt")));

    // 创建房间按钮
    CreateRoomButton = WidgetTree->ConstructWidget<UButton>(UButton::StaticClass(), TEXT("CreateRoom"));
    UCanvasPanelSlot* CreateSlot = Root->AddChildToCanvas(CreateRoomButton);
    CreateSlot->SetAnchors(FAnchors(0.5f, 0.5f, 0.5f, 0.5f));
    CreateSlot->SetAlignment(FVector2D(0.5f, 0.5f));
    CreateSlot->SetPosition(FVector2D(0.0f, -50.0f));
    CreateSlot->SetSize(FVector2D(320.0f, 64.0f));
    CreateRoomButton->OnClicked.AddDynamic(this, &UPropHuntMainMenuWidget::OnCreateRoomClicked);

    UTextBlock* CreateLabel = WidgetTree->ConstructWidget<UTextBlock>(UTextBlock::StaticClass(), TEXT("CreateLabel"));
    CreateRoomButton->AddChild(CreateLabel);
    FSlateFontInfo CreateFont = CreateLabel->GetFont();
    CreateFont.Size = 26;
    CreateLabel->SetFont(CreateFont);
    CreateLabel->SetText(FText::FromString(TEXT("Create Room")));

    // 加入房间按钮
    JoinRoomButton = WidgetTree->ConstructWidget<UButton>(UButton::StaticClass(), TEXT("JoinRoom"));
    UCanvasPanelSlot* JoinSlot = Root->AddChildToCanvas(JoinRoomButton);
    JoinSlot->SetAnchors(FAnchors(0.5f, 0.5f, 0.5f, 0.5f));
    JoinSlot->SetAlignment(FVector2D(0.5f, 0.5f));
    JoinSlot->SetPosition(FVector2D(0.0f, 50.0f));
    JoinSlot->SetSize(FVector2D(320.0f, 64.0f));
    JoinRoomButton->OnClicked.AddDynamic(this, &UPropHuntMainMenuWidget::OnJoinRoomClicked);

    UTextBlock* JoinLabel = WidgetTree->ConstructWidget<UTextBlock>(UTextBlock::StaticClass(), TEXT("JoinLabel"));
    JoinRoomButton->AddChild(JoinLabel);
    FSlateFontInfo JoinFont = JoinLabel->GetFont();
    JoinFont.Size = 26;
    JoinLabel->SetFont(JoinFont);
    JoinLabel->SetText(FText::FromString(TEXT("Join Room")));

    // 设置按钮
    SettingsButton = WidgetTree->ConstructWidget<UButton>(UButton::StaticClass(), TEXT("Settings"));
    UCanvasPanelSlot* SettingsSlot = Root->AddChildToCanvas(SettingsButton);
    SettingsSlot->SetAnchors(FAnchors(0.5f, 0.5f, 0.5f, 0.5f));
    SettingsSlot->SetAlignment(FVector2D(0.5f, 0.5f));
    SettingsSlot->SetPosition(FVector2D(0.0f, 150.0f));
    SettingsSlot->SetSize(FVector2D(320.0f, 64.0f));
    SettingsButton->OnClicked.AddDynamic(this, &UPropHuntMainMenuWidget::OnSettingsClicked);

    UTextBlock* SettingsLabel = WidgetTree->ConstructWidget<UTextBlock>(UTextBlock::StaticClass(), TEXT("SettingsLabel"));
    SettingsButton->AddChild(SettingsLabel);
    FSlateFontInfo SettingsFont = SettingsLabel->GetFont();
    SettingsFont.Size = 26;
    SettingsLabel->SetFont(SettingsFont);
    SettingsLabel->SetText(FText::FromString(TEXT("Settings")));

    // 退出按钮
    QuitButton = WidgetTree->ConstructWidget<UButton>(UButton::StaticClass(), TEXT("Quit"));
    UCanvasPanelSlot* QuitSlot = Root->AddChildToCanvas(QuitButton);
    QuitSlot->SetAnchors(FAnchors(0.5f, 0.5f, 0.5f, 0.5f));
    QuitSlot->SetAlignment(FVector2D(0.5f, 0.5f));
    QuitSlot->SetPosition(FVector2D(0.0f, 250.0f));
    QuitSlot->SetSize(FVector2D(320.0f, 64.0f));
    QuitButton->OnClicked.AddDynamic(this, &UPropHuntMainMenuWidget::OnQuitClicked);

    UTextBlock* QuitLabel = WidgetTree->ConstructWidget<UTextBlock>(UTextBlock::StaticClass(), TEXT("QuitLabel"));
    QuitButton->AddChild(QuitLabel);
    FSlateFontInfo QuitFont = QuitLabel->GetFont();
    QuitFont.Size = 26;
    QuitLabel->SetFont(QuitFont);
    QuitLabel->SetText(FText::FromString(TEXT("Quit")));
}

void UPropHuntMainMenuWidget::OnCreateRoomClicked()
{
    UE_LOG(LogPropHunt, Warning, TEXT("[CreateRoom] clicked"));
    if (UPropHuntRoomSubsystem* RoomSubsystem = GetGameInstance()->GetSubsystem<UPropHuntRoomSubsystem>())
    {
        RoomSubsystem->CreateRoom(FOnRoomOpComplete::CreateLambda([this](bool bSuccess)
        {
            UE_LOG(LogPropHunt, Warning, TEXT("[CreateRoom] result=%d"), bSuccess ? 1 : 0);
            if (bSuccess)
            {
                if (UPropHuntMenuSubsystem* Menu = GetGameInstance()->GetSubsystem<UPropHuntMenuSubsystem>())
                {
                    Menu->SetInRoom(true);
                }
                GetWorld()->ServerTravel(TEXT("/PropHunt/Maps/PH_Lobby?listen"));
            }
        }));
    }
}

void UPropHuntMainMenuWidget::OnJoinRoomClicked()
{
    if (UPropHuntMenuSubsystem* Menu = GetGameInstance()->GetSubsystem<UPropHuntMenuSubsystem>())
    {
        Menu->ShowRoomList();
    }
}

void UPropHuntMainMenuWidget::OnSettingsClicked()
{
    // 占位：暂无具体功能。
    if (GEngine)
    {
        GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::White, TEXT("Settings: TODO"));
    }
}

void UPropHuntMainMenuWidget::OnQuitClicked()
{
    UKismetSystemLibrary::QuitGame(GetWorld(), GetOwningPlayer(), EQuitPreference::Quit, false);
}
