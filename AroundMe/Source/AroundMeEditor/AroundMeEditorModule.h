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

    /** 核心同步逻辑入口 */
    void SyncAIRoutineTags();

    /** * 辅助函数：将绝对路径转换为符合 DIY.AI.Routine 规范的 Tag 字符串
     * @param InPackagePath 资源的包路径，例如 /Game/Blueprint/.../Routine/Work/Fishing
     * @param InAssetName 资源名，例如 Fishing
     */
    FString ConvertPathToTag(const FString &InPackagePath, const FString &InAssetName);
    void ShowNotify(const FText &Msg, float Duration);
};
