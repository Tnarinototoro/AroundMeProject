#include "AroundMeEditorModule.h"
#include "LevelEditor.h"
#include "Framework/MultiBox/MultiBoxBuilder.h"
#include "Modules/ModuleManager.h"
#include "../AroundMe/Player/Items/DIY_Item.h"
#include "Widgets/Input/SSlider.h"
#include "../AroundMe/GameUtilities/MusicPlayer/DIY_MusicPlayer.h"

void FAroundMeEditorModule::StartupModule()
{
#if WITH_EDITOR
    // Add menu extender to the level editor
    FLevelEditorModule &LevelEditorModule = FModuleManager::LoadModuleChecked<FLevelEditorModule>("LevelEditor");
    TSharedPtr<FExtender> MenuExtender = MakeShareable(new FExtender());

    MenuExtender->AddMenuBarExtension(
        "Tools",
        EExtensionHook::After,
        nullptr,
        FMenuBarExtensionDelegate::CreateRaw(this, &FAroundMeEditorModule::AddMenuEntry));

    LevelEditorModule.GetMenuExtensibilityManager()->AddExtender(MenuExtender);
#endif
}

void FAroundMeEditorModule::AddMenuEntry(FMenuBarBuilder &MenuBarBuilder)
{
    // Add DIY_Item_DebugMenu
    MenuBarBuilder.AddPullDownMenu(
        FText::FromString("DIY_Item_DebugMenu"),
        FText::FromString("Open the DIY_Item_debug menu"),
        FNewMenuDelegate::CreateRaw(this, &FAroundMeEditorModule::FillItemDebugMenu),
        "DIY_Item_DebugMenu");
}

void FAroundMeEditorModule::FillItemDebugMenu(FMenuBuilder &MenuBuilder)
{
    MenuBuilder.AddMenuEntry(
        FText::FromString("Dbg_ItemStateInfo"),
        FText::FromString("Enable Item Info Display or not"),
        FSlateIcon(),
        FUIAction(
            FExecuteAction::CreateRaw(this, &FAroundMeEditorModule::ToggleDbg_Enable_ItemInfo_Widget),
            FCanExecuteAction(),
            FIsActionChecked::CreateRaw(this, &FAroundMeEditorModule::GetDbg_Enable_ItemInfo_Widget)),
        NAME_None,
        EUserInterfaceActionType::ToggleButton);

    // Add DIY_MusicDebugMenu as a sub-menu under DIY_Item_DebugMenu
    MenuBuilder.AddSubMenu(
        FText::FromString("DIY_MusicDebugMenu"),
        FText::FromString("Debug Music utility"),
        FNewMenuDelegate::CreateRaw(this, &FAroundMeEditorModule::FillMusicDebugMenu));
}

void FAroundMeEditorModule::FillMusicDebugMenu(FMenuBuilder &MenuBuilder)
{
    MenuBuilder.AddWidget(
        SNew(SVerticalBox) +
            SVerticalBox::Slot().AutoHeight().Padding(FMargin(5))[SNew(STextBlock).Text(FText::FromString("Music Hour Slider"))] +
            SVerticalBox::Slot().AutoHeight().Padding(FMargin(5))[SNew(SSlider).OnValueChanged_Raw(this, &FAroundMeEditorModule::OnMusicHourSliderValueChanged).Value_Raw(this, &FAroundMeEditorModule::GetMusicHourSliderValue).MinValue(0.0f).MaxValue(23.0f).StepSize(1.0f)] +
            SVerticalBox::Slot().AutoHeight().Padding(FMargin(5))[SNew(STextBlock).Text_Raw(this, &FAroundMeEditorModule::GetMusicHourSliderValueText)],
        FText::FromString("Music Hour Debug Slider"));
}

void FAroundMeEditorModule::ToggleDbg_Enable_ItemInfo_Widget()
{
#if WITH_EDITOR
    ADIY_ItemBase::Dbg_Enable_ItemInfo_Widget = !ADIY_ItemBase::Dbg_Enable_ItemInfo_Widget;
#endif
}

bool FAroundMeEditorModule::GetDbg_Enable_ItemInfo_Widget() const
{
    return ADIY_ItemBase::Dbg_Enable_ItemInfo_Widget;
}

void FAroundMeEditorModule::OnMusicHourSliderValueChanged(float NewValue)
{
#if WITH_EDITOR
    ADIY_MusicPlayer::Dbg_Music_Hour = NewValue;
    // Handle slider value change
#endif
}

float FAroundMeEditorModule::GetMusicHourSliderValue() const
{
    // Return current slider value
    return ADIY_MusicPlayer::Dbg_Music_Hour; // Example value
}

FText FAroundMeEditorModule::GetMusicHourSliderValueText() const
{
    float SliderValue = ADIY_MusicPlayer::Dbg_Music_Hour;
    return FText::FromString(FString::Printf(TEXT("Current Value: %.0f"), SliderValue));
}

void FAroundMeEditorModule::ShutdownModule()
{
    // Cleanup if necessary
}

IMPLEMENT_GAME_MODULE(FAroundMeEditorModule, AroundMeEditor)
