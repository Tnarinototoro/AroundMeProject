#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "DIY_CraftReceiptRowWidget.generated.h"

UCLASS()
class AROUNDME_API UDIY_CraftReceiptRowWidget : public UUserWidget
{
    GENERATED_BODY()

public:
        void InitializeReceipt(const TArray<FPrimaryAssetId> *inParentCachedItemIDs, int32 cur_row_index, int32 ColNum, const FVector2D &IconImageSlotSize, float TextSlotFontSize);

    class UHorizontalBox *GetBoxContainer() const { return HorizontalBox; }
    class UBorder *GetSlotBorder(int32 col) const;
    class UImage *GetSlotImage(int32 col) const;
    class UTextBlock *GetSlotCountText(int32 col) const;
    class UCanvasPanel *GetSlotCanvas(int32 col) const;
    static int32 col_num_setup;
    FPrimaryAssetId GetAssetIDAtThisRowWithCol(int32 Col) const;

private:
    UPROPERTY()
    class UHorizontalBox *HorizontalBox;

    const TArray<FPrimaryAssetId> *ParentCachedItemIDs{nullptr};
    int32 saved_cur_row_index{-1};
    void AddSlot(int32 SlotIndex, const FVector2D &IconImageSlotSize, float TextSlotFontSize);
};
