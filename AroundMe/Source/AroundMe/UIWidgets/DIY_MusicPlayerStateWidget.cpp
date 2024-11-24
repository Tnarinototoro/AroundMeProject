#include "DIY_MusicPlayerStateWidget.h"
#include "SlateOptMacros.h"
#include "Components/Widget.h"
#include "Components/TextBlock.h"
#include "Blueprint/WidgetTree.h"
#include "../GameUtilities/Logs/DIY_LogHelper.h"
#include "Components/CanvasPanel.h"
#include "Components/CanvasPanelSlot.h"
void UDIY_MusicPlayerStateWidget::NativeConstruct()
{
    Super::NativeConstruct();

   
}

void UDIY_MusicPlayerStateWidget::NativeOnInitialized()
{
    Super::NativeOnInitialized();
    infoPanel = WidgetTree->ConstructWidget<UCanvasPanel>(UCanvasPanel::StaticClass(), TEXT("RootWidget"));
    
    if (infoPanel)
    {
        InfoTextBlock = WidgetTree->ConstructWidget<UTextBlock>(UTextBlock::StaticClass(), TEXT("Text"));

        if (InfoTextBlock)
        {
            InfoTextBlock->SetText(FText::FromString(TEXT("Music Player State Text")));
            FSlateFontInfo cur_font = InfoTextBlock->GetFont();
            cur_font.Size = TextSlotFontSize;
            InfoTextBlock->SetFont(cur_font);
            InfoTextBlock->SetColorAndOpacity(FLinearColor::Red);
            const auto RootTextSlot = infoPanel->AddChildToCanvas(InfoTextBlock);
            if (RootTextSlot)
            {
                RootTextSlot->SetAutoSize(true);
                RootTextSlot->SetAnchors(FAnchors{ 0,0,1,1 });
                RootTextSlot->SetOffsets(FMargin{ 0,0 });

            }

            WidgetTree->RootWidget = infoPanel;
            
        }
       
    }


}

void UDIY_MusicPlayerStateWidget::UpdateText(const FText& NewText)
{
    if (InfoTextBlock)
    {
        InfoTextBlock->SetText(NewText);
    }
}
