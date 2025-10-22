#if 1
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
    ImGui::SliderFloat("Hour", &TimeOfDay, 0.f, 2400.f);



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

    Param_store->SetParam_TimeOfDay(TimeOfDay);


    

    
#if UE_BUILD_DEVELOPMENT || UE_BUILD_DEBUG
    
#endif
}

#endif
