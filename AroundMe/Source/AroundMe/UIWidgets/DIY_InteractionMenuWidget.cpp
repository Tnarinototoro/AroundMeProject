#include "DIY_InteractionMenuWidget.h"
#include "Components/VerticalBox.h"
#include "Components/VerticalBoxSlot.h"
#include "Components/Button.h"
#include "Components/TextBlock.h"
#include "Components/SizeBox.h"
#include "Blueprint/WidgetTree.h"

// Define the default values for command width and height
float UDIY_InteractionMenuWidget::CommandWidth = 200.0f;
float UDIY_InteractionMenuWidget::CommandHeight = 50.0f;

void UDIY_InteractionMenuWidget::NativeConstruct()
{
    Super::NativeConstruct();
    // Additional initialization if needed
}

void UDIY_InteractionMenuWidget::NativeOnInitialized()
{
    Super::NativeOnInitialized();

    // Create VerticalBox
    VerticalBox = WidgetTree->ConstructWidget<UVerticalBox>(UVerticalBox::StaticClass(), TEXT("VerticalBox"));
    if (VerticalBox)
    {
        WidgetTree->RootWidget = VerticalBox;
    }
}

void UDIY_InteractionMenuWidget::InitializeMenu(const TArray<FString>& Commands)
{
    CreateMenu(Commands);
}

void UDIY_InteractionMenuWidget::CreateMenu(const TArray<FString>& Commands)
{
    if (!VerticalBox) return;

    VerticalBox->ClearChildren();

    for (const FString& Command : Commands)
    {
        USizeBox* NewSizeBox = WidgetTree->ConstructWidget<USizeBox>(USizeBox::StaticClass());
        if (NewSizeBox)
        {
            NewSizeBox->SetWidthOverride(CommandWidth);
            NewSizeBox->SetHeightOverride(CommandHeight);

            UButton* NewButton = WidgetTree->ConstructWidget<UButton>(UButton::StaticClass());
            if (NewButton)
            {
                UTextBlock* ButtonText = WidgetTree->ConstructWidget<UTextBlock>(UTextBlock::StaticClass());
                if (ButtonText)
                {
                    ButtonText->SetText(FText::FromString(Command));
                    NewButton->AddChild(ButtonText);
                }

                NewSizeBox->AddChild(NewButton);

                UVerticalBoxSlot* VerticalBoxSlot = VerticalBox->AddChildToVerticalBox(NewSizeBox);
                if (VerticalBoxSlot)
                {
                    VerticalBoxSlot->SetPadding(FMargin(5.0f));
                    VerticalBoxSlot->SetHorizontalAlignment(HAlign_Fill);
                    VerticalBoxSlot->SetVerticalAlignment(VAlign_Center);
                }
            }
        }
    }
}
