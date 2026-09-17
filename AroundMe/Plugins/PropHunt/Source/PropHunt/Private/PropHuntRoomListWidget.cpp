#include "PropHuntRoomListWidget.h"

#include "Blueprint/WidgetTree.h"
#include "OnlineSessionSettings.h"
#include "Components/CanvasPanel.h"
#include "Components/CanvasPanelSlot.h"
#include "Components/Button.h"
#include "Components/TextBlock.h"
#include "PropHuntRoomSubsystem.h"
#include "PropHuntMenuSubsystem.h"

void UPropHuntRoomListWidget::NativeOnInitialized()
{
    Super::NativeOnInitialized();

    UCanvasPanel* Root = WidgetTree->ConstructWidget<UCanvasPanel>(UCanvasPanel::StaticClass(), TEXT("Root"));
    WidgetTree->RootWidget = Root;

    UTextBlock* Title = WidgetTree->ConstructWidget<UTextBlock>(UTextBlock::StaticClass(), TEXT("Title"));
    UCanvasPanelSlot* TitleSlot = Root->AddChildToCanvas(Title);
    TitleSlot->SetAnchors(FAnchors(0.5f, 0.15f, 0.5f, 0.15f));
    TitleSlot->SetAlignment(FVector2D(0.5f, 0.5f));
    FSlateFontInfo TitleFont = Title->GetFont();
    TitleFont.Size = 36;
    Title->SetFont(TitleFont);
    Title->SetText(FText::FromString(TEXT("Rooms")));

    // 本地直连按钮（一台电脑双开调试用）
    DirectConnectButton = WidgetTree->ConstructWidget<UButton>(UButton::StaticClass(), TEXT("DirectConnect"));
    UCanvasPanelSlot* DirectSlot = Root->AddChildToCanvas(DirectConnectButton);
    DirectSlot->SetAnchors(FAnchors(0.5f, 0.3f, 0.5f, 0.3f));
    DirectSlot->SetAlignment(FVector2D(0.5f, 0.5f));
    DirectSlot->SetSize(FVector2D(360.0f, 56.0f));
    DirectConnectButton->OnClicked.AddDynamic(this, &UPropHuntRoomListWidget::OnDirectConnectClicked);

    UTextBlock* DirectLabel = WidgetTree->ConstructWidget<UTextBlock>(UTextBlock::StaticClass(), TEXT("DirectLabel"));
    DirectConnectButton->AddChild(DirectLabel);
    FSlateFontInfo DirectFont = DirectLabel->GetFont();
    DirectFont.Size = 22;
    DirectLabel->SetFont(DirectFont);
    DirectLabel->SetText(FText::FromString(TEXT("Connect to 127.0.0.1 (local)")));

    // 刷新按钮
    RefreshButton = WidgetTree->ConstructWidget<UButton>(UButton::StaticClass(), TEXT("Refresh"));
    UCanvasPanelSlot* RefreshSlot = Root->AddChildToCanvas(RefreshButton);
    RefreshSlot->SetAnchors(FAnchors(0.5f, 0.42f, 0.5f, 0.42f));
    RefreshSlot->SetAlignment(FVector2D(0.5f, 0.5f));
    RefreshSlot->SetSize(FVector2D(240.0f, 48.0f));
    RefreshButton->OnClicked.AddDynamic(this, &UPropHuntRoomListWidget::OnRefreshClicked);

    UTextBlock* RefreshLabel = WidgetTree->ConstructWidget<UTextBlock>(UTextBlock::StaticClass(), TEXT("RefreshLabel"));
    RefreshButton->AddChild(RefreshLabel);
    FSlateFontInfo RefreshFont = RefreshLabel->GetFont();
    RefreshFont.Size = 20;
    RefreshLabel->SetFont(RefreshFont);
    RefreshLabel->SetText(FText::FromString(TEXT("Refresh Search")));

    // 返回按钮
    BackButton = WidgetTree->ConstructWidget<UButton>(UButton::StaticClass(), TEXT("Back"));
    UCanvasPanelSlot* BackSlot = Root->AddChildToCanvas(BackButton);
    BackSlot->SetAnchors(FAnchors(0.5f, 0.85f, 0.5f, 0.85f));
    BackSlot->SetAlignment(FVector2D(0.5f, 0.5f));
    BackSlot->SetSize(FVector2D(200.0f, 48.0f));
    BackButton->OnClicked.AddDynamic(this, &UPropHuntRoomListWidget::OnBackClicked);

    UTextBlock* BackLabel = WidgetTree->ConstructWidget<UTextBlock>(UTextBlock::StaticClass(), TEXT("BackLabel"));
    BackButton->AddChild(BackLabel);
    FSlateFontInfo BackFont = BackLabel->GetFont();
    BackFont.Size = 20;
    BackLabel->SetFont(BackFont);
    BackLabel->SetText(FText::FromString(TEXT("Back")));

    // 房间列表文本
    RoomListText = WidgetTree->ConstructWidget<UTextBlock>(UTextBlock::StaticClass(), TEXT("RoomList"));
    UCanvasPanelSlot* ListSlot = Root->AddChildToCanvas(RoomListText);
    ListSlot->SetAnchors(FAnchors(0.5f, 0.55f, 0.5f, 0.55f));
    ListSlot->SetAlignment(FVector2D(0.5f, 0.5f));
    ListSlot->SetSize(FVector2D(500.0f, 200.0f));
    FSlateFontInfo ListFont = RoomListText->GetFont();
    ListFont.Size = 18;
    RoomListText->SetFont(ListFont);
    RoomListText->SetText(FText::FromString(TEXT("(press Refresh to search)")));
}

void UPropHuntRoomListWidget::OnDirectConnectClicked()
{
    // 本地直连：绕过 Session 搜索，直接连本机 listen server（127.0.0.1:7777）。
    if (APlayerController* PC = GetOwningPlayer())
    {
        if (UPropHuntMenuSubsystem* Menu = GetGameInstance()->GetSubsystem<UPropHuntMenuSubsystem>())
        {
            Menu->SetInRoom(true);
        }
        PC->ClientTravel(TEXT("127.0.0.1:7777"), TRAVEL_Absolute);
    }
}

void UPropHuntRoomListWidget::OnRefreshClicked()
{
    if (UPropHuntRoomSubsystem* RoomSubsystem = GetGameInstance()->GetSubsystem<UPropHuntRoomSubsystem>())
    {
        RoomSubsystem->FindRooms(FOnFindRoomsComplete::CreateUObject(this, &UPropHuntRoomListWidget::PopulateRooms));
    }
}

void UPropHuntRoomListWidget::OnBackClicked()
{
    DeactivateWidget();
}

void UPropHuntRoomListWidget::PopulateRooms(const TArray<FOnlineSessionSearchResult>& Results)
{
    FString Text;
    if (Results.Num() == 0)
    {
        Text = TEXT("No rooms found.");
    }
    else
    {
        for (const FOnlineSessionSearchResult& Result : Results)
        {
            FString OwningUserName = TEXT("Unknown");
            if (Result.Session.OwningUserName.IsEmpty())
            {
                OwningUserName = TEXT("Room");
            }
            else
            {
                OwningUserName = Result.Session.OwningUserName;
            }
            Text += FString::Printf(TEXT("%s  (Ping %d)\n"), *OwningUserName, Result.PingInMs);
        }
    }
    if (RoomListText)
    {
        RoomListText->SetText(FText::FromString(Text));
    }
}
