#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameFramework/Actor.h"
#include "../System/DIY_TickableWorldSubsystem.h"

#include "DIY_DebugImGuiSubsystem.generated.h"

class FDIY_ImGuiMainPlayerProxy;
class FDIY_ImGuiProxy;

DECLARE_DELEGATE_TwoParams(FDIY_ImGuiUpdateDelegate, float DeltaTime, UWorld *World);

UCLASS()
class UDIY_DebugImGuiSubsystem : public UDIY_TickableWorldSubsystem
{
    GENERATED_BODY()

public:
    UDIY_DebugImGuiSubsystem();

private:
    bool bInitializedImGui = false;
#if UE_BUILD_DEVELOPMENT || UE_BUILD_DEBUG
    FDIY_ImGuiProxy *ImGuiProxy = nullptr;

    TPimplPtr<FDIY_ImGuiMainPlayerProxy> MainPlayerProxy;

#endif

public:
    virtual void Tick(float DeltaTime) override;

    virtual TStatId GetStatId() const override;
    virtual void Initialize(FSubsystemCollectionBase &Collection) override;
    virtual void Deinitialize() override;

    UInputComponent *AcquireInputComponent();

protected:
    void BindInput();

    UPROPERTY()
    UInputComponent *InputComponent = nullptr;

public:
    bool bEnableImGui = true;

    bool bKeyMouseCapture = false;
    bool bGamepadCapture = false;

    void UpdateInput();

public:
public:
    UPROPERTY()
    FGameplayTagContainer DebugOverrideGameplayTags;

public:
    UFUNCTION(BlueprintCallable, Category = "DIY_|Debug|ImGui")
    void SetEnableImGui(bool bInEnable);

    UFUNCTION(BlueprintCallable, Category = "DIY_|Debug|ImGui")
    void ToggleEnableImGui();

    UFUNCTION(BlueprintCallable, Category = "DIY_|Debug|ImGui")
    void SetEnableMainMenuBar(bool bInEnable);

    UFUNCTION(BlueprintCallable, Category = "DIY_|Debug|ImGui")
    void ToggleEnableMainMenuBar();

    UFUNCTION(BlueprintCallable, Category = "DIY_|Debug|ImGui")
    void SetEnableShowWindows(bool bInEnable);

    UFUNCTION(BlueprintCallable, Category = "DIY_|Debug|ImGui")
    void ToggleEnableShowWindows();

    UFUNCTION(BlueprintCallable, Category = "DIY_|Debug|ImGui")
    void SetCaptureKeyMouse(bool bInCapture);

    UFUNCTION(BlueprintCallable, Category = "DIY_|Debug|ImGui")
    void ToggleCaptureKeyMouse();

    UFUNCTION(BlueprintCallable, Category = "DIY_|Debug|ImGui")
    void SetCaptureGamepad(bool bInCapture);

    UFUNCTION(BlueprintCallable, Category = "DIY_|Debug|ImGui")
    void ToggleCaptureGamepad();

public:
    const FString &GetImGuiStateIni() const;
    void SaveImGuiState();

private:
    mutable FString ImGuiStateIniFilename;
};