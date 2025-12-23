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
void FAroundMeEditorModule::StartupModule()
{
#if WITH_EDITOR
    // Add menu extender to the level editor
    FLevelEditorModule& LevelEditorModule = FModuleManager::LoadModuleChecked<FLevelEditorModule>("LevelEditor");
    TSharedPtr<FExtender> MenuExtender = MakeShareable(new FExtender());

    MenuExtender->AddMenuBarExtension(
        "Tools",
        EExtensionHook::After,
        nullptr,
        FMenuBarExtensionDelegate::CreateRaw(this, &FAroundMeEditorModule::AddMenuEntry));

    LevelEditorModule.GetMenuExtensibilityManager()->AddExtender(MenuExtender);

    FEditorDelegates::OnDeleteActorsEnd.AddRaw(
        this,
        &FAroundMeEditorModule::OnActorsDeleted
    );
#endif
}

void FAroundMeEditorModule::AddMenuEntry(FMenuBarBuilder& MenuBarBuilder)
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

    MenuBuilder.AddMenuEntry(
        FText::FromString("Camera Manager"),
        FText::FromString("Open Camera Manager Panel"),
        FSlateIcon(),
        FUIAction(
            FExecuteAction::CreateRaw(
                this,
                &FAroundMeEditorModule::OpenCameraManagerPanel)));

    MenuBuilder.AddMenuEntry(
        FText::FromString("DIY Camera Manager Graph"),
        FText::FromString("Open Camera Graph Debug Window"),
        FSlateIcon(),
        FUIAction(
            FExecuteAction::CreateRaw(
                this,
                &FAroundMeEditorModule::OpenCameraManagerGraphPanel)));
}

void FAroundMeEditorModule::Fill_SubMenu_Music(FMenuBuilder& MenuBuilder)
{
    MenuBuilder.AddWidget(
        SNew(SVerticalBox) +
        SVerticalBox::Slot().AutoHeight().Padding(FMargin(5))[SNew(STextBlock).Text(FText::FromString("Music Hour Slider"))] +
        SVerticalBox::Slot().AutoHeight().Padding(FMargin(5))[SNew(SSlider).OnValueChanged_Raw(this, &FAroundMeEditorModule::OnMusicHourSliderValueChanged).Value_Raw(this, &FAroundMeEditorModule::GetMusicHourSliderValue).MinValue(-1).MaxValue(23).StepSize(1)] +
        SVerticalBox::Slot().AutoHeight().Padding(FMargin(5))[SNew(STextBlock).Text_Raw(this, &FAroundMeEditorModule::GetMusicHourSliderValueText)],
        FText::FromString("Music Hour Debug Slider"));
}

void FAroundMeEditorModule::Fill_SubMenu_Item(FMenuBuilder& MenuBuilder)
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

void FAroundMeEditorModule::OpenCameraManagerPanel()
{
#if WITH_EDITOR
    TSharedRef<SWindow> Window = SNew(SWindow)
        .Title(FText::FromString("DIY Camera Manager"))
        .ClientSize(FVector2D(700, 500))
        .SupportsMinimize(false)
        .SupportsMaximize(false);

    Window->SetContent(
        SNew(SDIY_CameraManagerPanel)
    );

    FSlateApplication::Get().AddWindow(Window);
#endif
}
void FAroundMeEditorModule::OpenCameraManagerGraphPanel()
{
#if WITH_EDITOR
    TSharedRef<SWindow> Window = SNew(SWindow)
        .Title(FText::FromString("DIY Camera Manager Graph"))
        .ClientSize(FVector2D(900, 600))
        .SupportsMinimize(false)
        .SupportsMaximize(false);

    Window->SetContent(
        SNew(SDIY_CameraManageGraphPanel)
    );

    FSlateApplication::Get().AddWindow(Window);
#endif
}


void FAroundMeEditorModule::ToggleDbg_Enable_ItemInfo_Widget()
{
#if WITH_EDITOR
    bEnable_Iteminfo_Widget = !bEnable_Playerinfo_Widget;
#endif
}

bool FAroundMeEditorModule::GetDbg_Enable_ItemInfo_Widget() const
{
    return bEnable_Iteminfo_Widget;
}

bool FAroundMeEditorModule::GetDbg_Enable_PlayerInfo_Widget() const
{

#if WITH_EDITOR
    return bEnable_Playerinfo_Widget;
#endif
}

void FAroundMeEditorModule::ToggleDbg_Enable_PlayerInfo_Widget()
{
#if WITH_EDITOR
    bEnable_Playerinfo_Widget = !bEnable_Playerinfo_Widget;
#endif
}

void FAroundMeEditorModule::OnMusicHourSliderValueChanged(float NewValue)
{
#if WITH_EDITOR
    HourSliderValue = NewValue;

#endif
}

float FAroundMeEditorModule::GetMusicHourSliderValue() const
{

    return HourSliderValue;
}

FText FAroundMeEditorModule::GetMusicHourSliderValueText() const
{
    return FText::FromString(FString::Printf(TEXT("Current Value: %d"), HourSliderValue));
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

    UWorld* World = GEditor->GetEditorWorldContext().World();
    if (!World)
    {
        return;
    }


    // 1️⃣ 收集当前仍然存在的 CameraName 集合
    TSet<FName> AliveCameraNames;

    for (TActorIterator<ADIY_CameraBase> It(World); It; ++It)
    {
        const ADIY_CameraBase* Cam = *It;
        if (!Cam)
        {
            continue;
        }

        AliveCameraNames.Add(Cam->CameraEntry.CameraName);
    }

    // 2️⃣ 遍历所有还活着的 Camera，修复 Prev / Next
    for (TActorIterator<ADIY_CameraBase> It(World); It; ++It)
    {
        ADIY_CameraBase* Cam = *It;
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
