#include "AroundMeEditorModule.h"
#include "LevelEditor.h"
#include "Framework/MultiBox/MultiBoxBuilder.h"
#include "Modules/ModuleManager.h"
#include "../AroundMe/Player/Items/DIY_Item.h"

// Static bool to hold the state of the checkbox

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
    MenuBarBuilder.AddPullDownMenu(
        FText::FromString("DIY_DebugMenu"),
        FText::FromString("Open the DIY_debug menu"),
        FNewMenuDelegate::CreateRaw(this, &FAroundMeEditorModule::FillDebugMenu),
        "DIY_Debug");
}

void FAroundMeEditorModule::FillDebugMenu(FMenuBuilder &MenuBuilder)
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
void FAroundMeEditorModule::ShutdownModule()
{
    // Cleanup if necessary
}
IMPLEMENT_GAME_MODULE(FAroundMeEditorModule, AroundMeEditor)