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
    void InitializeItemCraftingPlatformWidget(int32 Rows_Max, int32 Cols, const FVector2D &inImageIconSlotSize, float inTextSlotFontSize);

protected:
    virtual void NativeConstruct() override;
    virtual void NativeOnInitialized() override;

private:
    UPROPERTY()
    class USizeBox *SizeBox;

    UPROPERTY()
    class UScrollBox *ScrollBox;

    int32 RowNum_Displayed;
    int32 ColNum;
    FVector2D IconImageSlotSize{0.0f, 0.0f};
    float TextSlotFontSize{10.0f};

    void CreateAllReceipts();
    void AddReceiptRow(int32 RowIndex);
};
