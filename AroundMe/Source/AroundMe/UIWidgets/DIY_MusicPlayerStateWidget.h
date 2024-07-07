#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "DIY_MusicPlayerStateWidget.generated.h"

UCLASS()
class AROUNDME_API UDIY_MusicPlayerStateWidget : public UUserWidget
{
    GENERATED_BODY()

public:
    virtual void NativeConstruct() override;
    virtual void NativeOnInitialized() override;
    void UpdateText(const FText &NewText);
    void InitMusicPlayerStateWidget(float inTextSlotFontSize){TextSlotFontSize=inTextSlotFontSize;}
private:
    UPROPERTY()
    class UTextBlock *InfoTextBlock;
    class UCanvasPanel *infoPanel;

    FVector2D IconImageSlotSize{0.0f, 0.0f};
    float TextSlotFontSize{10.0f};
};