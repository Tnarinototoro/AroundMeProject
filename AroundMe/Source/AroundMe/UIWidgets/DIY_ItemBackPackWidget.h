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
    void InitializeBackPack(int32 Rows, int32 Cols);

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

    void CreateGrid();
};
