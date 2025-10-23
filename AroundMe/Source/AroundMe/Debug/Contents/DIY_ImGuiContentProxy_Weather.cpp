#if 1
#include "DIY_ImGuiContentProxy_Weather.h"
#include "../DIY_ImGui.h"
#include "../../GameUtilities/Weather/DIY_WeatherManager.h"
#include "../../GameUtilities/Weather/DIY_UDSParamsStore.h"

FDIY_ImGuiContentProxy_Weather::FDIY_ImGuiContentProxy_Weather(FDIY_ImGuiProxy &InOwningProxy)
    : FDIY_ImGuiContentProxy_MenuWindow(InOwningProxy, DIY_ImGuiNames::MenuCategoryNameSystem, "Weather", "WeatherDebugPanel")
{

}

void FDIY_ImGuiContentProxy_Weather::DrawWindow(float DeltaTime)
{
    ImGui::Text("BasicControl");
    ImGui::SliderInt("WeatherPresetType", &WeatherPresetType, 0, 20);

     UDIY_WeatherManager* WeatherManager = UDIY_WeatherManager::Get(GetWorld());

    if(nullptr == WeatherManager)
    {
        return;
    }

    ADIY_UDSParamsStore* Param_store=Cast<ADIY_UDSParamsStore>(WeatherManager->GetWorldParamsStoreInstance());
   
    if(nullptr == Param_store)
    {
        return;
    }
#if UE_BUILD_DEVELOPMENT || UE_BUILD_DEBUG



   Param_store->SetParam_WeatherPresetType(WeatherPresetType);

    

#endif
}

#endif
