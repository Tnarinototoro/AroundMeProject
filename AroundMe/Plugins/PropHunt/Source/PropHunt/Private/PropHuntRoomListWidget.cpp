#include "PropHuntRoomListWidget.h"

#include "Blueprint/WidgetTree.h"
#include "OnlineSessionSettings.h"
#include "Components/CanvasPanel.h"
#include "Components/CanvasPanelSlot.h"
#include "Components/Button.h"
#include "Components/TextBlock.h"
#include "PropHuntRoomSubsystem.h"
#include "PropHuntMenuSubsystem.h"
#include "PropHuntTypes.h"

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
    DirectLabel->SetText(FText::FromString(TEXT("Join Local Room")));

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
    UPropHuntMenuSubsystem* Menu = GetGameInstance()->GetSubsystem<UPropHuntMenuSubsystem>();
    APlayerController* PC = GetOwningPlayer();
    if (!PC)
    {
        return;
    }

    // 已连上 listen server（编辑器 PIE 双窗口 Num Players=2 时，client 本来就连着 host）→ 直接进房间。
    if (PC->GetWorld()->GetNetMode() == NM_Client)
    {
        if (Menu)
        {
            Menu->SetInRoom(true);
            Menu->ShowRoom();
        }
        return;
    }

    // 独立进程（.bat 双开）→ 连本机 listen server（host 已 Create Room，监听默认 7777 端口）。
    if (Menu)
    {
        Menu->SetInRoom(true);
    }
    UE_LOG(LogPropHunt, Warning, TEXT("[RoomList] DirectConnect: ClientTravel 127.0.0.1"));
    PC->ClientTravel(TEXT("127.0.0.1"), TRAVEL_Absolute);
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
    // 不用 Stack 时 DeactivateWidget 不移除 widget，这里直接切回主菜单。
    if (UPropHuntMenuSubsystem* Menu = GetGameInstance()->GetSubsystem<UPropHuntMenuSubsystem>())
    {
        Menu->ShowMainMenu();
    }
}

void UPropHuntRoomListWidget::PopulateRooms(const TArray<FOnlineSessionSearchResult>& Results)
{
    // 清空旧房间按钮。
    for (UButton* Btn : RoomButtons)
    {
        if (Btn)
        {
            Btn->RemoveFromParent();
        }
    }
    RoomButtons.Reset();
    CurrentResults = Results;

    UCanvasPanel* Root = Cast<UCanvasPanel>(WidgetTree->RootWidget);

    // 为每个房间创建一个可点击按钮。
    for (int32 i = 0; i < Results.Num(); ++i)
    {
        const FOnlineSessionSearchResult& Result = Results[i];

        UButton* Btn = WidgetTree->ConstructWidget<UButton>(UButton::StaticClass());
        if (!Btn)
        {
            continue;
        }

        if (Root)
        {
            UCanvasPanelSlot* RoomSlot = Root->AddChildToCanvas(Btn);
            RoomSlot->SetAnchors(FAnchors(0.5f, 0.5f, 0.5f, 0.5f));
            RoomSlot->SetAlignment(FVector2D(0.5f, 0.5f));
            RoomSlot->SetPosition(FVector2D(0.0f, 150.0f + i * 70.0f));
            RoomSlot->SetSize(FVector2D(360.0f, 56.0f));
        }

        const FString RoomName = Result.Session.OwningUserName.IsEmpty() ? TEXT("Room") : Result.Session.OwningUserName;
        UTextBlock* Label = WidgetTree->ConstructWidget<UTextBlock>(UTextBlock::StaticClass());
        Btn->AddChild(Label);
        FSlateFontInfo Font = Label->GetFont();
        Font.Size = 20;
        Label->SetFont(Font);
        Label->SetText(FText::FromString(FString::Printf(TEXT("%s  (Ping %d)"), *RoomName, Result.PingInMs)));

        Btn->OnPressed.AddDynamic(this, &UPropHuntRoomListWidget::OnRoomPressed);
        RoomButtons.Add(Btn);
    }

    if (Results.Num() == 0 && RoomListText)
    {
        RoomListText->SetText(FText::FromString(TEXT("No rooms found.")));
    }
}

void UPropHuntRoomListWidget::OnRoomPressed()
{
    // OnClicked/OnPressed 是无参数委托，无法直接知道是哪个按钮，这里用 IsPressed 找到当前按下的按钮。
    for (int32 i = 0; i < RoomButtons.Num(); ++i)
    {
        if (RoomButtons[i] && RoomButtons[i]->IsPressed() && CurrentResults.IsValidIndex(i))
        {
            JoinRoomByResult(CurrentResults[i]);
            break;
        }
    }
}

void UPropHuntRoomListWidget::JoinRoomByResult(const FOnlineSessionSearchResult& Result)
{
    if (UPropHuntRoomSubsystem* RoomSubsystem = GetGameInstance()->GetSubsystem<UPropHuntRoomSubsystem>())
    {
        RoomSubsystem->JoinRoom(Result, FOnRoomOpComplete::CreateLambda([this](bool bSuccess)
        {
            if (!bSuccess)
            {
                return;
            }

            if (UPropHuntRoomSubsystem* RS = GetGameInstance()->GetSubsystem<UPropHuntRoomSubsystem>())
            {
                const FString TravelURL = RS->GetTravelURL();
                if (TravelURL.IsEmpty())
                {
                    return;
                }

                if (UPropHuntMenuSubsystem* Menu = GetGameInstance()->GetSubsystem<UPropHuntMenuSubsystem>())
                {
                    Menu->SetInRoom(true);
                }
                if (APlayerController* PC = GetOwningPlayer())
                {
                    PC->ClientTravel(TravelURL, TRAVEL_Absolute);
                }
            }
        }));
    }
}
