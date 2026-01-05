#include "AroundMeEditorModule.h"
#include "Editor.h"
#include "EngineUtils.h"
#include "LevelEditor.h"
#include "Framework/MultiBox/MultiBoxBuilder.h"
#include "Modules/ModuleManager.h"
#include "Widgets/Input/SSlider.h"
#include "Panels/DIY_CameraManagerPanel.h"
#include "Panels/DIY_CameraManageGraphPanel.h"
#include "Panels/DIY_IconBrowserPanel.h"
#include "Panels/DIY_PetMemoryDebugPanel.h"
#include "AroundMe/Player/Camera/DIY_CameraBase.h"
#include "ISettingsModule.h"
#include "GameplayTagsManager.h"
#include "Panels/DIY_TagDebugPanel.h"
#include "SGameplayTagPicker.h"
#include "GameplayTagsEditorModule.h"
#include "AssetRegistry/AssetRegistryModule.h"
#include "GameplayTagsSettings.h"
#include "SourceControlHelpers.h"
#include "Framework/Notifications/NotificationManager.h"
#include "Widgets/Notifications/SNotificationList.h"
#include "AssetToolsModule.h"
#include "ObjectTools.h"
#include "FileHelpers.h"
#include "AroundMe/AI/Assets/DIY_PetRoutineAsset.h"
#include "UObject/SavePackage.h" // 必须包含这个，否则 FSavePackageArgs 是未定义的
#include "UObject/Package.h"

void FAroundMeEditorModule::StartupModule()
{
#if WITH_EDITOR
    // Add menu extender to the level editor
    FLevelEditorModule &LevelEditorModule = FModuleManager::LoadModuleChecked<FLevelEditorModule>("LevelEditor");
    TSharedPtr<FExtender> MenuExtender = MakeShareable(new FExtender());

    MenuExtender->AddMenuBarExtension(
        "Help",
        EExtensionHook::After,
        nullptr,
        FMenuBarExtensionDelegate::CreateRaw(this, &FAroundMeEditorModule::AddMenuEntry));

    LevelEditorModule.GetMenuExtensibilityManager()->AddExtender(MenuExtender);

    FEditorDelegates::OnDeleteActorsEnd.AddRaw(
        this,
        &FAroundMeEditorModule::OnActorsDeleted);

    FGlobalTabmanager::Get()->RegisterNomadTabSpawner(
                                PetMemoryDebugTabName,
                                FOnSpawnTab::CreateRaw(this, &FAroundMeEditorModule::OnSpawnPetMemoryDebugTab))
        .SetDisplayName(FText::FromString("Pet Memory Info"))
        .SetMenuType(ETabSpawnerMenuType::Enabled);

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

    // --- 原有的 Camera Manager ---
    MenuBuilder.AddMenuEntry(
        FText::FromString("Camera Manager"),
        FText::FromString("Open Camera Manager Panel"),
        FSlateIcon(FAppStyle::GetAppStyleSetName(), "Icons.pyramid"),
        FUIAction(FExecuteAction::CreateRaw(this, &FAroundMeEditorModule::OpenCameraManagerPanel)));

    MenuBuilder.AddSeparator();

    MenuBuilder.BeginSection("AIHelper", FText::FromString("AI Routine Helper"));
    {

        // --- 新增：AI Memory Debugger 入口 ---
        MenuBuilder.AddMenuEntry(
            FText::FromString("Pet AI Memory Debugger"),
            FText::FromString("Monitor real-time AI memory and task stacks"),
            FSlateIcon(FAppStyle::GetAppStyleSetName(), "Icons.pyramid"), // 使用调试图标
            FUIAction(FExecuteAction::CreateRaw(this, &FAroundMeEditorModule::OpenPetMemoryDebugPanel)));

        MenuBuilder.AddMenuEntry(
            FText::FromString("Sync Tags And Resrt Editor"),
            FText::FromString("Synchronize GameplayTags based on StateTree assets in Routine folder"),
            FSlateIcon(FAppStyle::GetAppStyleSetName(), "Icons.pyramid"),
            FUIAction(FExecuteAction::CreateRaw(this, &FAroundMeEditorModule::SyncAIRoutineTags)));
        MenuBuilder.AddMenuEntry(
            FText::FromString("Auto Generate Routine Assets, Must After SyncTags Restart completed"),
            FText::FromString("Help Auto Generate Default Routine Assets"),
            FSlateIcon(FAppStyle::GetAppStyleSetName(), "Icons.pyramid"),
            FUIAction(FExecuteAction::CreateRaw(this, &FAroundMeEditorModule::SyncRoutineAssetsFromLeafTags)));
    }
    MenuBuilder.EndSection();

    MenuBuilder.BeginSection("GameplayTags", FText::FromString("Gameplay Tags"));
    {
        // 1. 直接打开独立的 Gameplay Tag Manager 面板 (对应你图片里的窗口)
        MenuBuilder.AddMenuEntry(
            FText::FromString("Gameplay Tag Manager"),
            FText::FromString("Open the standalone Gameplay Tag Manager window"),
            FSlateIcon(FAppStyle::GetAppStyleSetName(), "Icons.pyramid"),
            FUIAction(FExecuteAction::CreateRaw(this, &FAroundMeEditorModule::OpenGameplayTagManagerWindow)));

        // 2. 打开 Project Settings 下的 GameplayTags 设置页
        MenuBuilder.AddMenuEntry(
            FText::FromString("Gameplay Tag Settings"),
            FText::FromString("Open Gameplay Tag Project Settings"),
            FSlateIcon(FAppStyle::GetAppStyleSetName(), "Icons.pyramid"),
            FUIAction(FExecuteAction::CreateRaw(this, &FAroundMeEditorModule::OpenGameplayTagProjectSettings)));

        // 3. 预留：自定义 Debug Panel
        MenuBuilder.AddMenuEntry(
            FText::FromString("Gameplay Tag Debug Panel"),
            FText::FromString("Open custom Tag Debug Panel"),
            FSlateIcon(FAppStyle::GetAppStyleSetName(), "Icons.pyramid"),
            FUIAction(FExecuteAction::CreateRaw(this, &FAroundMeEditorModule::OpenTagDebugPanel)));
    }
    MenuBuilder.EndSection();

    MenuBuilder.BeginSection("Misc", FText::FromString("miscellaneous tools"));
    {
        MenuBuilder.AddMenuEntry(
            FText::FromString("IconBrowser"),
            FText::FromString("Check Icons Names"),
            FSlateIcon(FAppStyle::GetAppStyleSetName(), "Icons.pyramid"), // 使用调试图标
            FUIAction(FExecuteAction::CreateRaw(this, &FAroundMeEditorModule::OpenIconsBrowser)));
    }
    MenuBuilder.EndSection();
}
void FAroundMeEditorModule::OpenGameplayTagManagerWindow()
{
    // 1. 尝试从配置中读取位置 [cite: 2025-12-23]
    FVector2D SavedPos(100, 100);
    if (!GConfig->GetVector2D(TEXT("AroundMeEditor"), TEXT("TagManagerWindowPos"), SavedPos, GEditorPerProjectIni))
    {
        // 如果没读取到，默认居中或设个固定值
        SavedPos = FVector2D(100, 100);
    }

    // 2. 直接创建一个 Slate 窗口
    TSharedRef<SWindow> TagManagerWindow = SNew(SWindow)
                                               .Title(FText::FromString("Gameplay Tag Manager (Independent)"))
                                               .ScreenPosition(SavedPos)
                                               .ClientSize(FVector2D(600, 800))
                                               .SupportsMaximize(true)
                                               .SupportsMinimize(true);

    // 3. 将官方的 Picker 填进去
    TagManagerWindow->SetContent(
        SNew(SBorder)
            .Padding(8)
            .BorderImage(FAppStyle::GetBrush("ToolPanel.GroupBorder"))
                [SNew(SGameplayTagPicker)
                     .GameplayTagPickerMode(EGameplayTagPickerMode::ManagementMode) // 核心：管理模式
                     .MaxHeight(2000.f)]);

    // 4. 监听窗口关闭以保存位置 [cite: 2025-12-23]
    TagManagerWindow->GetOnWindowClosedEvent().AddLambda([](const TSharedRef<SWindow> &ClosedWindow)
                                                         {
        FVector2D FinalPos = ClosedWindow->GetPositionInScreen();
        GConfig->SetVector2D(TEXT("AroundMeEditor"), TEXT("TagManagerWindowPos"), FinalPos, GEditorPerProjectIni);
        GConfig->Flush(false, GEditorPerProjectIni); });

    // 5. 唤起窗口
    FSlateApplication::Get().AddWindow(TagManagerWindow);
}

// 2. 打开 Project Settings 设置页 (备用)
void FAroundMeEditorModule::OpenGameplayTagProjectSettings()
{
    ISettingsModule *SettingsModule = FModuleManager::GetModulePtr<ISettingsModule>("Settings");
    if (SettingsModule)
    {
        SettingsModule->ShowViewer("Project", "Project", "GameplayTags");
    }
}

// 3. 预留入口
void FAroundMeEditorModule::OpenTagDebugPanel()
{
    TSharedRef<SWindow> Window = SNew(SWindow)
                                     .Title(FText::FromString("Gameplay Tag Debugger"))
                                     .ClientSize(FVector2D(400, 600));

    Window->SetContent(SNew(SDIY_TagDebugPanel));
    FSlateApplication::Get().AddWindow(Window);
}

void FAroundMeEditorModule::ShowNotify(const FText &Msg, float Duration)
{
    FNotificationInfo Info(Msg);
    Info.ExpireDuration = Duration;
    Info.bUseLargeFont = false;
    Info.bFireAndForget = true;
    FSlateNotificationManager::Get().AddNotification(Info);
}

FString FAroundMeEditorModule::ConvertPathToTag(const FString &InPackagePath, const FString &InAssetName)
{
    const FString RoutineRootPath = TEXT("/Game/Blueprint/Core/Player/AI/StateTrees/Routine");
    const FString TagPrefix = TEXT("DIY.AI.Routine");

    FString RelativePath = InPackagePath;

    // 1. 移除根路径，保留子路径部分
    if (RelativePath.StartsWith(RoutineRootPath))
    {
        RelativePath.RemoveFromStart(RoutineRootPath);
    }

    // 2. 将路径分隔符 / 转换为 Tag 的分隔符 .
    RelativePath.ReplaceInline(TEXT("/"), TEXT("."));

    // 3. 拼接：前缀 + (子路径) + 资源名
    // 注意处理 RelativePath 为空（直接在 Routine 文件夹下）的情况
    FString FinalTag;
    if (RelativePath.IsEmpty() || RelativePath == TEXT("."))
    {
        FinalTag = FString::Printf(TEXT("%s.%s"), *TagPrefix, *InAssetName);
    }
    else
    {
        // 如果以 . 开头则移除，确保格式正确
        if (RelativePath.StartsWith(TEXT(".")))
            RelativePath.RemoveAt(0);
        FinalTag = FString::Printf(TEXT("%s.%s.%s"), *TagPrefix, *RelativePath, *InAssetName);
    }

    return FinalTag;
}

void FAroundMeEditorModule::OpenCameraManagerPanel()
{
#if WITH_EDITOR
    TSharedRef<SWindow> Window = SNew(SWindow)
                                     .Title(FText::FromString("DIY Camera Manager"))
                                     .ClientSize(FVector2D(700, 500))
                                     .SupportsMinimize(false)
                                     .SupportsMaximize(false);

    Window->SetContent(
        SNew(SDIY_CameraManagerPanel));

    FSlateApplication::Get().AddWindow(Window);
#endif
}

void FAroundMeEditorModule::OpenIconsBrowser()
{
#if WITH_EDITOR
    TSharedRef<SWindow> Window = SNew(SWindow)
                                     .Title(FText::FromString("Icon Browser"))
                                     .ClientSize(FVector2D(700, 500))
                                     .SupportsMinimize(false)
                                     .SupportsMaximize(false);

    Window->SetContent(
        SNew(SDIY_IconBrowserPanel));

    FSlateApplication::Get().AddWindow(Window);
#endif
}

void FAroundMeEditorModule::ShutdownModule()
{
#if WITH_EDITOR
    FGlobalTabmanager::Get()->UnregisterNomadTabSpawner(PetMemoryDebugTabName);
    FEditorDelegates::OnDeleteActorsEnd.RemoveAll(this);
#endif

    // Cleanup if necessary
}

void FAroundMeEditorModule::OnActorsDeleted()
{
#if WITH_EDITOR
    if (!GEditor)
    {
        return;
    }

    UWorld *World = GEditor->GetEditorWorldContext().World();
    if (!World)
    {
        return;
    }

    // 1️⃣ 收集当前仍然存在的 CameraName 集合
    TSet<FName> AliveCameraNames;

    for (TActorIterator<ADIY_CameraBase> It(World); It; ++It)
    {
        const ADIY_CameraBase *Cam = *It;
        if (!Cam)
        {
            continue;
        }

        AliveCameraNames.Add(Cam->CameraEntry.CameraName);
    }

    // 2️⃣ 遍历所有还活着的 Camera，修复 Prev / Next
    for (TActorIterator<ADIY_CameraBase> It(World); It; ++It)
    {
        ADIY_CameraBase *Cam = *It;
        if (!Cam)
        {
            continue;
        }

        bool bModified = false;

        // Prev
        if (!Cam->CameraEntry.PrevCameraName.IsNone() &&
            !AliveCameraNames.Contains(Cam->CameraEntry.PrevCameraName))
        {
            Cam->Modify();
            Cam->CameraEntry.PrevCameraName = NAME_None;
            bModified = true;
        }

        // Next
        if (!Cam->CameraEntry.NextCameraName.IsNone() &&
            !AliveCameraNames.Contains(Cam->CameraEntry.NextCameraName))
        {
            Cam->Modify();
            Cam->CameraEntry.NextCameraName = NAME_None;
            bModified = true;
        }

        if (bModified)
        {
            Cam->PostEditChange();
        }
    }
#endif
}
IMPLEMENT_GAME_MODULE(FAroundMeEditorModule, AroundMeEditor)
