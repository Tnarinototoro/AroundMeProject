#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class FAroundMeEditorModule : public IModuleInterface
{
public:
    virtual void StartupModule() override;
    virtual void ShutdownModule() override;

    void AddMenuEntry(FMenuBarBuilder &MenuBarBuilder);
    void FillDebugMenu(FMenuBuilder &MenuBuilder);
    void ToggleDbg_Enable_ItemInfo_Widget();
    UFUNCTION()
    bool GetDbg_Enable_ItemInfo_Widget() const;

private:
};
