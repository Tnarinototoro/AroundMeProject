#if UE_BUILD_DEVELOPMENT || UE_BUILD_DEBUG
#include "DIY_ImGuiContentProxy_Camera.h"
#include "../DIY_ImGui.h"
#include "../DIY_GlobalDebugSettings.h"
#include "DIY_CameraManager.h"

FDIY_ImGuiContentProxy_Camera::FDIY_ImGuiContentProxy_Camera(FDIY_ImGuiProxy& InOwningProxy)
    : FDIY_ImGuiContentProxy_MenuWindow(InOwningProxy, DIY_ImGuiNames::MenuCategoryNameGamePlay, "Camera", "Camera")
{
}

void FDIY_ImGuiContentProxy_Camera::DrawWindow(float DeltaTime)
{
    ImGui::Checkbox("ShowAllCameraEntries", &FDIY_GlobalDebugSettings::sInstance.camera.ShowAllCameraEntries);

    if (FDIY_GlobalDebugSettings::sInstance.camera.ShowAllCameraEntries)
    {
        if (UDIY_CameraManager* CamManager = UDIY_CameraManager::Get(GetWorld()))
        {
            // �޸ĵ� 1����ʽ���� "%s" ռλ������ȥ������� Printf Ƕ��
            ImGui::TextColored(
                ImVec4(0.0f, 1.0f, 0.0f, 1.0f),
                "%s",
                TCHAR_TO_UTF8(*UDIY_CameraManager::GetInfoString(CamManager->GetCurrentInUseCameraEntry())));

            for (const TPair<FName, FDIY_CameraEntry>& Pair : CamManager->GetAllCameraEntries())
            {
                const FDIY_CameraEntry& CurEntry = Pair.Value;

                // �޸ĵ� 2��ͬ�ϣ�ȷ����һ�������ǳ����ַ��� "%s"
                ImGui::TextColored(
                    ImVec4(1.0f, 1.0f, 1.0f, 1.0f),
                    "%s",
                    TCHAR_TO_UTF8(*UDIY_CameraManager::GetInfoString(CurEntry)));
            }
        }
    }
}

#endif