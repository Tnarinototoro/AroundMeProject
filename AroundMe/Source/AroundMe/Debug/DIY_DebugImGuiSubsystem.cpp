#include "DIY_DebugImGuiSubsystem.h"
#include "Kismet/GameplayStatics.h"
#include "EnhancedInputComponent.h"
#include "DIY_ImGuiPlayerProxy.h"
#include "DIY_ImGuiProxy.h"

#include "DIY_ImGui.h"

// #include "Input/CommonUIActionRouterBase.h"
#include "Misc/ConfigContext.h"

#if 1
#include "ImGuiModule.h"
#endif

#if 0
#define RegisterDebugImGuiConsoleCommand(VarName, VarDesc, Func) \
    static FAutoConsoleCommand UE_JOIN(Cmd, Func)(               \
        VarName, VarDesc,                                        \
        FConsoleCommandWithWorldDelegate::CreateLambda([](UWorld *InWorld) { \
			if (!InWorld) return; \
			if (UDIY_DebugImGuiSubsystem* DebugImGuiSubsystem = InWorld->GetSubsystem<UDIY_DebugImGuiSubsystem>()) \
			{ \
				DebugImGuiSubsystem->Func(); \
			} }));

RegisterDebugImGuiConsoleCommand(TEXT("DIY.ImGui.ToggleImGui"), TEXT("Toggle ImGui."), ToggleEnableImGui);
RegisterDebugImGuiConsoleCommand(TEXT("DIY.ImGui.ToggleMainMenuBar"), TEXT("Toggle ImGui main menu bar."), ToggleEnableMainMenuBar);
RegisterDebugImGuiConsoleCommand(TEXT("DIY.ImGui.ToggleWindows"), TEXT("Toggle ImGui windows."), ToggleEnableShowWindows);
RegisterDebugImGuiConsoleCommand(TEXT("DIY.ImGui.ToggleKeyMouseCapture"), TEXT("Toggle ImGui key mouse capture."), ToggleCaptureKeyMouse);
RegisterDebugImGuiConsoleCommand(TEXT("DIY.ImGui.ToggleGamepadCapture"), TEXT("Toggle ImGui gamepad capture."), ToggleCaptureGamepad);

#endif

UDIY_DebugImGuiSubsystem::UDIY_DebugImGuiSubsystem()
    : Super()
{
}

void UDIY_DebugImGuiSubsystem::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

#if 1
    if (ImGuiProxy)
    {
        ImGuiProxy->Tick(DeltaTime);
    }
#endif
}

void UDIY_DebugImGuiSubsystem::Initialize(FSubsystemCollectionBase &Collection)
{
    Super::Initialize(Collection);

#if 1
    if (UGameInstance *GameInstance = GetWorldRef().GetGameInstance())
    {
        MainPlayerProxy = MakePimpl<FDIY_ImGuiMainPlayerProxy>(*this);
        ImGuiProxy = MainPlayerProxy.Get();
        bInitializedImGui = true;
    }
    bInitializedImGui = true;
    if (bInitializedImGui)
    {
        bEnableImGui = true;
        SetEnableImGui(bEnableImGui);
    }
#endif
}

void UDIY_DebugImGuiSubsystem::Deinitialize()
{
#if 1
    SaveImGuiState();
    MainPlayerProxy.Reset();
    ImGuiProxy = nullptr;
#endif

    Super::Deinitialize();
}

TStatId UDIY_DebugImGuiSubsystem::GetStatId() const
{
    RETURN_QUICK_DECLARE_CYCLE_STAT(UDIY_DebugImGuiSubsystem, STATGROUP_Tickables);
}

UInputComponent *UDIY_DebugImGuiSubsystem::AcquireInputComponent()
{
#if 1
    if (!InputComponent)
    {
        if (UEnhancedInputComponent *EnhancedInputComponent = NewObject<UEnhancedInputComponent>(this))
        {
            InputComponent = EnhancedInputComponent;
            InputComponent->RegisterComponentWithWorld(GetWorld());

            BindInput();
        }
    }
#endif
    return InputComponent;
}

void UDIY_DebugImGuiSubsystem::BindInput()
{
#if 0
    if (ensureAlways(InputComponent))
    {
        if (const UDIY_GameSettings *DIY_GameSettings = GetDefault<UDIY_GameSettings>())
        {
            FInputChord InputChord;
            InputChord.Key = DIY_GameSettings->ToggleShowImGuiMouseCursorKey.Key;
            InputChord.bCtrl = DIY_GameSettings->ToggleShowImGuiMouseCursorKey.Ctrl == ECheckBoxState::Checked;
            InputChord.bAlt = DIY_GameSettings->ToggleShowImGuiMouseCursorKey.Alt == ECheckBoxState::Checked;
            InputChord.bShift = DIY_GameSettings->ToggleShowImGuiMouseCursorKey.Shift == ECheckBoxState::Checked;
            InputChord.bCmd = DIY_GameSettings->ToggleShowImGuiMouseCursorKey.Cmd == ECheckBoxState::Checked;

            InputComponent->BindKey(InputChord, EInputEvent::IE_Pressed, this, &UDIY_DebugImGuiSubsystem::ToggleCaptureKeyMouse);
            UE_LOG(LogDIY_ImGui, Display, TEXT("Bind key for ToggleShowImGuiMouseCursor: %s%s%s%s%s"),
                   *InputChord.GetKeyText().ToString(),
                   InputChord.bCtrl ? TEXT("+Ctrl") : TEXT(""),
                   InputChord.bAlt ? TEXT("+Alt") : TEXT(""),
                   InputChord.bShift ? TEXT("+Shift") : TEXT(""),
                   InputChord.bCmd ? TEXT("+Cmd") : TEXT(""));
        }
    }
#endif
}

void UDIY_DebugImGuiSubsystem::UpdateInput()
{
#if 1
    if (!bInitializedImGui)
        return;

    FImGuiModuleProperties &Properties = FImGuiModule::Get().GetProperties();
    if (bEnableImGui)
    {
        if (bGamepadCapture)
        {
            Properties.SetInputEnabled(true);
            Properties.SetMouseInputShared(false);
            Properties.SetKeyboardInputShared(true);
            Properties.SetKeyboardNavigationEnabled(true);
            Properties.SetGamepadInputShared(true);
            Properties.SetGamepadNavigationEnabled(true);
#if !WITH_EDITOR
            ImGui::GetIO().MouseDrawCursor = true;
            ImGui::SetMouseCursor(ImGuiMouseCursor_Arrow);
#endif

            if (ImGuiProxy)
            {
                ImGuiProxy->bPushFocus = true;
            }
        }
        else if (bKeyMouseCapture)
        {
            Properties.SetInputEnabled(true);
            Properties.SetMouseInputShared(false);
            Properties.SetKeyboardInputShared(true);
            Properties.SetKeyboardNavigationEnabled(true);
            Properties.SetGamepadInputShared(true);
            Properties.SetGamepadNavigationEnabled(false);

#if !WITH_EDITOR
            ImGui::GetIO().MouseDrawCursor = true;
            ImGui::SetMouseCursor(ImGuiMouseCursor_Arrow);
#endif
        }
        else
        {
            Properties.SetInputEnabled(true);
            Properties.SetMouseInputShared(true);
            Properties.SetKeyboardInputShared(true);
            Properties.SetKeyboardNavigationEnabled(false);
            Properties.SetGamepadInputShared(true);
            Properties.SetGamepadNavigationEnabled(false);

#if !WITH_EDITOR
            ImGui::GetIO().MouseDrawCursor = false;
            ImGui::SetMouseCursor(ImGuiMouseCursor_None);
#endif
        }
    }
    else
    {
        Properties.SetInputEnabled(false);
        Properties.SetMouseInputShared(true);
        Properties.SetKeyboardInputShared(true);
        Properties.SetKeyboardNavigationEnabled(false);
        Properties.SetGamepadInputShared(true);
        Properties.SetGamepadNavigationEnabled(false);

#if !WITH_EDITOR
        ImGui::GetIO().MouseDrawCursor = false;
        ImGui::SetMouseCursor(ImGuiMouseCursor_None);
#endif
    }

#endif
}

void UDIY_DebugImGuiSubsystem::SetEnableImGui(bool bInEnable)
{
#if 1
    UE_LOG(LogDIY_ImGui, Log, TEXT("SetEnableImGui: %s"), bInEnable ? TEXT("true") : TEXT("false"));
    bEnableImGui = bInEnable;
    if (ImGuiProxy)
    {
        ImGuiProxy->bShowImGui = bInEnable;
    }
    UpdateInput();
#endif
}

void UDIY_DebugImGuiSubsystem::ToggleEnableImGui()
{
#if 1
    SetEnableImGui(!bEnableImGui);
#endif
}

void UDIY_DebugImGuiSubsystem::SetEnableMainMenuBar(bool bInEnable)
{
#if 1
    UE_LOG(LogDIY_ImGui, Log, TEXT("SetEnableMainMenuBar: %s"), bInEnable ? TEXT("true") : TEXT("false"));
    if (ImGuiProxy)
    {
        ImGuiProxy->bShowMainMenuBar = bInEnable;
    }
#endif
}

void UDIY_DebugImGuiSubsystem::ToggleEnableMainMenuBar()
{
#if 1
    if (ImGuiProxy)
    {
        ImGuiProxy->bShowMainMenuBar = !ImGuiProxy->bShowMainMenuBar;
    }
#endif
}

void UDIY_DebugImGuiSubsystem::SetEnableShowWindows(bool bInEnable)
{
#if 1
    UE_LOG(LogDIY_ImGui, Log, TEXT("SetEnableShowWindows: %s"), bInEnable ? TEXT("true") : TEXT("false"));
    if (ImGuiProxy)
    {
        ImGuiProxy->bShowWindows = bInEnable;
    }
#endif
}

void UDIY_DebugImGuiSubsystem::ToggleEnableShowWindows()
{
#if 1
    if (ImGuiProxy)
    {
        ImGuiProxy->bShowWindows = !ImGuiProxy->bShowWindows;
    }
#endif
}

void UDIY_DebugImGuiSubsystem::SetCaptureKeyMouse(bool bInCapture)
{
#if 1
    UE_LOG(LogDIY_ImGui, Log, TEXT("SetCaptureKeyMouse: %s"), bInCapture ? TEXT("true") : TEXT("false"));
    bKeyMouseCapture = bInCapture;
    UpdateInput();
#endif
}

void UDIY_DebugImGuiSubsystem::ToggleCaptureKeyMouse()
{
#if 1
    bKeyMouseCapture = !bKeyMouseCapture;
    UE_LOG(LogDIY_ImGui, Log, TEXT("ToggleCaptureKeyMouse: %s"), bKeyMouseCapture ? TEXT("true") : TEXT("false"));
    UpdateInput();
#endif
}

void UDIY_DebugImGuiSubsystem::SetCaptureGamepad(bool bInCapture)
{
#if 1
    UE_LOG(LogDIY_ImGui, Log, TEXT("SetCaptureGamepad: %s"), bInCapture ? TEXT("true") : TEXT("false"));
    bGamepadCapture = bInCapture;
    UpdateInput();
#endif
}

void UDIY_DebugImGuiSubsystem::ToggleCaptureGamepad()
{
#if 1
    bGamepadCapture = !bGamepadCapture;
    UE_LOG(LogDIY_ImGui, Log, TEXT("ToggleCaptureGamepad: %s"), bGamepadCapture ? TEXT("true") : TEXT("false"));
    UpdateInput();
#endif
}

const FString &UDIY_DebugImGuiSubsystem::GetImGuiStateIni() const
{
    if (ImGuiStateIniFilename.Len() == 0)
    {
        UGameInstance *GameInstance = GetWorldRef().GetGameInstance();
        if (!ensure(GameInstance))
            return ImGuiStateIniFilename;
        FWorldContext *WorldContext = GameInstance->GetWorldContext();

        FString IniFileName;
        IniFileName = TEXT("DIY_ImGuiStateMainPlayer");
        if (WorldContext && WorldContext->WorldType == EWorldType::PIE)
        {
            IniFileName.AppendInt(WorldContext->PIEInstance);
        }

        ImGuiStateIniFilename = FConfigCacheIni::NormalizeConfigIniPath(
            FString::Printf(TEXT("%s%s/DIY_ImGui/%s.ini"), *FPaths::GeneratedConfigDir(), ANSI_TO_TCHAR(FPlatformProperties::PlatformName()), *IniFileName));

#if WITH_EDITOR
        FConfigContext::ReadIntoGConfig().Load(*ImGuiStateIniFilename);
#else
        FConfigContext::ReadSingleIntoGConfig().Load(*ImGuiStateIniFilename);
#endif
    }

    return ImGuiStateIniFilename;
}

void UDIY_DebugImGuiSubsystem::SaveImGuiState()
{
#if 1
    if (ImGuiProxy)
    {
        ImGuiProxy->SaveProxyState();
        GConfig->Flush(false, GetImGuiStateIni());
    }
#endif
}
