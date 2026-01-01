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
    void InitializeItemCraftingPlatformWidget(const TArray<FPrimaryAssetId> &InAllItemIDs, int32 RowsDisplayed_Limit, int32 Cols, const FVector2D &inImageIconSlotSize, float inTextSlotFontSize);

    // 新增：通过坐标反查 AssetID
    FPrimaryAssetId GetAssetIDAt(int32 Row, int32 Col) const;
    int32 GetTotalRows() const { return RowNum; }
    int32 GetDisplayedRowsLimit_Num() const { return RowNum_Displayed_Limit; }
    void RequestScrollOffset(float inOffset);

    bool RequestChangeSlotBorderColor(int32 row, int32 col, const FLinearColor &inColor);
    bool RequestChangeSlotCountText(int32 row, int32 col, const FText &inText);
    bool RequestChangeSlotImage(int32 row, int32 col, UTexture2D *Texture);
    void RequestVisibility_ItemCraftingPlatformUI(ESlateVisibility invisibility);
    void RequestVisibility_ItemCraftingPlatformUI_Slot_At(int32 row, int32 col, ESlateVisibility invisibility);
    void RequestVisibility_ItemCraftingPlatformUI_CountText_At_Slot(int32 row, int32 col, ESlateVisibility invisibility);

    void RequestUpdateConsoleWidgetReceiptText(const FString &inString);

    void RequestUpdateShowConsoleWidget(bool inBool);
    void RequestChangeConsoleWidgetImage(UTexture2D *Texture);
    void RquestToggleCraftButtonEnable(bool inBool);

protected:
    virtual void NativeConstruct() override;
    virtual void NativeOnInitialized() override;
    class UBorder *GetSlotBorder(int32 row, int32 col) const;
    class UImage *GetSlotImage(int32 row, int32 col) const;
    class UTextBlock *GetSlotCountText(int32 row, int32 col) const;
    class UDIY_CraftReceiptRowWidget *GetRowWidgetAt(int32 row) const;

private:
    UPROPERTY()
    class USizeBox *SizeBox;

    UPROPERTY()
    class UScrollBox *ScrollBox;

    int32 RowNum_Displayed_Limit;
    int32 RowNum;
    int32 ColNum;
    int32 ItemTotalNum{-1};
UPROPERTY()
    TArray<FPrimaryAssetId> CachedItemIDs;
    FVector2D IconImageSlotSize{0.0f, 0.0f};
    float TextSlotFontSize{10.0f};

    void CreateAllReceipts();
    void AddReceiptRow(int32 RowIndex, int32 actual_num);

    UPROPERTY()
    class UDIY_CraftingPlatformConsoleWidget *CraftConsoleWidget;
};
