#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

static const FName PetMemoryDebugTabName("PetMemoryDebug");
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
    void OpenIconsBrowser();
    void OpenGameplayTagProjectSettings();
    void OpenGameplayTagManagerWindow();
    void OpenTagDebugPanel();

private:

    /** 核心同步逻辑入口 */
    void SyncAIRoutineTags();
    void SyncRoutineAssetsFromLeafTags();

    /** * 辅助函数：将绝对路径转换为符合 DIY.AI.Routine 规范的 Tag 字符串
     * @param InPackagePath 资源的包路径，例如 /Game/Blueprint/.../Routine/Work/Fishing
     * @param InAssetName 资源名，例如 Fishing
     */
    FString ConvertPathToTag(const FString &InPackagePath, const FString &InAssetName);
    void ShowNotify(const FText &Msg, float Duration);

    void OpenPetMemoryDebugPanel();

    // 2. 添加 Tab 生成回调
    TSharedRef<SDockTab> OnSpawnPetMemoryDebugTab(const FSpawnTabArgs &SpawnTabArgs);
};
