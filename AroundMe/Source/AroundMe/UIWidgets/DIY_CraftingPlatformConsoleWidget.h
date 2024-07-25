#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "DIY_CraftingPlatformConsoleWidget.generated.h"

UCLASS()
class AROUNDME_API UDIY_CraftingPlatformConsoleWidget : public UUserWidget
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintCallable, Category = "CraftingPlatformConsole")
    void InitializeCraftingPlatformConsole();
    void RequestToggleExecuteCraftingEnabled(bool inIsEnabled);

    void UpdateConsoleReceiptText(const FString &inString);
    

    void RequestChangeConsolWidgetImage(UTexture2D *Texture);

protected:
    virtual void NativeConstruct() override;
    virtual void NativeOnInitialized() override;

private:
    UPROPERTY()
   // class UCanvasPanel *BackGroundPanel{nullptr};

    class UImage *ReceiptImage{nullptr};

    class UTextBlock *ReceiptText{nullptr};

    class UButton *ExecuteCraftingButton{nullptr};
    class UVerticalBox* BackGroundVerticalBox{nullptr};

    void CreateConsoleWidget();
};
