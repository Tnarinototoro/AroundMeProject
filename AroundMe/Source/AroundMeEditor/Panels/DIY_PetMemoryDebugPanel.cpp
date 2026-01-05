#include "DIY_PetMemoryDebugPanel.h"
#include "Editor.h"
#include "EngineUtils.h"
#include "Widgets/Layout/SScrollBox.h"
#include "Widgets/Text/STextBlock.h"
#include "AroundMe/AI/Assets/DIY_PetRoutineAsset.h" // 确保包含 Asset 定义
#include "AroundMe/AI/Assets/DIY_PetRoutineAsset.h"
#include "Engine/AssetManager.h"
#include "Widgets/Colors/SColorBlock.h"
#include "Widgets/Images/SImage.h"
void SDIY_PetMemoryDebugPanel::Construct(const FArguments &InArgs)
{
    ChildSlot
        [SNew(SHorizontalBox)

         // --- 左侧：Actor 列表 (占 30% 宽度) ---
         + SHorizontalBox::Slot()
               .FillWidth(0.3f)
               .Padding(5)
                   [SNew(SVerticalBox) + SVerticalBox::Slot().AutoHeight()[SNew(STextBlock).Text(FText::FromString("Pet Instances:")).Font(FAppStyle::GetFontStyle("BoldFont"))] +
                    SVerticalBox::Slot().FillHeight(1.0f)
                        [SAssignNew(ActorListView, SListView<TWeakObjectPtr<AActor>>).ListItemsSource(&FoundActors).OnGenerateRow(this, &SDIY_PetMemoryDebugPanel::OnGenerateRowForActor).OnSelectionChanged(this, &SDIY_PetMemoryDebugPanel::OnActorSelectionChanged)]]

         // --- 右侧：详细信息区 (占 70% 宽度) ---
         + SHorizontalBox::Slot()
               .FillWidth(0.7f)
               .Padding(5)
                   [SNew(SScrollBox) + SScrollBox::Slot()
                                           [SNew(SVerticalBox)

                                            // 1. 基础参数部分
                                            + SVerticalBox::Slot().AutoHeight().Padding(0, 0, 0, 10)
                                                  [SNew(SBorder)
                                                       .BorderImage(FAppStyle::GetBrush("ToolPanel.GroupBorder"))
                                                           [SNew(STextBlock)
                                                                .Text(this, &SDIY_PetMemoryDebugPanel::GetMemoryBaseInfoText)
                                                                .AutoWrapText(true)]]

                                            // 2. Working Stack (卡片形式)
                                            + SVerticalBox::Slot().AutoHeight()
                                                  [SNew(STextBlock).Text(FText::FromString("--- Working Stack (Top is Active) ---")).Font(FAppStyle::GetFontStyle("BoldFont"))] +
                                            SVerticalBox::Slot().AutoHeight()
                                                [SAssignNew(WorkingStackBox, SVerticalBox) // 动态填充
    ]

                                            // 3. Daily Task Pool
                                            + SVerticalBox::Slot().AutoHeight().Padding(0, 10, 0, 0)
                                                  [SNew(STextBlock).Text(FText::FromString("--- Daily Task Pool ---")).Font(FAppStyle::GetFontStyle("BoldFont"))] +
                                            SVerticalBox::Slot().AutoHeight()
                                                [SAssignNew(DailyPoolBox, SVerticalBox) // 动态填充
    ]]]];
}

void SDIY_PetMemoryDebugPanel::Tick(const FGeometry &AllottedGeometry, const double InCurrentTime, const float InDeltaTime)
{
    // 1. 定期刷新 Actor 列表 (每秒一次)
    if (InCurrentTime > NextRefreshSearchTime)
    {
        RefreshActorList();
        NextRefreshSearchTime = InCurrentTime + 1.0f;
    }

    // 2. 实时刷新卡片内容
    if (SelectedComponent.IsValid())
    {
        const auto &Stack = SelectedComponent->WorkingStack;
        const auto &Pool = SelectedComponent->DailyTaskPool;

        // --- 核心修复：检查是否需要更新 UI ---
        // 只有当任务数量变化，或者栈顶任务变化时，才重新生成卡片
        FName CurrentActiveTag = (Stack.Num() > 0) ? Stack.Last().RoutineTag.GetTagName() : NAME_None;

        if (Stack.Num() != LastStackCount || CurrentActiveTag != LastActiveTag || Pool.Num() != LastPoolCount)
        {
            LastStackCount = Stack.Num();
            LastActiveTag = CurrentActiveTag;
            LastPoolCount = Pool.Num();

            UE_LOG(LogTemp, Warning, TEXT("Memory Data Changed - Rebuilding UI Cards"));

            // 执行真正的重建逻辑
            RebuildMemoryWidgets();
        }
    }
}
void SDIY_PetMemoryDebugPanel::RebuildMemoryWidgets()
{
    if (!SelectedComponent.IsValid())
        return;

    WorkingStackBox->ClearChildren();
    DailyPoolBox->ClearChildren();

    const auto &Stack = SelectedComponent->WorkingStack;
    for (int32 i = Stack.Num() - 1; i >= 0; --i)
    {
        bool bIsActive = (i == Stack.Num() - 1);
        WorkingStackBox->AddSlot().AutoHeight().Padding(2, 5)
            [CreateRoutineCard(Stack[i], bIsActive)];
    }

    for (const auto &Instance : SelectedComponent->DailyTaskPool)
    {
        DailyPoolBox->AddSlot().AutoHeight().Padding(2, 5)
            [CreateRoutineCard(Instance, false)];
    }
}
void SDIY_PetMemoryDebugPanel::RefreshActorList()
{
    FoundActors.Empty();

    UWorld *World = nullptr;

    // --- 核心逻辑：优先找运行中的世界 ---
    if (GEditor->PlayWorld)
    {
        // 如果正在运行(PIE)，获取运行时的世界
        World = GEditor->PlayWorld;
    }
    else
    {
        // 否则获取编辑器的预览世界
        World = GEditor->GetEditorWorldContext().World();
    }

    if (World)
    {
        for (TActorIterator<AActor> It(World); It; ++It)
        {
            if (It->FindComponentByClass<UDIY_PetMemoryComponent>())
            {
                FoundActors.Add(*It); // 这里会自动隐式转换为弱指针
            }
        }
    }
    ActorListView->RequestListRefresh();
}

void SDIY_PetMemoryDebugPanel::OnActorSelectionChanged(TWeakObjectPtr<AActor> InActor, ESelectInfo::Type SelectInfo)
{
    // 弱指针需要通过 Get() 获取原始指针并检查有效性
    AActor *ActorPtr = InActor.Get();
    if (ActorPtr && GEditor)
    {
        SelectedComponent = ActorPtr->FindComponentByClass<UDIY_PetMemoryComponent>();

        TArray<AActor *> ActorsToFocus;
        ActorsToFocus.Add(ActorPtr);
        GEditor->MoveViewportCamerasToActor(ActorsToFocus, false);
    }
}

TSharedRef<SWidget> SDIY_PetMemoryDebugPanel::CreateRoutineCard(const FDIY_RoutineInstance &Instance, bool bIsActive)
{
    // 1. 颜色定义
    FLinearColor BorderColor = bIsActive ? FLinearColor(0.0f, 0.6f, 0.1f, 1.0f) : FLinearColor(0.05f, 0.05f, 0.05f, 0.9f);
    FLinearColor TagTextColor = bIsActive ? FLinearColor::White : FLinearColor(0.7f, 0.7f, 0.7f, 1.0f);

    // 2. 准备 Asset 详细信息 (从 RoutineAsset 中获取)
    FString AssetDetailInfo = TEXT("No Asset Data");
    UAssetManager &Manager = UAssetManager::Get();

    // 尝试通过 ID 获取已加载的资源（因为运行时这些通常已经由于 BeginPlay 加载过了）
    // 如果没有加载，这里会是空，避免在 UI 线程做重度 IO
    TSoftObjectPtr<UDIY_PetRoutineAsset> AssetPtr(Manager.GetPrimaryAssetPath(Instance.OriginalRoutineAssetID));
    if (UDIY_PetRoutineAsset *RoutineAsset = AssetPtr.Get())
    {
        FString Slots;
        for (const FDIY_TimeRange &Range : RoutineAsset->RoutineConfig.PreferredTimeSlots)
        {
            Slots += FString::Printf(TEXT("[%02d-%02d] "), Range.StartHour, Range.EndHour);
        }
        AssetDetailInfo = FString::Printf(TEXT("Slots: %s | Max: %d"),
                                          Slots.IsEmpty() ? TEXT("All Day") : *Slots,
                                          RoutineAsset->RoutineConfig.MaxExecutableTimes);
    }

    // 3. 构建卡片 UI
    return SNew(SBox)
        .WidthOverride(300.0f) // 限制卡片宽度，防止撑满屏幕
        .Padding(FMargin(0, 2, 0, 4))
            [SNew(SBorder)
                 .BorderImage(FAppStyle::GetBrush("Graph.Node.Body"))
                 .BorderBackgroundColor(BorderColor) // 激活任务背景变绿
                 .Padding(FMargin(10, 8))
                     [SNew(SVerticalBox)

                      // 第一行：Routine Tag (标题)
                      + SVerticalBox::Slot().AutoHeight()
                            [SNew(SHorizontalBox) + SHorizontalBox::Slot().AutoWidth()[SNew(STextBlock).Text(FText::FromName(Instance.RoutineTag.GetTagName())).Font(FAppStyle::GetFontStyle(bIsActive ? "BoldFont" : "NormalFont")).ColorAndOpacity(TagTextColor)] + SHorizontalBox::Slot().FillWidth(1.0f).HAlign(HAlign_Right)[
                                                                                                                                                                                                                                                                          // 如果是活跃任务，显示 [ACTIVE] 标签
                                                                                                                                                                                                                                                                          SNew(STextBlock).Text(bIsActive ? FText::FromString(TEXT("● ACTIVE")) : FText::GetEmpty()).ColorAndOpacity(FLinearColor::Green).Font(FAppStyle::GetFontStyle("SmallFont"))]]

                      // 第二行：分割线
                      + SVerticalBox::Slot().AutoHeight().Padding(0, 5)
                            [SNew(SColorBlock).Color(FLinearColor(1, 1, 1, 0.1f)).Size(FVector2D(1, 1))]

                      // 第三行：Asset 配置信息 (对应你要求的 Routine Asset 内容)
                      + SVerticalBox::Slot().AutoHeight().Padding(0, 2)
                            [SNew(STextBlock)
                                 .Text(FText::FromString(AssetDetailInfo))
                                 .Font(FAppStyle::GetFontStyle("SmallFont"))
                                 .ColorAndOpacity(FLinearColor(0.5f, 0.5f, 0.5f))
                                 .AutoWrapText(true)]

                      // 第四行：运行时动态信息 (剩余执行次数)
                      + SVerticalBox::Slot().AutoHeight().Padding(0, 2)
                            [SNew(SHorizontalBox) + SHorizontalBox::Slot().AutoWidth()[SNew(STextBlock).Text(FText::FromString(TEXT("Remaining Count: "))).Font(FAppStyle::GetFontStyle("SmallFont"))] + SHorizontalBox::Slot().AutoWidth()[SNew(STextBlock).Text(FText::AsNumber(Instance.CurrentPossibleExecutingTimes)).Font(FAppStyle::GetFontStyle("SmallFont")).ColorAndOpacity(Instance.CurrentPossibleExecutingTimes == 0 ? FLinearColor::Red : FLinearColor::White)]]]];
}

FText SDIY_PetMemoryDebugPanel::GetMemoryBaseInfoText() const
{
    if (!SelectedComponent.IsValid())
        return FText::FromString("No Pet Selected");

    const auto &Context = SelectedComponent->CurrentWorldContext;
    return FText::FromString(FString::Printf(TEXT(
                                                 "Soul: %s\n"
                                                 "Temp: %.1f | Humidity: %.1f\n"
                                                 "Affection: %.1f | Hour: %d\n"
                                                 "Flow Threshold: %.1f"),
                                             *SelectedComponent->DefaultSoul.ToString(),
                                             Context.Temperature, Context.Humidity,
                                             Context.UserAffection, Context.CurrentHour,
                                             SelectedComponent->BasicEnterFlowThreshold));
}

TSharedRef<ITableRow> SDIY_PetMemoryDebugPanel::OnGenerateRowForActor(TWeakObjectPtr<AActor> InActor,
                                                                      const TSharedRef<STableViewBase> &OwnerTable)
{
    FString ActorName = InActor.IsValid() ? InActor->GetName() : TEXT("Dead Actor");

    return SNew(STableRow<TWeakObjectPtr<AActor>>, OwnerTable)
        [SNew(STextBlock).Text(FText::FromString(ActorName))];
}