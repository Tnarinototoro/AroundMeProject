#include "PropHuntMainMenuWidget.h"

#include "Blueprint/WidgetTree.h"
#include "Components/CanvasPanel.h"
#include "Components/CanvasPanelSlot.h"
#include "Components/Button.h"
#include "Components/TextBlock.h"
#include "PropHuntRoomSubsystem.h"
#include "PropHuntMenuSubsystem.h"

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
}

void UPropHuntMainMenuWidget::OnCreateRoomClicked()
{
    if (UPropHuntRoomSubsystem* RoomSubsystem = GetGameInstance()->GetSubsystem<UPropHuntRoomSubsystem>())
    {
        RoomSubsystem->CreateRoom(FOnRoomOpComplete::CreateLambda([this](bool bSuccess)
        {
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
