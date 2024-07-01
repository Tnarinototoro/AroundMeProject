#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class FAroundMeEditorModule : public IModuleInterface
{
public:
    virtual void StartupModule() override;
    virtual void ShutdownModule() override;

private:
    void AddMenuEntry(FMenuBarBuilder& MenuBarBuilder);
    void FillDebugMenu(FMenuBuilder& MenuBuilder);

    void DebugOption1();
    void DebugOption2();
};
