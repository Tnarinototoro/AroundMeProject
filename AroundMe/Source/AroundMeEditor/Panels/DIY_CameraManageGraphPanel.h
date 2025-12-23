#pragma once

#include "CoreMinimal.h"
#include "Widgets/SCompoundWidget.h"

class ADIY_CameraBase;

/**
 * Camera Graph Debug Panel
 * 只负责：节点 + 有向线 + 写 Prev / Next
 */
class SDIY_CameraManageGraphPanel : public SCompoundWidget
{
public:
    SLATE_BEGIN_ARGS(SDIY_CameraManageGraphPanel) {}
    SLATE_END_ARGS()

    void Construct(const FArguments &InArgs);
    virtual ~SDIY_CameraManageGraphPanel();

private:
    void SaveNodePositionsToJson();
    void LoadNodePositionsFromJson();
    /** 摄像机 Actor 列表 */
    TArray<TWeakObjectPtr<ADIY_CameraBase>> CameraActors;

    /** Graph 中的节点位置（Editor-only） */
    TMap<TWeakObjectPtr<ADIY_CameraBase>, FVector2D> NodePositions;

    /** 拖拽连线状态 */
    TWeakObjectPtr<ADIY_CameraBase> DragStartCamera;
    FVector2D DragCurrentPos;

private:
    void RefreshCameraList();

    ADIY_CameraBase *FindCameraByName(const FName &Name) const;

    FVector2D GetNodeCenter(ADIY_CameraBase *Cam) const;

    void ConnectCameras(ADIY_CameraBase *From, ADIY_CameraBase *To);

private:
    // Slate Overrides
    virtual int32 OnPaint(
        const FPaintArgs &Args,
        const FGeometry &AllottedGeometry,
        const FSlateRect &MyCullingRect,
        FSlateWindowElementList &OutDrawElements,
        int32 LayerId,
        const FWidgetStyle &InWidgetStyle,
        bool bParentEnabled) const override;

    virtual FReply OnMouseButtonDown(
        const FGeometry &MyGeometry,
        const FPointerEvent &MouseEvent) override;

    virtual FReply OnMouseButtonUp(
        const FGeometry &MyGeometry,
        const FPointerEvent &MouseEvent) override;

    virtual FReply OnMouseMove(
        const FGeometry &MyGeometry,
        const FPointerEvent &MouseEvent) override;
};
