#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class FAroundMeEditorModule : public IModuleInterface
{
public:
    virtual void StartupModule() override;
    virtual void ShutdownModule() override;
    void OnActorsDeleted();
    // menu setups
    void AddMenuEntry(FMenuBarBuilder &MenuBarBuilder);
    void FillDebugMenu_DIY(FMenuBuilder &MenuBuilder);
    void Fill_SubMenu_Music(FMenuBuilder &MenuBuilder);
    void Fill_SubMenu_Item(FMenuBuilder &MenuBuilder);
    void OpenCameraManagerPanel();
    void OpenCameraManagerGraphPanel();
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
    bool bEnable_Iteminfo_Widget = false;
    bool bEnable_Playerinfo_Widget = false;
    float HourSliderValue = -1.f;
};
