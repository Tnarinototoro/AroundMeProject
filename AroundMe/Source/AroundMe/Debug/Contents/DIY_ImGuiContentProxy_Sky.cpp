#if UE_BUILD_DEVELOPMENT || UE_BUILD_DEBUG
#include "DIY_ImGuiContentProxy_Sky.h"
#include "../DIY_ImGui.h"
#include "../../GameUtilities/Weather/DIY_WeatherManager.h"
#include "../../GameUtilities/Weather/DIY_UDSParamsStore.h"
#include "../DIY_GlobalDebugSettings.h"

FDIY_ImGuiContentProxy_Sky::FDIY_ImGuiContentProxy_Sky(FDIY_ImGuiProxy &InOwningProxy)
    : FDIY_ImGuiContentProxy_MenuWindow(InOwningProxy, DIY_ImGuiNames::MenuCategoryNameSystem, "Sky", "SkyDebugPanel")
{
}

void FDIY_ImGuiContentProxy_Sky::DrawWindow(float DeltaTime)
{
    ImGui::Text("BasicControl");
    ImGui::Checkbox("ForceControlSky", &FDIY_GlobalDebugSettings::sInstance.sky.bForceControlSky);
    ImGui::SliderFloat("Hour", &FDIY_GlobalDebugSettings::sInstance.sky.TimeOfDay, 0.f, 2400.f);
    ImGui::Checkbox("EnableAnimatedTime", &FDIY_GlobalDebugSettings::sInstance.sky.bEnableAnimatedTime);
    ImGui::SliderFloat("AnimatedTimeSpeed", &FDIY_GlobalDebugSettings::sInstance.sky.AnimatedTimeSpeed, 0.f, 100.f);
    ImGui::SliderFloat("OverallIntensity", &FDIY_GlobalDebugSettings::sInstance.sky.OverallIntensity, 0.f, 2.f);
    ImGui::SliderFloat("Contrast", &FDIY_GlobalDebugSettings::sInstance.sky.Contrast, -0.2f, 1.f);
    ImGui::SliderFloat("Saturation", &FDIY_GlobalDebugSettings::sInstance.sky.Saturation, 0.f, 1.5f);

    UDIY_WeatherManager *WeatherManager = UDIY_WeatherManager::Get(GetWorld());

    if (nullptr == WeatherManager)
    {
        return;
    }

    ADIY_UDSParamsStore *Param_store = Cast<ADIY_UDSParamsStore>(WeatherManager->GetWorldParamsStoreInstance());

    if (nullptr == Param_store)
    {
        return;
    }

#if UE_BUILD_DEVELOPMENT || UE_BUILD_DEBUG

    if (FDIY_GlobalDebugSettings::sInstance.sky.bForceControlSky)
    {
        Param_store->SetParam_EnableAnimatedTime(FDIY_GlobalDebugSettings::sInstance.sky.bEnableAnimatedTime);

        if (!FDIY_GlobalDebugSettings::sInstance.sky.bEnableAnimatedTime)
        {
            Param_store->SetParam_TimeOfDay(FDIY_GlobalDebugSettings::sInstance.sky.TimeOfDay);
        }
        else
        {
            Param_store->SetParam_AnimatedTimeSpeed(FDIY_GlobalDebugSettings::sInstance.sky.AnimatedTimeSpeed);
        }
        Param_store->SetParam_OverallIntensity(FDIY_GlobalDebugSettings::sInstance.sky.OverallIntensity);
        Param_store->SetParam_Contrast(FDIY_GlobalDebugSettings::sInstance.sky.Contrast);
        Param_store->SetParam_Saturation(FDIY_GlobalDebugSettings::sInstance.sky.Saturation);
    }

#endif
}

#endif
