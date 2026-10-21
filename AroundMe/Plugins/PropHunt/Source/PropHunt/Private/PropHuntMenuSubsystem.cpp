#include "PropHuntMenuSubsystem.h"

#include "PropHuntTypes.h"
#include "CommonActivatableWidget.h"
#include "GameFramework/PlayerController.h"
#include "PropHuntMainMenuWidget.h"
#include "PropHuntRoomListWidget.h"
#include "PropHuntRoomWidget.h"
#include "PropHuntSettlementWidget.h"

void UPropHuntMenuSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
    Super::Initialize(Collection);
}

void UPropHuntMenuSubsystem::ShowMainMenu()
{
    ShowWidget(UPropHuntMainMenuWidget::StaticClass());
}

void UPropHuntMenuSubsystem::ShowRoomList()
{
    ShowWidget(UPropHuntRoomListWidget::StaticClass());
}

void UPropHuntMenuSubsystem::ShowRoom()
{
    ShowWidget(UPropHuntRoomWidget::StaticClass());
}

void UPropHuntMenuSubsystem::ShowSettlement(const FString& ResultText)
{
    if (CurrentWidget)
    {
        CurrentWidget->RemoveFromParent();
        CurrentWidget = nullptr;
    }

    UPropHuntSettlementWidget* Widget = CreateWidget<UPropHuntSettlementWidget>(GetGameInstance());
    if (Widget)
    {
        Widget->AddToViewport();
        Widget->ActivateWidget();
        Widget->SetIsFocusable(true);
        Widget->SetResultText(ResultText);
        CurrentWidget = Widget;

        ApplyMenuInputMode(Widget);
    }
}

void UPropHuntMenuSubsystem::HideMenu()
{
    if (CurrentWidget)
    {
        UE_LOG(LogPropHunt, Warning, TEXT("[HideMenu] removing widget=%s"), *GetNameSafe(CurrentWidget));
        CurrentWidget->RemoveFromParent();
        CurrentWidget = nullptr;
    }

    // 恢复游戏输入模式（鼠标捕获 + 光标隐藏）。Common UI 在 Activatable 树失活时会设成 NoCapture，这里显式改回。
    if (APlayerController* PC = GetGameInstance()->GetFirstLocalPlayerController())
    {
        PC->SetShowMouseCursor(false);
        PC->SetInputMode(FInputModeGameOnly());
    }
}

void UPropHuntMenuSubsystem::ShowWidget(TSubclassOf<UCommonActivatableWidget> WidgetClass)
{
    if (CurrentWidget)
    {
        CurrentWidget->RemoveFromParent();
        CurrentWidget = nullptr;
    }

    UCommonActivatableWidget* Widget = CreateWidget<UCommonActivatableWidget>(GetGameInstance(), WidgetClass);
    if (Widget)
    {
        Widget->AddToViewport();
        Widget->ActivateWidget();
        Widget->SetIsFocusable(true);
        CurrentWidget = Widget;

        ApplyMenuInputMode(Widget);
    }
}

void UPropHuntMenuSubsystem::ApplyMenuInputMode(UUserWidget* Widget)
{
    APlayerController* PC = GetGameInstance() ? GetGameInstance()->GetFirstLocalPlayerController() : nullptr;
    if (!PC)
    {
        return;
    }

    // 菜单页必须能接收鼠标点击：显式切到 GameAndUI + 显示光标。
    // 之前的实现只依赖 CommonUI 默认焦点，日志里会出现 "focusing the game viewport"，
    // 导致按钮点不到。
    FInputModeGameAndUI InputMode;
    if (Widget)
    {
        InputMode.SetWidgetToFocus(Widget->TakeWidget());
    }
    InputMode.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock);
    InputMode.SetHideCursorDuringCapture(false);

    PC->SetInputMode(InputMode);
    PC->SetShowMouseCursor(true);
}
