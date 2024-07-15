#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "DIY_ItemBackPackWidget.generated.h"

UCLASS()
class AROUNDME_API UDIY_ItemBackPackWidget : public UUserWidget
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintCallable, Category = "ItemBackPack")
    void InitializeBackPack(int32 Rows, int32 Cols, const FVector2D &inImageIconSlotSize, float inTextSlotFontSize);

    bool RequestChangeSlotBorderColor(int32 row, int32 col, const FLinearColor &inColor);
    bool RequestChangeSlotCountText(int32 row, int32 col, const FText &inText);
    bool RequestChangeSlotImage(int32 row, int32 col, UTexture2D *Texture);
    void RequestVisibility_BackpackUI(ESlateVisibility invisibility);
    void RequestVisibility_BackpackUI_Slot_At(int32 row, int32 col, ESlateVisibility invisibility);
    void RequestVisibility_BackpackUI_CountText_At_Slot(int32 row, int32 col, ESlateVisibility invisibility);

    bool IsItemSubMenuShown_Impl() const;
    void ShowSubMenuAt(int32 Row, int32 Col);
    void HideSubMenu();

    void RequestToggleSubMenuButtonAt(uint32 inIndex,bool inIsEnabled);
    int32 GetItemSubMenuCommandsNum() const;

    FString GetItemSubMenuCommandStringAt(uint32 inIndex);
protected:
    virtual void NativeConstruct() override;
    virtual void NativeOnInitialized() override;

private:
    UPROPERTY()
    class UScrollBox *ScrollBox;

    UPROPERTY()
    class UGridPanel *GridPanel;

    int32 RowNum;
    int32 ColNum;
    FVector2D IconImageSlotSize{0.0f, 0.0f};
    float TextSlotFontSize{10.0f};
    void CreateGrid();
    class UBorder *GetSlotBorder(int32 row, int32 col) const;
    class UImage *GetSlotImage(int32 row, int32 col) const;
    class UTextBlock *GetSlotCountText(int32 row, int32 col) const;

    UPROPERTY()
    class UDIY_ItemSubMenuWidget *ItemSubMenuWidget;
};
