#include "DIY_TagDebugPanel.h"
#include "GameplayTagAssetInterface.h"
#include "Selection.h"
#include "Editor.h"
#include "AroundMe/Player/Interactions/DIY_TagInterface.h"

void SDIY_TagDebugPanel::Construct(const FArguments &InArgs)
{
    ChildSlot
        [SNew(SBorder)
             .BorderImage(FAppStyle::GetBrush("ToolPanel.GroupBorder"))
             .Padding(10)
                 [SNew(SVerticalBox) + SVerticalBox::Slot().AutoHeight().Padding(0, 0, 0, 10)[SNew(STextBlock).Text_Lambda([this]()
                                                                                                                           { return CurrentActorName; })
                                                                                                  .Font(FAppStyle::GetFontStyle("HeadingLarge"))
                                                                                                  .ColorAndOpacity(FLinearColor::White)] +
                  SVerticalBox::Slot()
                      .FillHeight(1.0f)
                          [SNew(SScrollBox) // 加上滚动条，防止标签太多溢出
                           + SScrollBox::Slot()
                                 [SAssignNew(TagListView, SVerticalBox)]]]];
}

void SDIY_TagDebugPanel::Tick(const FGeometry &AllottedGeometry, const double InCurrentTime, const float InDeltaTime)
{
    if (!GEditor)
        return;

    AActor *SelectedActor = GEditor->GetSelectedActors()->GetTop<AActor>();

    // 只有当选中的物体变了，才去更新
    if (SelectedActor != LastSelectedActor.Get())
    {
        LastSelectedActor = SelectedActor;
        RefreshTagList(SelectedActor);
    }
}

void SDIY_TagDebugPanel::RefreshTagList(AActor *Actor)
{
    TagListView->ClearChildren();

    if (!Actor)
    {
        CurrentActorName = FText::FromString("No Actor Selected");
        return;
    }

    CurrentActorName = FText::FromString(Actor->GetActorLabel());
    FGameplayTagContainer CurrentContainer;

    // 直接尝试 Cast 到你的接口
    if (IDIY_TagInterface *DIYInterface = Cast<IDIY_TagInterface>(Actor))
    {
        DIYInterface->GetOwnedGameplayTags(CurrentContainer);
    }
    else if (IGameplayTagAssetInterface *OfficialInterface = Cast<IGameplayTagAssetInterface>(Actor))
    {
        OfficialInterface->GetOwnedGameplayTags(CurrentContainer);
    }
    else
    {
        // 既没装你的接口，也没装官方接口，直接收工
        return;
    }

    // --- 下面是树状显示的逻辑 ---
    TArray<FGameplayTag> SortedTags;
    CurrentContainer.GetGameplayTagArray(SortedTags);
    SortedTags.Sort(); // FGameplayTag 自带运算符重载，可以直接 Sort

    for (const FGameplayTag &CurTag : SortedTags)
    {
        TArray<FString> Parts;
        CurTag.ToString().ParseIntoArray(Parts, TEXT("."));

        float Indent = (Parts.Num() - 1) * 16.0f;

        TagListView->AddSlot()
            .AutoHeight()
            .Padding(Indent, 2, 0, 2)
                [SNew(SHorizontalBox) + SHorizontalBox::Slot().AutoWidth().VAlign(VAlign_Center)[SNew(SImage).Image(FAppStyle::GetBrush("Icons.Tag")).DesiredSizeOverride(FVector2D(12, 12)).ColorAndOpacity(FSlateColor(FLinearColor(0.3f, 0.7f, 1.0f)))] + SHorizontalBox::Slot().AutoWidth().Padding(4, 0, 0, 0)[SNew(STextBlock).Text(FText::FromString(Parts.Last())).ToolTipText(FText::FromName(CurTag.GetTagName())).Font(FAppStyle::GetFontStyle("NormalFont"))]];
    }
}