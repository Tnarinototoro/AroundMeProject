#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "DIY_ItemSubMenuWidget.generated.h"

UCLASS()
class AROUNDME_API UDIY_ItemSubMenuWidget : public UUserWidget
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintCallable, Category = "ItemSubMenu")
    void InitializeSubMenu(int32 NumCommands);
    void RequestToggleCommandEnabledAt_Impl(uint32 inIndex,bool inIsEnabled);

    int32 GetCommandsNum() const { return CommandsNum; }
    FString GetCommandStringAt(uint32 inIndex);
protected:
    virtual void NativeConstruct() override;
    virtual void NativeOnInitialized() override;

private:
    UPROPERTY()
    class UVerticalBox *CommandList;

    void CreateCommandButtons(int32 NumCommands);

    int32 CommandsNum{ 0 };
};
