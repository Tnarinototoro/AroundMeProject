#include "DIY_CameraManagerPanel.h"

#include "Editor.h"
#include "Engine/World.h"
#include "EngineUtils.h"
#include "Widgets/Layout/SScrollBox.h"
#include "Widgets/Layout/SBorder.h"
#include "Widgets/Input/SComboBox.h"
#include "Widgets/Input/SButton.h"
#include "Widgets/Text/STextBlock.h"
#include "DIY_CameraManageGraphPanel.h"
#include "AroundMe/Player/Camera/DIY_CameraBase.h"

TSharedRef<SWidget> SDIY_CameraManagerPanel::GenerateHeaderRow()
{
    return SNew(SBorder)
        .Padding(4)
        .BorderBackgroundColor(FLinearColor(0.15f, 0.15f, 0.15f))
            [SNew(SHorizontalBox)

             + SHorizontalBox::Slot().FillWidth(0.3f)
                   [SNew(STextBlock)
                        .Text(FText::FromString("Camera Name"))
                        .Font(FCoreStyle::GetDefaultFontStyle("Bold", 10))]

             + SHorizontalBox::Slot().FillWidth(0.3f)
                   [SNew(STextBlock)
                        .Text(FText::FromString("Prev"))
                        .Font(FCoreStyle::GetDefaultFontStyle("Bold", 10))]

             + SHorizontalBox::Slot().FillWidth(0.3f)
                   [SNew(STextBlock)
                        .Text(FText::FromString("Next"))
                        .Font(FCoreStyle::GetDefaultFontStyle("Bold", 10))]];
}
void SDIY_CameraManagerPanel::Construct(const FArguments &InArgs)
{
    RefreshCameraList();

    ChildSlot
        [SNew(SBorder)
             .Padding(8)
                 [
                     // 使用 Splitter 可以让用户手动调节上下两个面板的比例
                     SNew(SSplitter)
                         .Orientation(Orient_Vertical)

                     // 上半部分：原有的列表管理面板
                     + SSplitter::Slot()
                           .Value(0.4f) // 默认占比 40%
                               [SNew(SVerticalBox) + SVerticalBox::Slot().AutoHeight()[SNew(STextBlock).Text(FText::FromString("DIY Camera Manager (List View)")).Font(FCoreStyle::GetDefaultFontStyle("Bold", 14))] + SVerticalBox::Slot().AutoHeight().Padding(0, 5)[SNew(SButton).Text(FText::FromString("Refresh Cameras")).OnClicked_Lambda([this]()
                                                                                                                                                                                                                                                                                                                                                 {
                        RefreshCameraList();
                        // 注意：这里建议也刷新下方的 Graph 面板，如果需要的话
                        return FReply::Handled(); })] +
                                SVerticalBox::Slot().FillHeight(1.f)
                                    [SNew(SScrollBox) + SScrollBox::Slot()
                                                            [SAssignNew(CameraListBox, SVerticalBox)]]]

                     // 下半部分：Graph 面板
                     + SSplitter::Slot()
                           .Value(0.6f) // 默认占比 60%
                               [SNew(SVerticalBox) + SVerticalBox::Slot().AutoHeight().Padding(0, 5)[SNew(SBorder).BorderBackgroundColor(FLinearColor(0.1f, 0.1f, 0.1f))[SNew(STextBlock).Text(FText::FromString("DIY Camera Graph (Visual View)")).Font(FCoreStyle::GetDefaultFontStyle("Bold", 14))]] + SVerticalBox::Slot().FillHeight(1.f)[
                                                                                                                                                                                                                                                                                                              // 直接在这里 SNew 你的 Graph 面板
                                                                                                                                                                                                                                                                                                              SNew(SDIY_CameraManageGraphPanel)]]]];

    // 初次填充
    CameraListBox->ClearChildren();

    // ✅ 表头
    CameraListBox->AddSlot()
        .AutoHeight()
        .Padding(2)
            [GenerateHeaderRow()];

    for (auto Cam : CameraActors)
    {
        CameraListBox->AddSlot()
            .AutoHeight()
            .Padding(2)
                [GenerateCameraRow(Cam)];
    }
}

void SDIY_CameraManagerPanel::RefreshCameraList()
{
    CameraActors.Empty();
    CameraNameOptions.Empty();

    if (!GEditor)
        return;

    UWorld *World = GEditor->GetEditorWorldContext().World();
    if (!World)
        return;

    for (TActorIterator<ADIY_CameraBase> It(World); It; ++It)
    {
        ADIY_CameraBase *Cam = *It;
        CameraActors.Add(Cam);

        FName LabelName(*Cam->GetActorLabel());
        CameraNameOptions.Add(MakeShared<FName>(LabelName));

        // 同步 CameraName（关键）
        Cam->CameraEntry.CameraName = LabelName;
    }
}

ADIY_CameraBase *SDIY_CameraManagerPanel::FindCameraByName(const FName &CameraName) const
{
    for (const TWeakObjectPtr<ADIY_CameraBase> &Cam : CameraActors)
    {
        if (Cam.IsValid() && Cam->GetActorLabel() == CameraName.ToString())
        {
            return Cam.Get();
        }
    }
    return nullptr;
}
TSharedRef<SWidget> SDIY_CameraManagerPanel::GenerateCameraRow(TWeakObjectPtr<ADIY_CameraBase> CameraActor)
{
    if (!CameraActor.IsValid())
    {
        return SNew(STextBlock).Text(FText::FromString("Invalid Camera"));
    }

    ADIY_CameraBase *Cam = CameraActor.Get();

    return SNew(SBorder)
        .Padding(4)
            [SNew(SHorizontalBox)

             // Camera Name（可点击）
             + SHorizontalBox::Slot().FillWidth(0.3f)
                   [SNew(SButton)
                        .ButtonStyle(FAppStyle::Get(), "SimpleButton")
                        .ContentPadding(FMargin(2))
                        .OnClicked_Lambda([Cam]()
                                          {
                                if (!Cam || !GEditor)
                                {
                                    return FReply::Handled();
                                }

                                // 1️⃣ 选中 Actor
                                GEditor->SelectNone(false, true);
                                GEditor->SelectActor(Cam, true, true);

                                // 2️⃣ 视角切到 Camera
                                if (FViewport* Viewport = GEditor->GetActiveViewport())
                                {
                                    if (FEditorViewportClient* VC =
                                        static_cast<FEditorViewportClient*>(Viewport->GetClient()))
                                    {
                                        VC->SetViewLocation(Cam->GetActorLocation());
                                        VC->SetViewRotation(Cam->GetActorRotation());
                                        VC->Invalidate();
                                    }
                                }

                                return FReply::Handled(); })
                            [SNew(STextBlock)
                                 .Text(FText::FromString(Cam->GetActorLabel()))
                                 .ColorAndOpacity(FLinearColor::White)]]

             // Prev
             + SHorizontalBox::Slot().FillWidth(0.3f)
                   [SNew(SComboBox<TSharedPtr<FName>>)
                        .OptionsSource(&CameraNameOptions)
                        .OnGenerateWidget_Lambda([this](TSharedPtr<FName> Item)
                                                 { return SNew(SBorder)
                                                       .Padding(FMargin(4.f))
                                                       .BorderImage(FCoreStyle::Get().GetBrush("NoBorder"))

                                                       // 👉 用 MouseMove 模拟 Hover
                                                       .OnMouseMove_Lambda([this, Item](const FGeometry &, const FPointerEvent &)
                                                                           {
                                            if (!Item.IsValid() || !GEditor)
                                            {
                                                return FReply::Unhandled();
                                            }

                                            if (ADIY_CameraBase* Cam = FindCameraByName(*Item))
                                            {
                                                // 选中 Actor
                                                /*GEditor->SelectNone(false, true);
                                                GEditor->SelectActor(Cam, true, true);*/

                                                // 移动视角
                                                if (FViewport* Viewport = GEditor->GetActiveViewport())
                                                {
                                                    if (FEditorViewportClient* VC =
                                                        static_cast<FEditorViewportClient*>(Viewport->GetClient()))
                                                    {
                                                        VC->SetViewLocation(Cam->GetActorLocation());
                                                        VC->SetViewRotation(Cam->GetActorRotation());
                                                        VC->Invalidate();
                                                    }
                                                }
                                            }

                                            // ⚠️ 关键：不吃事件
                                            return FReply::Unhandled(); })

                                                       // ⚠️ 必须 Unhandled，否则左键又死
                                                       .OnMouseButtonDown_Lambda([](const FGeometry &, const FPointerEvent &)
                                                                                 { return FReply::Unhandled(); })
                                                           [SNew(STextBlock)
                                                                .Text(FText::FromName(*Item))]; })

                        .OnSelectionChanged_Lambda([Cam](TSharedPtr<FName> NewValue, ESelectInfo::Type SelectInfo)
                                                   {
                                if (!NewValue.IsValid())
                                {
                                    return;
                                }

                                if (SelectInfo == ESelectInfo::OnMouseClick ||
                                    SelectInfo == ESelectInfo::OnKeyPress)
                                {
                                    Cam->Modify();
                                    Cam->CameraEntry.PrevCameraName = *NewValue;
                                } })
                            [SNew(STextBlock)
                                 .Text_Lambda([Cam]()
                                              { return FText::FromName(Cam->CameraEntry.PrevCameraName); })]]
             // Next
             + SHorizontalBox::Slot().FillWidth(0.3f)
                   [SNew(SComboBox<TSharedPtr<FName>>)
                        .OptionsSource(&CameraNameOptions)

                        // === 下拉列表里的每一行 ===
                        .OnGenerateWidget_Lambda([this](TSharedPtr<FName> Item)
                                                 { return SNew(SBorder)
                                                       .Padding(FMargin(4.f))
                                                       .BorderImage(FCoreStyle::Get().GetBrush("NoBorder"))

                                                       // Hover 预览（不吃事件）
                                                       .OnMouseMove_Lambda([this, Item](const FGeometry &, const FPointerEvent &)
                                                                           {
                                                                               if (!Item.IsValid() || !GEditor)
                                                                               {
                                                                                   return FReply::Unhandled();
                                                                               }

                                                                               if (ADIY_CameraBase *Cam = FindCameraByName(*Item))
                                                                               {
                                                                                   // 选中 Actor
                                                                                   /*GEditor->SelectNone(false, true);
                                                                                   GEditor->SelectActor(Cam, true, true);*/

                                                                                   // 移动视角
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

                                                                               return FReply::Unhandled(); // ⚠️ 关键
                                                                           })

                                                       // ⚠️ 不吃左键，否则 ComboBox 会坏
                                                       .OnMouseButtonDown_Lambda([](const FGeometry &, const FPointerEvent &)
                                                                                 { return FReply::Unhandled(); })[SNew(STextBlock).Text(FText::FromName(*Item))]; })

                        // === 真正确定选择（左键点击） ===
                        .OnSelectionChanged_Lambda([Cam](TSharedPtr<FName> NewValue, ESelectInfo::Type SelectInfo)
                                                   {
                                if (!NewValue.IsValid())
                                {
                                    return;
                                }

                                if (SelectInfo == ESelectInfo::OnMouseClick ||
                                    SelectInfo == ESelectInfo::OnKeyPress)
                                {
                                    Cam->Modify();
                                    Cam->CameraEntry.NextCameraName = *NewValue;
                                } })
                            [
                                // 当前显示的值
                                SNew(STextBlock)
                                    .Text_Lambda([Cam]()
                                                 { return FText::FromName(Cam->CameraEntry.NextCameraName); })]]

    ];
}
