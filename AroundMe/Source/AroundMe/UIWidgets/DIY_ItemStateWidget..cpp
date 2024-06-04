#include "DIY_ItemStateWidget.h"
#include "SlateOptMacros.h"
#include "Components/Widget.h"
#include "Components/TextBlock.h"
#include "Blueprint/WidgetTree.h"
#include "../GameUtilities/Logs/DIY_LogHelper.h"
#include "Components/CanvasPanel.h"
#include "Components/CanvasPanelSlot.h"
void UDIY_ItemStateWidget::NativeConstruct()
{
    Super::NativeConstruct();

   
}

void UDIY_ItemStateWidget::NativeOnInitialized()
{
    Super::NativeOnInitialized();
    infoPanel = WidgetTree->ConstructWidget<UCanvasPanel>(UCanvasPanel::StaticClass(), TEXT("RootWidget"));
    
    if (infoPanel)
    {
        InfoTextBlock = WidgetTree->ConstructWidget<UTextBlock>(UTextBlock::StaticClass(), TEXT("Text"));

        if (InfoTextBlock)
        {
            InfoTextBlock->SetText(FText::FromString(TEXT("Initial Text")));
            FSlateFontInfo cur_font = InfoTextBlock->GetFont();
            cur_font.Size = 30.0f;
            InfoTextBlock->SetFont(cur_font);
            InfoTextBlock->SetColorAndOpacity(FLinearColor(1.0f, 1.0f, 1.0f, 1.0f));
            const auto RootTextSlot = infoPanel->AddChildToCanvas(InfoTextBlock);
            if (RootTextSlot)
            {
                RootTextSlot->SetAutoSize(true);
                RootTextSlot->SetAnchors(FAnchors{ 0,0,1,1 });
                RootTextSlot->SetOffsets(FMargin{ 0,0 });

            }

            WidgetTree->RootWidget = infoPanel;
            EASY_LOG_MAINPLAYER("UDIY_ItemStateWidget finished creating! %d", InfoTextBlock->Visibility);
        }
       
    }


}

void UDIY_ItemStateWidget::UpdateText(const FString& NewText)
{
    if (InfoTextBlock)
    {
        InfoTextBlock->SetText(FText::FromString(NewText));
    }
}
