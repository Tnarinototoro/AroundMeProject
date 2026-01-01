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
    void OpenCameraManagerPanel();
    void OpenGameplayTagProjectSettings();
    void OpenGameplayTagManagerWindow(); 
    void OpenTagDebugPanel();
};
