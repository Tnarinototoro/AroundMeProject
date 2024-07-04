#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class FAroundMeEditorModule : public IModuleInterface
{
public:
    virtual void StartupModule() override;
    virtual void ShutdownModule() override;

    void AddMenuEntry(FMenuBarBuilder &MenuBarBuilder);
    void FillItemDebugMenu(FMenuBuilder &MenuBuilder);
    void FillMusicDebugMenu(FMenuBuilder &MenuBuilder);
    void ToggleDbg_Enable_ItemInfo_Widget();
    FText GetMusicHourSliderValueText() const;
    float GetMusicHourSliderValue() const;
    void OnMusicHourSliderValueChanged(float NewValue);
    UFUNCTION()
    bool GetDbg_Enable_ItemInfo_Widget() const;

private:
};
