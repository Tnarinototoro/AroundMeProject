#include "AroundMeEditorModule.h"
#include "LevelEditor.h"
#include "Framework/MultiBox/MultiBoxBuilder.h"
#include "Modules/ModuleManager.h"

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
        FText::FromString("Debug"),
        FText::FromString("Open the debug menu"),
        FNewMenuDelegate::CreateRaw(this, &FAroundMeEditorModule::FillDebugMenu),
        "Debug");
}

void FAroundMeEditorModule::FillDebugMenu(FMenuBuilder &MenuBuilder)
{
    MenuBuilder.AddMenuEntry(
        FText::FromString("Debug Option 1"),
        FText::FromString("Description for debug option 1"),
        FSlateIcon(),
        FUIAction(FExecuteAction::CreateRaw(this, &FAroundMeEditorModule::DebugOption1)));

    MenuBuilder.AddMenuEntry(
        FText::FromString("Debug Option 2"),
        FText::FromString("Description for debug option 2"),
        FSlateIcon(),
        FUIAction(FExecuteAction::CreateRaw(this, &FAroundMeEditorModule::DebugOption2)));
}

void FAroundMeEditorModule::DebugOption1()
{
    // Implementation for Debug Option 1
}

void FAroundMeEditorModule::DebugOption2()
{
    // Implementation for Debug Option 2
}

void FAroundMeEditorModule::ShutdownModule()
{
    // Cleanup if necessary
}

IMPLEMENT_MODULE(FAroundMeEditorModule, AroundMeEditor)
