#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class FAroundMeEditorModule : public IModuleInterface
{
public:
    virtual void StartupModule() override;
    virtual void ShutdownModule() override;

    // menu setups
    void AddMenuEntry(FMenuBarBuilder &MenuBarBuilder);
    void FillDebugMenu_DIY(FMenuBuilder &MenuBuilder);
    void Fill_SubMenu_Music(FMenuBuilder &MenuBuilder);
    void Fill_SubMenu_Item(FMenuBuilder &MenuBuilder);

    // sliders
    FText GetMusicHourSliderValueText() const;
    float GetMusicHourSliderValue() const;
    void OnMusicHourSliderValueChanged(float NewValue);

    // click boxes
    void ToggleDbg_Enable_ItemInfo_Widget();
    bool GetDbg_Enable_ItemInfo_Widget() const;

    void ToggleDbg_Enable_PlayerInfo_Widget();
    bool GetDbg_Enable_PlayerInfo_Widget() const;

private:
};
