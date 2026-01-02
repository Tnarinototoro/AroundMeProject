#include "AroundMeEditorModule.h"
#include "Editor.h"
#include "EngineUtils.h"
#include "LevelEditor.h"
#include "Framework/MultiBox/MultiBoxBuilder.h"
#include "Modules/ModuleManager.h"
#include "Widgets/Input/SSlider.h"
#include "Panels/DIY_CameraManagerPanel.h"
#include "Panels/DIY_CameraManageGraphPanel.h"
#include "AroundMe/Player/Camera/DIY_CameraBase.h"
#include "ISettingsModule.h"
#include "GameplayTagsManager.h"
#include "Panels/DIY_TagDebugPanel.h"
#include "SGameplayTagPicker.h"
#include "GameplayTagsEditorModule.h"
#include "AssetRegistry/AssetRegistryModule.h"
#include "GameplayTagsManager.h"
#include "GameplayTagsSettings.h"
#include "SourceControlHelpers.h"
#include "Framework/Notifications/NotificationManager.h"
#include "Widgets/Notifications/SNotificationList.h"
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
        FSlateIcon(),
        FUIAction(FExecuteAction::CreateRaw(this, &FAroundMeEditorModule::OpenCameraManagerPanel)));

    MenuBuilder.AddSeparator();

    MenuBuilder.BeginSection("AIHelper", FText::FromString("AI Routine Helper"));
    {
        MenuBuilder.AddMenuEntry(
            FText::FromString("Sync AI Routine Tags"),
            FText::FromString("Synchronize GameplayTags based on StateTree assets in Routine folder"),
            FSlateIcon(FAppStyle::GetAppStyleSetName(), "Icons.Refresh"),
            FUIAction(FExecuteAction::CreateRaw(this, &FAroundMeEditorModule::SyncAIRoutineTags)));
    }
    MenuBuilder.EndSection();

    MenuBuilder.BeginSection("GameplayTags", FText::FromString("Gameplay Tags"));
    {
        // 1. 直接打开独立的 Gameplay Tag Manager 面板 (对应你图片里的窗口)
        MenuBuilder.AddMenuEntry(
            FText::FromString("Gameplay Tag Manager"),
            FText::FromString("Open the standalone Gameplay Tag Manager window"),
            FSlateIcon(FAppStyle::GetAppStyleSetName(), "Icons.Settings"),
            FUIAction(FExecuteAction::CreateRaw(this, &FAroundMeEditorModule::OpenGameplayTagManagerWindow)));

        // 2. 打开 Project Settings 下的 GameplayTags 设置页
        MenuBuilder.AddMenuEntry(
            FText::FromString("Gameplay Tag Settings"),
            FText::FromString("Open Gameplay Tag Project Settings"),
            FSlateIcon(FAppStyle::GetAppStyleSetName(), "Icons.Settings"),
            FUIAction(FExecuteAction::CreateRaw(this, &FAroundMeEditorModule::OpenGameplayTagProjectSettings)));

        // 3. 预留：自定义 Debug Panel
        MenuBuilder.AddMenuEntry(
            FText::FromString("Gameplay Tag Debug Panel"),
            FText::FromString("Open custom Tag Debug Panel"),
            FSlateIcon(FAppStyle::GetAppStyleSetName(), "Icons.Settings"),
            FUIAction(FExecuteAction::CreateRaw(this, &FAroundMeEditorModule::OpenTagDebugPanel)));
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

void FAroundMeEditorModule::SyncAIRoutineTags()
{
    // 定义需要自动扫描的路径和 Tag 前缀
    const FString SearchPath = TEXT("/Game/Blueprint/Core/Player/AI/StateTrees/Routine");
    const FString TagPrefix = TEXT("DIY.AI.Routine");

    // 定位 DIY_Tags.ini
    FString AbsoluteConfigPath = FPaths::ProjectConfigDir() + TEXT("Tags/DIY_Tags.ini");

    // 1. 扫描文件夹获取当前存在的资源对应的 Tag 列表
    FAssetRegistryModule &AssetRegistryModule = FModuleManager::LoadModuleChecked<FAssetRegistryModule>("AssetRegistry");
    TArray<FAssetData> AssetDataList;
    AssetRegistryModule.Get().GetAssetsByPath(*SearchPath, AssetDataList, true);

    TArray<FString> NewGeneratedTags;
    for (const FAssetData &Asset : AssetDataList)
    {
        if (Asset.AssetClassPath.GetAssetName() == TEXT("StateTree"))
        {
            NewGeneratedTags.Add(ConvertPathToTag(Asset.PackagePath.ToString(), Asset.AssetName.ToString()));
        }
    }

    // 2. 读取现有配置
    TArray<FString> ConfigLines;
    GConfig->GetArray(TEXT("/Script/GameplayTags.GameplayTagsList"), TEXT("GameplayTagList"), ConfigLines, AbsoluteConfigPath);

    // 备份一份原始数据用于对比
    TArray<FString> OriginalLines = ConfigLines;

    TArray<FString> FinalLines;
    // 3. 处理现有行：只保留非自动生成的行
    for (const FString &Line : ConfigLines)
    {
        if (!Line.Contains(TEXT("Auto-Generated")))
        {
            FinalLines.Add(Line);
        }
    }

    // 4. 添加扫描到的标签
    for (const FString &NewTag : NewGeneratedTags)
    {
        FString NewLine = FString::Printf(TEXT("(Tag=\"%s\",DevComment=\"Auto-Generated\")"), *NewTag);
        // 只有真正不重复时才添加
        if (!FinalLines.Contains(NewLine))
        {
            FinalLines.Add(NewLine);
        }
    }

    // 【关键改进】：对比 FinalLines 和 OriginalLines 是否完全一致
    // 我们需要先排序或者确保顺序一致，否则即使内容一样顺序不同也会判定为变化
    FinalLines.Sort();
    OriginalLines.Sort();

    bool bActuallyChanged = false;
    if (FinalLines.Num() != OriginalLines.Num())
    {
        bActuallyChanged = true;
    }
    else
    {
        for (int32 i = 0; i < FinalLines.Num(); ++i)
        {
            if (FinalLines[i] != OriginalLines[i])
            {
                bActuallyChanged = true;
                break;
            }
        }
    }

    // 5. 只有内容真正不一致时才写入磁盘
    if (bActuallyChanged)
    {
        GConfig->SetArray(TEXT("/Script/GameplayTags.GameplayTagsList"), TEXT("GameplayTagList"), FinalLines, AbsoluteConfigPath);
        GConfig->Flush(false, AbsoluteConfigPath);

        GConfig->UnloadFile(AbsoluteConfigPath);
        GConfig->LoadFile(AbsoluteConfigPath);

        UGameplayTagsManager::Get().EditorRefreshGameplayTagTree();

        FNotificationInfo Info(FText::Format(FText::FromString("Sync Success! Added/Updated {0} Tags."), FText::AsNumber(NewGeneratedTags.Num())));
        Info.ExpireDuration = 3.0f;
        FSlateNotificationManager::Get().AddNotification(Info);
    }
    else
    {
        // 现在点击第二次，应该会正确进入这里了
        FNotificationInfo Info(FText::FromString("Sync Complete: Everything is already up to date."));
        Info.ExpireDuration = 2.0f;
        FSlateNotificationManager::Get().AddNotification(Info);
    }
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

void FAroundMeEditorModule::ShutdownModule()
{
#if WITH_EDITOR
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
