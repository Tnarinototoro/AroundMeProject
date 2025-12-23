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
        // 节点原始尺寸是 100x50，中心偏移是 50x25
        FVector2D LogicCenter = *Pos + FVector2D(50.f, 25.f);
        return Project(LogicCenter); // 返回缩放后的屏幕位置
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
        // 1. 获取已经缩放过的屏幕坐标
        FVector2D Start = GetNodeCenter(From);
        FVector2D End = GetNodeCenter(To);

        FVector2D Dir = End - Start;
        float Length = Dir.Size();

        // 这里的阈值也要考虑缩放，防止缩小时连线消失
        if (Length < 5.f * ZoomAmount)
            return;

        FVector2D UnitDir = Dir / Length;
        FVector2D Normal(-UnitDir.Y, UnitDir.X);

        // 2. 应用偏移（SideOffset 也要缩放）
        FVector2D OffsetVector = Normal * (SideOffset * ZoomAmount);
        Start += OffsetVector;
        End += OffsetVector;

        // 3. 箭头尖端退让
        // 原本是 55 像素，现在随缩放调整
        FVector2D ArrowTip = End - UnitDir * (55.f * ZoomAmount);

        // 4. 画主干线
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
            2.0f * ZoomAmount // 线宽随缩放变细或变粗
        );

        // 5. 画箭头小翅膀 (尺寸全部乘上 ZoomAmount)
        const float ArrowLen = 12.f * ZoomAmount;
        const float ArrowWid = 7.f * ZoomAmount;

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
            2.5f * ZoomAmount // 箭头线宽也同步
        );
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

    // 在 OnPaint 内部循环画节点的部分：
    // --- 在 OnPaint 内部循环画节点的部分 ---
    for (const TWeakObjectPtr<ADIY_CameraBase> &CamPtr : CameraActors)
    {
        ADIY_CameraBase *Cam = CamPtr.Get();
        if (!Cam)
            continue;

        const FVector2D Pos = NodePositions[Cam];
        FVector2D ScreenPos = Project(Pos);
        FVector2D ScreenSize = FVector2D(100.f, 50.f) * ZoomAmount;

        // 1. 画背景方块
        FSlateDrawElement::MakeBox(
            OutDrawElements,
            LayerId + 2,
            AllottedGeometry.ToPaintGeometry(ScreenSize, FSlateLayoutTransform(ScreenPos)),
            FCoreStyle::Get().GetBrush("WhiteBrush"),
            ESlateDrawEffect::None,
            FLinearColor(0.15f, 0.15f, 0.15f, 1.0f)); // 深色背景

        // 2. 画标题（当前相机名）
        FSlateDrawElement::MakeText(
            OutDrawElements,
            LayerId + 3,
            AllottedGeometry.ToPaintGeometry(ScreenSize, FSlateLayoutTransform(ScreenPos + FVector2D(5.f, 5.f) * ZoomAmount)),
            Cam->CameraEntry.CameraName.ToString(),
            FCoreStyle::GetDefaultFontStyle("Bold", FMath::FloorToInt(10 * ZoomAmount)),
            ESlateDrawEffect::None,
            FLinearColor::Yellow); // 标题用黄色区分

        // 3. 检查并显示“虚拟”连接
        float VerticalOffset = 22.f * ZoomAmount; // 标题下方的起始高度

        // 检查 Prev
        FName PrevName = Cam->CameraEntry.PrevCameraName;
        if (!PrevName.IsNone() && FindCameraByName(PrevName) == nullptr)
        {
            FString PrevText = FString::Printf(TEXT("P: %s"), *PrevName.ToString());
            FSlateDrawElement::MakeText(
                OutDrawElements,
                LayerId + 3,
                AllottedGeometry.ToPaintGeometry(ScreenSize, FSlateLayoutTransform(ScreenPos + FVector2D(5.f, VerticalOffset))),
                PrevText,
                FCoreStyle::GetDefaultFontStyle("Regular", FMath::FloorToInt(8 * ZoomAmount)),
                ESlateDrawEffect::None,
                FLinearColor::Red); // 找不到的 Prev 显示红色

            VerticalOffset += 12.f * ZoomAmount; // 换行
        }

        // 检查 Next
        FName NextName = Cam->CameraEntry.NextCameraName;
        if (!NextName.IsNone() && FindCameraByName(NextName) == nullptr)
        {
            FString NextText = FString::Printf(TEXT("N: %s"), *NextName.ToString());
            FSlateDrawElement::MakeText(
                OutDrawElements,
                LayerId + 3,
                AllottedGeometry.ToPaintGeometry(ScreenSize, FSlateLayoutTransform(ScreenPos + FVector2D(5.f, VerticalOffset))),
                NextText,
                FCoreStyle::GetDefaultFontStyle("Regular", FMath::FloorToInt(8 * ZoomAmount)),
                ESlateDrawEffect::None,
                FLinearColor::Green); // 找不到的 Next 显示绿色
        }
    }

    return LayerId + 4;
}

// 1. 鼠标按下：记录位置
FReply SDIY_CameraManageGraphPanel::OnMouseButtonDown(const FGeometry &MyGeometry, const FPointerEvent &MouseEvent)
{
    LastMousePos = MyGeometry.AbsoluteToLocal(MouseEvent.GetScreenSpacePosition());

    if (MouseEvent.GetEffectingButton() == EKeys::LeftMouseButton)
    {
        // 修正：将鼠标点击位置转回“逻辑坐标”去判断是否点中了节点
        FVector2D LogicMousePos = Unproject(LastMousePos);

        for (int32 i = CameraActors.Num() - 1; i >= 0; --i)
        {
            ADIY_CameraBase *Cam = CameraActors[i].Get();
            if (!Cam)
                continue;

            const FVector2D Pos = NodePositions[Cam];
            // 这里的 Rect 是逻辑坐标下的范围
            const FSlateRect Rect(Pos.X, Pos.Y, Pos.X + 100.f, Pos.Y + 50.f);

            if (Rect.ContainsPoint(LogicMousePos))
            {
                DragStartCamera = Cam;
                DragCurrentPos = LastMousePos; // 记录屏幕位置用于拖拽计算
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
    }

    // 右键允许捕获，准备平移
    if (MouseEvent.GetEffectingButton() == EKeys::RightMouseButton)
    {
        return FReply::Handled().CaptureMouse(SharedThis(this));
    }

    return FReply::Unhandled();
}
// 2. 鼠标移动：处理平移和节点拖拽
FReply SDIY_CameraManageGraphPanel::OnMouseMove(const FGeometry &MyGeometry, const FPointerEvent &MouseEvent)
{
    FVector2D CurrentMousePos = MyGeometry.AbsoluteToLocal(MouseEvent.GetScreenSpacePosition());
    FVector2D Delta = CurrentMousePos - LastMousePos;

    // 右键平移画布
    if (MouseEvent.IsMouseButtonDown(EKeys::RightMouseButton))
    {
        ViewOffset += Delta / ZoomAmount;
        LastMousePos = CurrentMousePos;
        return FReply::Handled();
    }

    // 左键拖拽节点
    if (DragStartCamera.IsValid())
    {
        if (NodePositions.Contains(DragStartCamera))
        {
            // 节点移动量也要考虑缩放
            NodePositions[DragStartCamera] += Delta / ZoomAmount;
        }
        LastMousePos = CurrentMousePos;
        DragCurrentPos = CurrentMousePos;
        return FReply::Handled();
    }

    LastMousePos = CurrentMousePos;
    return FReply::Unhandled();
}
FReply SDIY_CameraManageGraphPanel::OnMouseButtonUp(const FGeometry &MyGeometry, const FPointerEvent &MouseEvent)
{
    // 1. 如果是左键抬起，处理连线逻辑
    if (MouseEvent.GetEffectingButton() == EKeys::LeftMouseButton)
    {
        if (DragStartCamera.IsValid())
        {
            const FVector2D MousePos = MyGeometry.AbsoluteToLocal(MouseEvent.GetScreenSpacePosition());

            for (const TWeakObjectPtr<ADIY_CameraBase> &CamPtr : CameraActors)
            {
                ADIY_CameraBase *TargetCam = CamPtr.Get();
                if (!TargetCam || TargetCam == DragStartCamera.Get())
                    continue;

                // 注意：这里判定连线时也要考虑缩放转换后的位置，或者使用 Unproject
                const FVector2D Pos = Project(NodePositions[TargetCam]);
                const FSlateRect Rect(Pos.X, Pos.Y, Pos.X + 100.f * ZoomAmount, Pos.Y + 50.f * ZoomAmount);

                if (Rect.ContainsPoint(MousePos))
                {
                    ConnectCameras(DragStartCamera.Get(), TargetCam);
                    break;
                }
            }
            DragStartCamera.Reset();
        }
    }

    // 2. 核心修复：无论抬起的是左键还是右键，只要捕获了鼠标，就一定要释放
    // 只有释放了 Capture，鼠标才能去点击窗口的其他部分（如右上角 X 或上方列表）
    return FReply::Handled().ReleaseMouseCapture();
}

FReply SDIY_CameraManageGraphPanel::OnMouseWheel(const FGeometry &MyGeometry, const FPointerEvent &MouseEvent)
{
    const float ZoomStep = 0.1f;
    const float OldZoom = ZoomAmount;

    // 计算缩放前的逻辑坐标 (鼠标指向哪里)
    FVector2D MousePos = MyGeometry.AbsoluteToLocal(MouseEvent.GetScreenSpacePosition());
    FVector2D LogicMouseBefore = (MousePos / OldZoom) - ViewOffset;

    // 应用新缩放
    ZoomAmount = FMath::Clamp(ZoomAmount + MouseEvent.GetWheelDelta() * ZoomStep, 0.2f, 2.0f);

    // 计算为了保持鼠标指向不变，所需的 ViewOffset 补偿量
    // 算法公式：ViewOffset_New = (MousePos / Zoom_New) - LogicMouseBefore
    ViewOffset = (MousePos / ZoomAmount) - LogicMouseBefore;

    return FReply::Handled();
}

void SDIY_CameraManageGraphPanel::SaveNodePositionsToJson()
{
    TSharedPtr<FJsonObject> RootObject = MakeShareable(new FJsonObject());

    // --- 1. 保存视角状态 ---
    RootObject->SetNumberField("ZoomAmount", ZoomAmount);
    TSharedPtr<FJsonObject> OffsetObj = MakeShareable(new FJsonObject());
    OffsetObj->SetNumberField("X", ViewOffset.X);
    OffsetObj->SetNumberField("Y", ViewOffset.Y);
    RootObject->SetObjectField("ViewOffset", OffsetObj);

    // --- 2. 保存节点位置 ---
    TSharedPtr<FJsonObject> NodesObj = MakeShareable(new FJsonObject());
    for (auto &Pair : NodePositions)
    {
        if (Pair.Key.IsValid())
        {
            FString CamName = Pair.Key->CameraEntry.CameraName.ToString();
            TSharedPtr<FJsonObject> PosObj = MakeShareable(new FJsonObject());
            PosObj->SetNumberField("X", Pair.Value.X);
            PosObj->SetNumberField("Y", Pair.Value.Y);
            NodesObj->SetObjectField(CamName, PosObj);
        }
    }
    RootObject->SetObjectField("Nodes", NodesObj); // 将节点放入子层级，避免与全局属性冲突

    // 序列化与文件写入
    FString OutputString;
    TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&OutputString);
    FJsonSerializer::Serialize(RootObject.ToSharedRef(), Writer);

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
            // 1. 读取视角状态 - 全部增加 TEXT() 宏
            if (RootObject->HasField(TEXT("ZoomAmount"))) // 修正点
            {
                ZoomAmount = RootObject->GetNumberField(TEXT("ZoomAmount")); // 修正点
            }

            if (RootObject->HasField(TEXT("ViewOffset"))) // 修正点
            {
                TSharedPtr<FJsonObject> OffsetObj = RootObject->GetObjectField(TEXT("ViewOffset")); // 修正点
                ViewOffset.X = OffsetObj->GetNumberField(TEXT("X"));                                // 修正点
                ViewOffset.Y = OffsetObj->GetNumberField(TEXT("Y"));                                // 修正点
            }

            // 2. 读取节点位置
            if (RootObject->HasField(TEXT("Nodes"))) // 修正点
            {
                TSharedPtr<FJsonObject> NodesObj = RootObject->GetObjectField(TEXT("Nodes")); // 修正点
                for (auto &Pair : NodePositions)
                {
                    if (Pair.Key.IsValid())
                    {
                        FString CamName = Pair.Key->CameraEntry.CameraName.ToString();
                        if (NodesObj->HasField(CamName)) // 这里不需要 TEXT 因为 CamName 已经是 FString
                        {
                            TSharedPtr<FJsonObject> PosObj = NodesObj->GetObjectField(CamName);
                            Pair.Value.X = PosObj->GetNumberField(TEXT("X")); // 修正点
                            Pair.Value.Y = PosObj->GetNumberField(TEXT("Y")); // 修正点
                        }
                    }
                }
            }
        }
    }
}