#include "PropHuntMainMenuWidget.h"

#include "PropHuntTypes.h"
#include "PropHuntAuthSubsystem.h"
#include "Blueprint/WidgetTree.h"
#include "Components/CanvasPanel.h"
#include "Components/CanvasPanelSlot.h"
#include "Components/Button.h"
#include "Components/TextBlock.h"
#include "PropHuntRoomSubsystem.h"
#include "PropHuntMenuSubsystem.h"
#include "Engine/GameInstance.h"
#include "Kismet/KismetSystemLibrary.h"

namespace
{
    FSlateFontInfo MakeFont(const UTextBlock* Widget, int32 Size)
    {
        FSlateFontInfo Font = Widget->GetFont();
        Font.Size = Size;
        return Font;
    }
}

void UPropHuntMainMenuWidget::NativeOnInitialized()
{
    Super::NativeOnInitialized();

    UCanvasPanel* Root = WidgetTree->ConstructWidget<UCanvasPanel>(UCanvasPanel::StaticClass(), TEXT("Root"));
    WidgetTree->RootWidget = Root;

    UTextBlock* Title = WidgetTree->ConstructWidget<UTextBlock>(UTextBlock::StaticClass(), TEXT("Title"));
    UCanvasPanelSlot* TitleSlot = Root->AddChildToCanvas(Title);
    TitleSlot->SetAnchors(FAnchors(0.5f, 0.16f, 0.5f, 0.16f));
    TitleSlot->SetAlignment(FVector2D(0.5f, 0.5f));
    Title->SetFont(MakeFont(Title, 48));
    Title->SetText(FText::FromString(TEXT("Prop Hunt")));

    // Epic 登录状态
    AuthStatusText = WidgetTree->ConstructWidget<UTextBlock>(UTextBlock::StaticClass(), TEXT("AuthStatus"));
    UCanvasPanelSlot* StatusSlot = Root->AddChildToCanvas(AuthStatusText);
    StatusSlot->SetAnchors(FAnchors(0.5f, 0.26f, 0.5f, 0.26f));
    StatusSlot->SetAlignment(FVector2D(0.5f, 0.5f));
    StatusSlot->SetSize(FVector2D(780.0f, 44.0f));
    AuthStatusText->SetFont(MakeFont(AuthStatusText, 20));
    AuthStatusText->SetJustification(ETextJustify::Center);
    AuthStatusText->SetColorAndOpacity(FSlateColor(FLinearColor(0.85f, 0.85f, 0.9f)));
    AuthStatusText->SetText(FText::FromString(TEXT("Checking Epic sign-in...")));

    // 登录按钮：未登录时显示
    LoginButton = WidgetTree->ConstructWidget<UButton>(UButton::StaticClass(), TEXT("SignIn"));
    UCanvasPanelSlot* LoginSlot = Root->AddChildToCanvas(LoginButton);
    LoginSlot->SetAnchors(FAnchors(0.5f, 0.35f, 0.5f, 0.35f));
    LoginSlot->SetAlignment(FVector2D(0.5f, 0.5f));
    LoginSlot->SetSize(FVector2D(380.0f, 60.0f));
    LoginButton->OnClicked.AddDynamic(this, &UPropHuntMainMenuWidget::OnLoginClicked);

    UTextBlock* LoginLabel = WidgetTree->ConstructWidget<UTextBlock>(UTextBlock::StaticClass(), TEXT("SignInLabel"));
    LoginButton->AddChild(LoginLabel);
    LoginLabel->SetFont(MakeFont(LoginLabel, 24));
    LoginLabel->SetJustification(ETextJustify::Center);
    LoginLabel->SetText(FText::FromString(TEXT("Sign in with Epic")));

    // 退出登录：已登录时显示，便于同机切换账号
    SignOutButton = WidgetTree->ConstructWidget<UButton>(UButton::StaticClass(), TEXT("SignOut"));
    UCanvasPanelSlot* SignOutSlot = Root->AddChildToCanvas(SignOutButton);
    SignOutSlot->SetAnchors(FAnchors(0.5f, 0.35f, 0.5f, 0.35f));
    SignOutSlot->SetAlignment(FVector2D(0.5f, 0.5f));
    SignOutSlot->SetSize(FVector2D(240.0f, 48.0f));
    SignOutButton->OnClicked.AddDynamic(this, &UPropHuntMainMenuWidget::OnSignOutClicked);

    UTextBlock* SignOutLabel = WidgetTree->ConstructWidget<UTextBlock>(UTextBlock::StaticClass(), TEXT("SignOutLabel"));
    SignOutButton->AddChild(SignOutLabel);
    SignOutLabel->SetFont(MakeFont(SignOutLabel, 20));
    SignOutLabel->SetJustification(ETextJustify::Center);
    SignOutLabel->SetText(FText::FromString(TEXT("Sign out")));

    // 创建房间
    CreateRoomButton = WidgetTree->ConstructWidget<UButton>(UButton::StaticClass(), TEXT("CreateRoom"));
    UCanvasPanelSlot* CreateSlot = Root->AddChildToCanvas(CreateRoomButton);
    CreateSlot->SetAnchors(FAnchors(0.5f, 0.45f, 0.5f, 0.45f));
    CreateSlot->SetAlignment(FVector2D(0.5f, 0.5f));
    CreateSlot->SetSize(FVector2D(320.0f, 60.0f));
    CreateRoomButton->OnClicked.AddDynamic(this, &UPropHuntMainMenuWidget::OnCreateRoomClicked);

    UTextBlock* CreateLabel = WidgetTree->ConstructWidget<UTextBlock>(UTextBlock::StaticClass(), TEXT("CreateLabel"));
    CreateRoomButton->AddChild(CreateLabel);
    CreateLabel->SetFont(MakeFont(CreateLabel, 26));
    CreateLabel->SetJustification(ETextJustify::Center);
    CreateLabel->SetText(FText::FromString(TEXT("Create Room")));

    // 加入房间
    JoinRoomButton = WidgetTree->ConstructWidget<UButton>(UButton::StaticClass(), TEXT("JoinRoom"));
    UCanvasPanelSlot* JoinSlot = Root->AddChildToCanvas(JoinRoomButton);
    JoinSlot->SetAnchors(FAnchors(0.5f, 0.545f, 0.5f, 0.545f));
    JoinSlot->SetAlignment(FVector2D(0.5f, 0.5f));
    JoinSlot->SetSize(FVector2D(320.0f, 60.0f));
    JoinRoomButton->OnClicked.AddDynamic(this, &UPropHuntMainMenuWidget::OnJoinRoomClicked);

    UTextBlock* JoinLabel = WidgetTree->ConstructWidget<UTextBlock>(UTextBlock::StaticClass(), TEXT("JoinLabel"));
    JoinRoomButton->AddChild(JoinLabel);
    JoinLabel->SetFont(MakeFont(JoinLabel, 26));
    JoinLabel->SetJustification(ETextJustify::Center);
    JoinLabel->SetText(FText::FromString(TEXT("Join Room")));

    // 设置（占位）
    SettingsButton = WidgetTree->ConstructWidget<UButton>(UButton::StaticClass(), TEXT("Settings"));
    UCanvasPanelSlot* SettingsSlot = Root->AddChildToCanvas(SettingsButton);
    SettingsSlot->SetAnchors(FAnchors(0.5f, 0.64f, 0.5f, 0.64f));
    SettingsSlot->SetAlignment(FVector2D(0.5f, 0.5f));
    SettingsSlot->SetSize(FVector2D(320.0f, 56.0f));
    SettingsButton->OnClicked.AddDynamic(this, &UPropHuntMainMenuWidget::OnSettingsClicked);

    UTextBlock* SettingsLabel = WidgetTree->ConstructWidget<UTextBlock>(UTextBlock::StaticClass(), TEXT("SettingsLabel"));
    SettingsButton->AddChild(SettingsLabel);
    SettingsLabel->SetFont(MakeFont(SettingsLabel, 24));
    SettingsLabel->SetJustification(ETextJustify::Center);
    SettingsLabel->SetText(FText::FromString(TEXT("Settings")));

    // 退出
    QuitButton = WidgetTree->ConstructWidget<UButton>(UButton::StaticClass(), TEXT("Quit"));
    UCanvasPanelSlot* QuitSlot = Root->AddChildToCanvas(QuitButton);
    QuitSlot->SetAnchors(FAnchors(0.5f, 0.735f, 0.5f, 0.735f));
    QuitSlot->SetAlignment(FVector2D(0.5f, 0.5f));
    QuitSlot->SetSize(FVector2D(320.0f, 56.0f));
    QuitButton->OnClicked.AddDynamic(this, &UPropHuntMainMenuWidget::OnQuitClicked);

    UTextBlock* QuitLabel = WidgetTree->ConstructWidget<UTextBlock>(UTextBlock::StaticClass(), TEXT("QuitLabel"));
    QuitButton->AddChild(QuitLabel);
    QuitLabel->SetFont(MakeFont(QuitLabel, 24));
    QuitLabel->SetJustification(ETextJustify::Center);
    QuitLabel->SetText(FText::FromString(TEXT("Quit")));

    if (UGameInstance* GameInstance = GetGameInstance())
    {
        if (UPropHuntAuthSubsystem* Auth = GameInstance->GetSubsystem<UPropHuntAuthSubsystem>())
        {
            AuthStateChangedHandle = Auth->OnAuthStateChanged.AddUObject(this, &UPropHuntMainMenuWidget::RefreshAuthUI);
        }
    }

    RefreshAuthUI();
}

void UPropHuntMainMenuWidget::NativeDestruct()
{
    if (UGameInstance* GameInstance = GetGameInstance())
    {
        if (UPropHuntAuthSubsystem* Auth = GameInstance->GetSubsystem<UPropHuntAuthSubsystem>())
        {
            Auth->OnAuthStateChanged.Remove(AuthStateChangedHandle);
        }
    }

    Super::NativeDestruct();
}

void UPropHuntMainMenuWidget::RefreshAuthUI()
{
    UPropHuntAuthSubsystem* Auth = GetGameInstance() ? GetGameInstance()->GetSubsystem<UPropHuntAuthSubsystem>() : nullptr;
    const bool bSignedIn = Auth && Auth->IsSignedIn();

    if (AuthStatusText)
    {
        const FString Text = Auth ? Auth->GetStatusText() : TEXT("Online subsystem unavailable");
        AuthStatusText->SetText(FText::FromString(Text));
        AuthStatusText->SetColorAndOpacity(FSlateColor(
            bSignedIn ? FLinearColor(0.6f, 0.95f, 0.6f) : FLinearColor(0.9f, 0.85f, 0.6f)));
    }

    if (LoginButton)
    {
        LoginButton->SetVisibility(bSignedIn ? ESlateVisibility::Collapsed : ESlateVisibility::Visible);
        LoginButton->SetIsEnabled(Auth != nullptr);
    }

    if (SignOutButton)
    {
        SignOutButton->SetVisibility(bSignedIn ? ESlateVisibility::Visible : ESlateVisibility::Collapsed);
    }

    // 未登录时禁掉联网操作，避免点了没反应。
    if (CreateRoomButton)
    {
        CreateRoomButton->SetIsEnabled(bSignedIn);
    }
    if (JoinRoomButton)
    {
        JoinRoomButton->SetIsEnabled(bSignedIn);
    }
}

void UPropHuntMainMenuWidget::OnLoginClicked()
{
    if (UPropHuntAuthSubsystem* Auth = GetGameInstance() ? GetGameInstance()->GetSubsystem<UPropHuntAuthSubsystem>() : nullptr)
    {
        Auth->SignInWithEpic();
        RefreshAuthUI();
    }
}

void UPropHuntMainMenuWidget::OnSignOutClicked()
{
    if (UPropHuntAuthSubsystem* Auth = GetGameInstance() ? GetGameInstance()->GetSubsystem<UPropHuntAuthSubsystem>() : nullptr)
    {
        Auth->SignOut();
        RefreshAuthUI();
    }
}

void UPropHuntMainMenuWidget::OnCreateRoomClicked()
{
    UPropHuntAuthSubsystem* Auth = GetGameInstance() ? GetGameInstance()->GetSubsystem<UPropHuntAuthSubsystem>() : nullptr;
    if (!Auth || !Auth->IsSignedIn())
    {
        if (AuthStatusText)
        {
            AuthStatusText->SetText(FText::FromString(TEXT("Sign in with Epic before creating a room")));
        }
        return;
    }

    UE_LOG(LogPropHunt, Log, TEXT("[CreateRoom] clicked"));
    if (UPropHuntRoomSubsystem* RoomSubsystem = GetGameInstance()->GetSubsystem<UPropHuntRoomSubsystem>())
    {
        if (AuthStatusText)
        {
            AuthStatusText->SetText(FText::FromString(TEXT("Creating room...")));
        }

        RoomSubsystem->CreateRoom(FOnRoomOpComplete::CreateLambda([this](bool bSuccess)
        {
            UE_LOG(LogPropHunt, Log, TEXT("[CreateRoom] result=%d"), bSuccess ? 1 : 0);
            if (bSuccess)
            {
                if (UPropHuntMenuSubsystem* Menu = GetGameInstance()->GetSubsystem<UPropHuntMenuSubsystem>())
                {
                    Menu->SetInRoom(true);
                }
                GetWorld()->ServerTravel(TEXT("/PropHunt/Maps/PH_Lobby?listen"));
                return;
            }

            if (AuthStatusText)
            {
                FString Error;
                if (UPropHuntRoomSubsystem* Room = GetGameInstance()->GetSubsystem<UPropHuntRoomSubsystem>())
                {
                    Error = Room->GetLastError();
                }
                AuthStatusText->SetText(FText::FromString(Error.IsEmpty()
                    ? TEXT("Create Room failed - check the log for details")
                    : FString::Printf(TEXT("Create Room failed: %s"), *Error)));
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
