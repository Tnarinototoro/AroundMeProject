#if UE_BUILD_DEVELOPMENT || UE_BUILD_DEBUG
#include "DIY_ImGuiContentProxy_Sky.h"
#include "../DIY_ImGui.h"
#include "../../GameUtilities/Weather/DIY_WeatherManager.h"
#include "../../GameUtilities/Weather/DIY_UDSParamsStore.h"

FDIY_ImGuiContentProxy_Sky::FDIY_ImGuiContentProxy_Sky(FDIY_ImGuiProxy &InOwningProxy)
    : FDIY_ImGuiContentProxy_MenuWindow(InOwningProxy, DIY_ImGuiNames::MenuCategoryNameSystem, "Sky", "SkyDebugPanel")
{
}

void FDIY_ImGuiContentProxy_Sky::DrawWindow(float DeltaTime)
{
    ImGui::Text("BasicControl");
    ImGui::Checkbox("ForceControlSky", &bForceControlSky);
    ImGui::SliderFloat("Hour", &TimeOfDay, 0.f, 2400.f);
    ImGui::Checkbox("EnableAnimatedTime", &bEnableAnimatedTime);
    ImGui::SliderFloat("AnimatedTimeSpeed", &AnimatedTimeSpeed, 0.f, 100.f);
    ImGui::SliderFloat("OverallIntensity", &OverallIntensity, 0.f, 2.f);
    ImGui::SliderFloat("Contrast", &Contrast, -0.2f, 1.f);
    ImGui::SliderFloat("Saturation", &Saturation, 0.f, 1.5f);

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

    if (bForceControlSky)
    {
        Param_store->SetParam_EnableAnimatedTime(bEnableAnimatedTime);

        if (!bEnableAnimatedTime)
        {
            Param_store->SetParam_TimeOfDay(TimeOfDay);
        }
        else
        {
            Param_store->SetParam_AnimatedTimeSpeed(AnimatedTimeSpeed);
        }
        Param_store->SetParam_OverallIntensity(OverallIntensity);
        Param_store->SetParam_Contrast(Contrast);
        Param_store->SetParam_Saturation(Saturation);
    }

#endif
}

#endif
