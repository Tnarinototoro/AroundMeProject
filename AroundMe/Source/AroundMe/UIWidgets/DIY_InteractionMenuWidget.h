#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "DIY_InteractionMenuWidget.generated.h"

UCLASS()
class AROUNDME_API UDIY_InteractionMenuWidget : public UUserWidget
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintCallable, Category = "InteractionMenu")
    void InitializeMenu(const TArray<FString> &Commands);

    static float CommandWidth;
    static float CommandHeight;

protected:
    virtual void NativeConstruct() override;
    virtual void NativeOnInitialized() override;

private:
    UPROPERTY()
    class UVerticalBox *VerticalBox;

    void CreateMenu(const TArray<FString> &Commands);
};
