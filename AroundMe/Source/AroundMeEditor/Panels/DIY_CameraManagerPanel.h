#pragma once

#include "CoreMinimal.h"
#include "Widgets/SCompoundWidget.h"

class ADIY_CameraBase;

class SDIY_CameraManagerPanel : public SCompoundWidget
{
public:
    SLATE_BEGIN_ARGS(SDIY_CameraManagerPanel) {}
    SLATE_END_ARGS()

    void Construct(const FArguments& InArgs);

private:
    /** 所有 Camera Actor */
    TArray<TWeakObjectPtr<ADIY_CameraBase>> CameraActors;

    /** 所有 Camera 名称（ActorLabel） */
    TArray<TSharedPtr<FName>> CameraNameOptions;

    /** 刷新扫描 */
    void RefreshCameraList();

    /** 构建单行 UI */
    TSharedRef<SWidget> GenerateCameraRow(TWeakObjectPtr<ADIY_CameraBase> CameraActor);
    TSharedRef<SWidget> GenerateHeaderRow();

    /** 工具函数 */
    FText GetCameraLabel(TWeakObjectPtr<ADIY_CameraBase> CameraActor) const;
    TSharedPtr<FName> FindNameOption(const FName& Name) const;
    TSharedPtr<SVerticalBox> CameraListBox;
    ADIY_CameraBase* FindCameraByName(const FName& CameraName) const;
};
