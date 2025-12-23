#include "DIY_CameraManageGraphPanel.h"

#include "Editor.h"
#include "Engine/World.h"
#include "EngineUtils.h"
#include "Rendering/DrawElements.h"
#include "AroundMe/Player/Camera/DIY_CameraBase.h"

void SDIY_CameraManageGraphPanel::Construct(const FArguments &InArgs)
{
    RefreshCameraList();

    ChildSlot
        [SNew(SBorder)
             .Padding(10)
                 [SNew(STextBlock)
                      .Text(FText::FromString("DIY Camera Graph Debug Panel"))]];
}

SDIY_CameraManageGraphPanel::~SDIY_CameraManageGraphPanel()
{

    SaveNodePositionsToJson();
}

void SDIY_CameraManageGraphPanel::RefreshCameraList()
{
    CameraActors.Empty();
    NodePositions.Empty();

    if (!GEditor)
        return;
    UWorld *World = GEditor->GetEditorWorldContext().World();
    if (!World)
        return;

    int32 Index = 0;
    for (TActorIterator<ADIY_CameraBase> It(World); It; ++It)
    {
        ADIY_CameraBase *Cam = *It;
        CameraActors.Add(Cam);

        NodePositions.Add(Cam, FVector2D(100.f + Index * 200.f, 200.f));
        ++Index;
    }

    LoadNodePositionsFromJson();
}

ADIY_CameraBase *SDIY_CameraManageGraphPanel::FindCameraByName(const FName &Name) const
{
    for (const TWeakObjectPtr<ADIY_CameraBase> &Cam : CameraActors)
    {
        if (Cam.IsValid() && Cam->CameraEntry.CameraName == Name)
        {
            return Cam.Get();
        }
    }
    return nullptr;
}

FVector2D SDIY_CameraManageGraphPanel::GetNodeCenter(ADIY_CameraBase *Cam) const
{
    if (!Cam)
        return FVector2D::ZeroVector;

    if (const FVector2D *Pos = NodePositions.Find(Cam))
    {
        return *Pos + FVector2D(50.f, 25.f);
    }

    return FVector2D::ZeroVector;
}

void SDIY_CameraManageGraphPanel::ConnectCameras(
    ADIY_CameraBase *From,
    ADIY_CameraBase *To)
{
    if (!From || !To || From == To)
        return;

    From->Modify();
    To->Modify();

    From->CameraEntry.NextCameraName = To->CameraEntry.CameraName;
    To->CameraEntry.PrevCameraName = From->CameraEntry.CameraName;
}

int32 SDIY_CameraManageGraphPanel::OnPaint(
    const FPaintArgs &Args,
    const FGeometry &AllottedGeometry,
    const FSlateRect &MyCullingRect,
    FSlateWindowElementList &OutDrawElements,
    int32 LayerId,
    const FWidgetStyle &InWidgetStyle,
    bool bParentEnabled) const
{

    auto DrawDirectionalLine = [&](ADIY_CameraBase *From, ADIY_CameraBase *To, const FLinearColor &Color, float SideOffset)
    {
        FVector2D Start = GetNodeCenter(From);
        FVector2D End = GetNodeCenter(To);

        FVector2D Dir = End - Start;
        float Length = Dir.Size();
        if (Length < 10.f)
            return;

        FVector2D UnitDir = Dir / Length;
        // 计算法向量 (垂直向量): (x, y) 的垂直向量是 (-y, x)
        FVector2D Normal(-UnitDir.Y, UnitDir.X);

        // 1. 应用偏移：让起点和终点都沿法线方向平移
        FVector2D OffsetVector = Normal * SideOffset;
        Start += OffsetVector;
        End += OffsetVector;

        // 2. 箭头尖端退让 (防止箭头指到方块中心被遮挡)
        // 假设方块半宽是 50，退让 55 像素
        FVector2D ArrowTip = End - UnitDir * 55.f;

        // 3. 画主干线
        TArray<FVector2D> Points;
        Points.Add(Start);
        Points.Add(ArrowTip);

        FSlateDrawElement::MakeLines(
            OutDrawElements,
            LayerId,
            AllottedGeometry.ToPaintGeometry(),
            Points,
            ESlateDrawEffect::None,
            Color,
            true,
            2.0f);

        // 4. 画箭头小翅膀
        const float ArrowLen = 12.f;
        const float ArrowWid = 7.f;
        FVector2D WingBase = ArrowTip - UnitDir * ArrowLen;
        FVector2D WingA = WingBase + Normal * ArrowWid;
        FVector2D WingB = WingBase - Normal * ArrowWid;

        TArray<FVector2D> ArrowPoints;
        ArrowPoints.Add(WingA);
        ArrowPoints.Add(ArrowTip);
        ArrowPoints.Add(WingB);

        FSlateDrawElement::MakeLines(
            OutDrawElements,
            LayerId + 1,
            AllottedGeometry.ToPaintGeometry(),
            ArrowPoints,
            ESlateDrawEffect::None,
            Color,
            true,
            2.5f);
    };

    // 在 OnPaint 循环中，针对 Next 和 Prev 分别计算偏移
    // --- 修改循环逻辑 ---
    for (const TWeakObjectPtr<ADIY_CameraBase> &CamPtr : CameraActors)
    {
        ADIY_CameraBase *CurrentCam = CamPtr.Get();
        if (!CurrentCam)
            continue;

        // 1. 处理 NEXT (绿线)
        if (!CurrentCam->CameraEntry.NextCameraName.IsNone())
        {
            if (ADIY_CameraBase *Target = FindCameraByName(CurrentCam->CameraEntry.NextCameraName))
            {
                // 绿色线：往左边偏 (8.0)
                DrawDirectionalLine(CurrentCam, Target, FLinearColor::Green, 8.0f);
            }
        }

        // 2. 处理 PREV (红线)
        if (!CurrentCam->CameraEntry.PrevCameraName.IsNone())
        {
            if (ADIY_CameraBase *Target = FindCameraByName(CurrentCam->CameraEntry.PrevCameraName))
            {
                // 重点修改：红色线也往左边偏 (8.0)
                // 或者是 -8.0，只要和上面一样，它们在两节点间往返时就会分居两侧
                DrawDirectionalLine(CurrentCam, Target, FLinearColor::Red, 8.0f);
            }
        }
    }

    // 2️⃣ 拖拽中的临时线
    if (DragStartCamera.IsValid())
    {
        TArray<FVector2D> TempLine;
        TempLine.Add(GetNodeCenter(DragStartCamera.Get()));
        TempLine.Add(DragCurrentPos);

        FSlateDrawElement::MakeLines(
            OutDrawElements,
            LayerId + 1,
            AllottedGeometry.ToPaintGeometry(),
            TempLine,
            ESlateDrawEffect::None,
            FLinearColor::Yellow,
            true,
            1.5f);
    }

    // 3️⃣ 画节点
    for (const TWeakObjectPtr<ADIY_CameraBase> &CamPtr : CameraActors)
    {
        ADIY_CameraBase *Cam = CamPtr.Get();
        if (!Cam)
            continue;

        const FVector2D Pos = NodePositions[Cam];

        FSlateDrawElement::MakeBox(
            OutDrawElements,
            LayerId + 2,
            AllottedGeometry.ToPaintGeometry(Pos, FVector2D(100.f, 50.f)),
            FCoreStyle::Get().GetBrush("WhiteBrush"),
            ESlateDrawEffect::None,
            FLinearColor(0.2f, 0.2f, 0.2f));

        FSlateDrawElement::MakeText(
            OutDrawElements,
            LayerId + 3,
            AllottedGeometry.ToPaintGeometry(Pos + FVector2D(8.f, 15.f), FVector2D(84.f, 20.f)),
            Cam->CameraEntry.CameraName.ToString(),
            FCoreStyle::GetDefaultFontStyle("Regular", 10),
            ESlateDrawEffect::None,
            FLinearColor::White);
    }

    return LayerId + 4;
}

FReply SDIY_CameraManageGraphPanel::OnMouseButtonDown(const FGeometry &MyGeometry, const FPointerEvent &MouseEvent)
{
    if (MouseEvent.GetEffectingButton() != EKeys::LeftMouseButton)
        return FReply::Unhandled();

    const FVector2D MousePos = MyGeometry.AbsoluteToLocal(MouseEvent.GetScreenSpacePosition());

    for (int32 i = CameraActors.Num() - 1; i >= 0; --i)
    {
        ADIY_CameraBase *Cam = CameraActors[i].Get();
        if (!Cam)
            continue;

        const FVector2D Pos = NodePositions[Cam];
        const FSlateRect Rect(Pos.X, Pos.Y, Pos.X + 100.f, Pos.Y + 50.f);

        if (Rect.ContainsPoint(MousePos))
        {
            DragStartCamera = Cam;
            DragCurrentPos = MousePos;

            // --- 新增：切换编辑器视角 ---
            if (GEditor)
            {
                // 让编辑器选中这个 Actor
                GEditor->SelectNone(true, true);
                GEditor->SelectActor(Cam, true, true);

                // 尝试让视口对齐到该摄像机（类似按下 Shift+Actor）
                // 这里的逻辑会让当前激活的 Level Viewport 锁定到该摄像机视角
                if (FViewport *Viewport = GEditor->GetActiveViewport())
                {
                    if (FEditorViewportClient *VC =
                            static_cast<FEditorViewportClient *>(Viewport->GetClient()))
                    {
                        VC->SetViewLocation(Cam->GetActorLocation());
                        VC->SetViewRotation(Cam->GetActorRotation());
                        VC->Invalidate();
                    }
                }
            }

            return FReply::Handled().CaptureMouse(SharedThis(this));
        }
    }

    return FReply::Unhandled();
}

FReply SDIY_CameraManageGraphPanel::OnMouseMove(const FGeometry &MyGeometry, const FPointerEvent &MouseEvent)
{
    if (DragStartCamera.IsValid())
    {
        const FVector2D MousePos = MyGeometry.AbsoluteToLocal(MouseEvent.GetScreenSpacePosition());
        FVector2D Delta = MousePos - DragCurrentPos;

        if (NodePositions.Contains(DragStartCamera))
        {
            // 1. 更新本地 UI 缓存
            NodePositions[DragStartCamera] += Delta;
        }

        DragCurrentPos = MousePos;
        return FReply::Handled();
    }
    return FReply::Unhandled();
}

FReply SDIY_CameraManageGraphPanel::OnMouseButtonUp(const FGeometry &MyGeometry, const FPointerEvent &MouseEvent)
{
    if (!DragStartCamera.IsValid())
        return FReply::Unhandled();

    const FVector2D MousePos = MyGeometry.AbsoluteToLocal(MouseEvent.GetScreenSpacePosition());

    // 检查是否落在了另一个节点上以触发连线
    for (const TWeakObjectPtr<ADIY_CameraBase> &CamPtr : CameraActors)
    {
        ADIY_CameraBase *TargetCam = CamPtr.Get();
        if (!TargetCam || TargetCam == DragStartCamera.Get())
            continue;

        const FVector2D Pos = NodePositions[TargetCam];
        const FSlateRect Rect(Pos.X, Pos.Y, Pos.X + 100.f, Pos.Y + 50.f);

        if (Rect.ContainsPoint(MousePos))
        {
            ConnectCameras(DragStartCamera.Get(), TargetCam);
            break;
        }
    }

    DragStartCamera.Reset();

        return FReply::Handled().ReleaseMouseCapture();
}

void SDIY_CameraManageGraphPanel::SaveNodePositionsToJson()
{
    TSharedPtr<FJsonObject> RootObject = MakeShareable(new FJsonObject());

    for (auto &Pair : NodePositions)
    {
        if (Pair.Key.IsValid())
        {
            FString CamName = Pair.Key->CameraEntry.CameraName.ToString();
            TSharedPtr<FJsonObject> PosObj = MakeShareable(new FJsonObject());
            PosObj->SetNumberField("X", Pair.Value.X);
            PosObj->SetNumberField("Y", Pair.Value.Y);
            RootObject->SetObjectField(CamName, PosObj);
        }
    }

    FString OutputString;
    TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&OutputString);
    FJsonSerializer::Serialize(RootObject.ToSharedRef(), Writer);

    // 存放在项目 Config 目录下，取名为 CameraGraphPos.json
    FString SavePath = FPaths::ProjectConfigDir() / TEXT("CameraGraphPos.json");
    FFileHelper::SaveStringToFile(OutputString, *SavePath);
}
void SDIY_CameraManageGraphPanel::LoadNodePositionsFromJson()
{
    FString SavePath = FPaths::ProjectConfigDir() / TEXT("CameraGraphPos.json");
    FString JsonString;

    if (FFileHelper::LoadFileToString(JsonString, *SavePath))
    {
        TSharedPtr<FJsonObject> RootObject;
        TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(JsonString);

        if (FJsonSerializer::Deserialize(Reader, RootObject) && RootObject.IsValid())
        {
            for (auto &Pair : NodePositions)
            {
                if (Pair.Key.IsValid())
                {
                    FString CamName = Pair.Key->CameraEntry.CameraName.ToString();
                    if (RootObject->HasField(CamName))
                    {
                        TSharedPtr<FJsonObject> PosObj = RootObject->GetObjectField(CamName);
                        Pair.Value.X = PosObj->GetNumberField("X");
                        Pair.Value.Y = PosObj->GetNumberField("Y");
                    }
                }
            }
        }
    }
}