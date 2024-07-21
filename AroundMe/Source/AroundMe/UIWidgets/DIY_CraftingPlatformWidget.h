#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "DIY_CraftingPlatformWidget.generated.h"

UCLASS()
class AROUNDME_API UDIY_CraftingPlatformWidget : public UUserWidget
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintCallable, Category = "UI_ItemCraftingPlatform")
    void InitializeItemCraftingPlatformWidget(int32 RowsDisplayed_Limit,int32 Rows, int32 Cols, const FVector2D &inImageIconSlotSize, float inTextSlotFontSize);

    int32 GetTotalRows() const { return RowNum; }

    void RequestScrollOffset(float inOffset);

    bool RequestChangeSlotBorderColor(int32 row, int32 col, const FLinearColor &inColor);
    bool RequestChangeSlotCountText(int32 row, int32 col, const FText &inText);
    bool RequestChangeSlotImage(int32 row, int32 col, UTexture2D *Texture);
    void RequestVisibility_ItemCraftingPlatformUI(ESlateVisibility invisibility);
    void RequestVisibility_ItemCraftingPlatformUI_Slot_At(int32 row, int32 col, ESlateVisibility invisibility);
    void RequestVisibility_ItemCraftingPlatformUI_CountText_At_Slot(int32 row, int32 col, ESlateVisibility invisibility);

protected:
    virtual void NativeConstruct() override;
    virtual void NativeOnInitialized() override;
    class UBorder *GetSlotBorder(int32 row, int32 col) const;
    class UImage *GetSlotImage(int32 row, int32 col) const;
    class UTextBlock *GetSlotCountText(int32 row, int32 col) const;
    class UDIY_CraftReceiptRowWidget* GetRowWidgetAt(int32 row) const;

private:
    UPROPERTY()
    class USizeBox *SizeBox;

    UPROPERTY()
    class UScrollBox *ScrollBox;

    int32 RowNum_Displayed_Limit;
    int32 RowNum;
    int32 ColNum;
    FVector2D IconImageSlotSize{0.0f, 0.0f};
    float TextSlotFontSize{10.0f};

    void CreateAllReceipts();
    void AddReceiptRow(int32 RowIndex);
};
