#include "DIY_ItemSubMenuWidget.h"
#include "Components/VerticalBox.h"
#include "Components/Button.h"
#include "Blueprint/WidgetTree.h"
#include "Components/TextBlock.h"

void UDIY_ItemSubMenuWidget::NativeConstruct()
{
    Super::NativeConstruct();
}

void UDIY_ItemSubMenuWidget::InitializeSubMenu(int32 NumCommands)
{
    CommandsNum = NumCommands;
    CreateCommandButtons(NumCommands);
}
void UDIY_ItemSubMenuWidget::RequestToggleCommandEnabledAt_Impl(uint32 inIndex, bool inIsEnabled)
{
    ensureMsgf(nullptr != CommandList, TEXT("item submenu command list vertical box is null"));
    if (inIndex >= (uint32)CommandList->GetAllChildren().Num())
        return;
    if (nullptr != CommandList)
    {
        UButton* cur_button= Cast<UButton>(CommandList->GetChildAt(inIndex));

        if (nullptr != cur_button&&cur_button->GetIsEnabled()!=inIsEnabled)
        {
            cur_button->SetIsEnabled(inIsEnabled);
        }
    }
}
void UDIY_ItemSubMenuWidget::NativeOnInitialized()
{
    Super::NativeOnInitialized();

    if (!CommandList)
    {
        CommandList = WidgetTree->ConstructWidget<UVerticalBox>(UVerticalBox::StaticClass(), TEXT("CommandList"));
        WidgetTree->RootWidget = CommandList;
    }
}
void UDIY_ItemSubMenuWidget::CreateCommandButtons(int32 NumCommands)
{

    if (!CommandList)
        return;

    CommandList->ClearChildren();

    for (int32 i = 0; i < NumCommands; ++i)
    {
        UButton *CommandButton = WidgetTree->ConstructWidget<UButton>();

        
        
        if (CommandButton)
        {
            CommandButton->SetDisplayLabel(FString::Printf(TEXT("Cmd_Discard_%d"),i));
            CommandButton->SetIsEnabled(false);
            UTextBlock *ButtonText = WidgetTree->ConstructWidget<UTextBlock>(UTextBlock::StaticClass(), TEXT("DiscardButttonText"));
            if (ButtonText)
            {
                ButtonText->SetText(FText::FromString(TEXT("Discard")));
                ButtonText->SetColorAndOpacity(FLinearColor::White);
                ButtonText->SetFont(FSlateFontInfo(FPaths::EngineContentDir() / TEXT("Slate/Fonts/Roboto-Regular.ttf"), 24));

                CommandButton->AddChild(ButtonText);
            }
            CommandList->AddChild(CommandButton);
        }
    }
   
}

FString UDIY_ItemSubMenuWidget::GetCommandStringAt(uint32 inIndex)
{
    ensureMsgf(inIndex < (uint32)GetCommandsNum(), TEXT("GetCommand string at invalid index"));

    UButton* cur_button = Cast<UButton>(CommandList->GetChildAt(inIndex));

    ensureMsgf(nullptr != cur_button, TEXT("cur button is nullptr"));
    return cur_button->GetDisplayLabel();
}