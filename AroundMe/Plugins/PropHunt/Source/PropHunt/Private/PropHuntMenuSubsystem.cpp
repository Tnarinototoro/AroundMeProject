#include "PropHuntMenuSubsystem.h"

#include "Blueprint/UserWidget.h"
#include "Widgets/CommonActivatableWidgetContainer.h"
#include "PropHuntMenuRootWidget.h"
#include "PropHuntMainMenuWidget.h"
#include "PropHuntRoomListWidget.h"
#include "PropHuntRoomWidget.h"

void UPropHuntMenuSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
    Super::Initialize(Collection);
}

void UPropHuntMenuSubsystem::EnsureStack()
{
    if (Stack)
    {
        return;
    }

    // Stack 是 UWidget（不是 UUserWidget），要包在一个 root UserWidget 里才能 AddToViewport。
    UPropHuntMenuRootWidget* RootWidget = CreateWidget<UPropHuntMenuRootWidget>(GetGameInstance());
    if (!RootWidget)
    {
        return;
    }

    Stack = RootWidget->WidgetTree->ConstructWidget<UCommonActivatableWidgetStack>(UCommonActivatableWidgetStack::StaticClass(), TEXT("Stack"));
    RootWidget->WidgetTree->RootWidget = Stack;
    RootWidget->AddToViewport();
}

void UPropHuntMenuSubsystem::ShowMainMenu()
{
    EnsureStack();
    if (Stack)
    {
        Stack->ClearWidgets();
        Stack->AddWidget<UPropHuntMainMenuWidget>(UPropHuntMainMenuWidget::StaticClass());
    }
}

void UPropHuntMenuSubsystem::ShowRoomList()
{
    EnsureStack();
    if (Stack)
    {
        Stack->AddWidget<UPropHuntRoomListWidget>(UPropHuntRoomListWidget::StaticClass());
    }
}

void UPropHuntMenuSubsystem::ShowRoom()
{
    EnsureStack();
    if (Stack)
    {
        Stack->ClearWidgets();
        Stack->AddWidget<UPropHuntRoomWidget>(UPropHuntRoomWidget::StaticClass());
    }
}
