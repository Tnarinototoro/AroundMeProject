#include "AroundMeEditorModule.h"
#include "LevelEditor.h"
#include "Framework/MultiBox/MultiBoxBuilder.h"
#include "Modules/ModuleManager.h"
#include "../AroundMe/Player/Items/DIY_Item.h"
#include "../AroundMe/Player/DIY_MainPlayer.h"
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
    // Add DIY_Debug
    MenuBarBuilder.AddPullDownMenu(
        FText::FromString("DIY_Debug"),
        FText::FromString("Open the DIY_Item_debug menu"),
        FNewMenuDelegate::CreateRaw(this, &FAroundMeEditorModule::FillDebugMenu_DIY),
        "DIY_Debug");
}

void FAroundMeEditorModule::FillDebugMenu_DIY(FMenuBuilder &MenuBuilder)
{

    MenuBuilder.AddSubMenu(
        FText::FromString("Items"),
        FText::FromString("Debug Items utility"),
        FNewMenuDelegate::CreateRaw(this, &FAroundMeEditorModule::Fill_SubMenu_Item));

    // Add DIY_MusicDebugMenu as a sub-menu under DIY_Item_DebugMenu
    MenuBuilder.AddSubMenu(
        FText::FromString("Sound"),
        FText::FromString("Debug Music utility"),
        FNewMenuDelegate::CreateRaw(this, &FAroundMeEditorModule::Fill_SubMenu_Music));
}

void FAroundMeEditorModule::Fill_SubMenu_Music(FMenuBuilder &MenuBuilder)
{
    MenuBuilder.AddWidget(
        SNew(SVerticalBox) +
            SVerticalBox::Slot().AutoHeight().Padding(FMargin(5))[SNew(STextBlock).Text(FText::FromString("Music Hour Slider"))] +
            SVerticalBox::Slot().AutoHeight().Padding(FMargin(5))[SNew(SSlider).OnValueChanged_Raw(this, &FAroundMeEditorModule::OnMusicHourSliderValueChanged).Value_Raw(this, &FAroundMeEditorModule::GetMusicHourSliderValue).MinValue(-1.0f).MaxValue(23.0f).StepSize(1.0f)] +
            SVerticalBox::Slot().AutoHeight().Padding(FMargin(5))[SNew(STextBlock).Text_Raw(this, &FAroundMeEditorModule::GetMusicHourSliderValueText)],
        FText::FromString("Music Hour Debug Slider"));
}

void FAroundMeEditorModule::Fill_SubMenu_Item(FMenuBuilder &MenuBuilder)
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

    MenuBuilder.AddMenuEntry(
        FText::FromString("Dbg_PlayerStateInfo"),
        FText::FromString("Enable Player Info Display or not"),
        FSlateIcon(),
        FUIAction(
            FExecuteAction::CreateRaw(this, &FAroundMeEditorModule::ToggleDbg_Enable_PlayerInfo_Widget),
            FCanExecuteAction(),
            FIsActionChecked::CreateRaw(this, &FAroundMeEditorModule::GetDbg_Enable_PlayerInfo_Widget)),
        NAME_None,
        EUserInterfaceActionType::ToggleButton);
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

bool FAroundMeEditorModule::GetDbg_Enable_PlayerInfo_Widget() const
{
#if WITH_EDITOR
    return ADIY_MainPlayer::Dbg_Enable_PlayerInfo_Widget;
    // Handle slider value change
#endif
}

void FAroundMeEditorModule::ToggleDbg_Enable_PlayerInfo_Widget()
{
#if WITH_EDITOR
    ADIY_MainPlayer::Dbg_Enable_PlayerInfo_Widget = !ADIY_MainPlayer::Dbg_Enable_PlayerInfo_Widget;
    // Handle slider value change
#endif
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
