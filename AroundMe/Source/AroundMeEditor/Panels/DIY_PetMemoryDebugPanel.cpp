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
#include "UObject/StructOnScope.h" // 必须包含这个头文件
#include "Widgets/Input/SSlider.h" // <--- 修复 C2065 错误的关键
void SDIY_PetMemoryDebugPanel::Construct(const FArguments &InArgs)
{
    // 1. 初始化模块
    FPropertyEditorModule &EditModule = FModuleManager::Get().LoadModuleChecked<FPropertyEditorModule>("PropertyEditor");

    // 配置主面板：显示 Component 基础状态 (Soul, Context等)
    FDetailsViewArgs MainDetailsArgs;
    MainDetailsArgs.bAllowSearch = true;
    MainDetailsArgs.bHideSelectionTip = true;
    MainDetailsArgs.bUpdatesFromSelection = false;
    MainDetailsArgs.bShowOptions = false;
    DetailsView = EditModule.CreateDetailView(MainDetailsArgs);

    // 2. 构建整个面板布局
    ChildSlot
        [SNew(SHorizontalBox)

         // --- 左侧：列表与全局控制区 (占 25%) ---
         + SHorizontalBox::Slot()
               .FillWidth(0.25f)
               .Padding(5)
                   [SNew(SVerticalBox)

                    // Actor 列表标题
                    + SVerticalBox::Slot().AutoHeight().Padding(0, 0, 0, 5)
                          [SNew(STextBlock).Text(FText::FromString("Pet Instances:")).Font(FAppStyle::GetFontStyle("BoldFont"))]

                    // Actor 列表
                    + SVerticalBox::Slot().FillHeight(1.0f)
                          [SAssignNew(ActorListView, SListView<TWeakObjectPtr<AActor>>)
                               .ListItemsSource(&FoundActors)
                               .OnGenerateRow(this, &SDIY_PetMemoryDebugPanel::OnGenerateRowForActor)
                               .OnSelectionChanged(this, &SDIY_PetMemoryDebugPanel::OnActorSelectionChanged)]

                    // --- 底部控制区：调节所有卡片的大小 ---
                    + SVerticalBox::Slot().AutoHeight().Padding(0, 10, 0, 0)
                          [SNew(SBorder)
                               .BorderImage(FAppStyle::GetBrush("ToolPanel.GroupBorder"))
                               .Padding(8)
                                   [SNew(SVerticalBox) + SVerticalBox::Slot().AutoHeight().Padding(0, 0, 0, 4)[SNew(STextBlock).Text(FText::FromString("Card Size Scaling:")).Font(FAppStyle::GetFontStyle("SmallFontBold"))] + SVerticalBox::Slot().AutoHeight()[SNew(SSlider).Value(1.0f) // 默认 1.0
                                                                                                                                                                                                                                                                      .MinValue(0.5f)
                                                                                                                                                                                                                                                                      .MaxValue(2.5f)
                                                                                                                                                                                                                                                                      .OnValueChanged_Lambda([this](float NewValue)
                                                                                                                                                                                                                                                                                             {
                                                                                                                                                                                                                                                                                                 // 这是一个保存信息的快捷方式，建议在头文件定义 float CardScale = 1.0f;
                                                                                                                                                                                                                                                                                                 this->CardScale = NewValue;
                                                                                                                                                                                                                                                                                                 this->RebuildMemoryWidgets(); // 拖动时立即重绘所有卡片
                                                                                                                                                                                                                                                                                             })]]]]

         // --- 右侧：内容详情与扑克牌区 (占 75%) ---
         + SHorizontalBox::Slot().FillWidth(0.75f).Padding(5)[SNew(SVerticalBox)

                                                              // A. 顶部：组件详情面板 (只显示 Component 属性)
                                                              + SVerticalBox::Slot().AutoHeight().MaxHeight(250.0f).Padding(0, 0, 0, 10)[SNew(SBorder).BorderImage(FAppStyle::GetBrush("ToolPanel.GroupBorder"))[DetailsView.ToSharedRef()]]

                                                              // B. 底部：记忆扑克牌滚动区
                                                              + SVerticalBox::Slot().FillHeight(1.0f)[SNew(SScrollBox).Orientation(Orient_Vertical)

                                                                                                      + SScrollBox::Slot()[SNew(SVerticalBox)

                                                                                                                           // Working Stack 区域
                                                                                                                           + SVerticalBox::Slot().AutoHeight().Padding(0, 5)[SNew(STextBlock).Text(FText::FromString("--- Working Stack (Memory) ---")).Font(FAppStyle::GetFontStyle("BoldFont")).ColorAndOpacity(FLinearColor(0.4f, 0.4f, 0.4f, 1.0f))] + SVerticalBox::Slot().AutoHeight()[SAssignNew(WorkingStackBox, SWrapBox).UseAllottedSize(true).InnerSlotPadding(FVector2D(12, 12))]

                                                                                                                           // Daily Pool 区域
                                                                                                                           + SVerticalBox::Slot().AutoHeight().Padding(0, 20, 0, 5)[SNew(STextBlock).Text(FText::FromString("--- Daily Task Pool ---")).Font(FAppStyle::GetFontStyle("BoldFont")).ColorAndOpacity(FLinearColor(0.4f, 0.4f, 0.4f, 1.0f))] + SVerticalBox::Slot().AutoHeight()[SAssignNew(DailyPoolBox, SWrapBox).UseAllottedSize(true).InnerSlotPadding(FVector2D(12, 12))]]]]];
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
void SDIY_PetMemoryDebugPanel::OnCardScaleChanged(float NewValue)
{
    CardScale = FMath::Clamp(NewValue, 0.5f, 2.0f);
    RebuildMemoryWidgets(); // 改变大小时立即触发重建
}
void SDIY_PetMemoryDebugPanel::RebuildMemoryWidgets()
{
    // 安全检查：如果选中的组件已经失效（比如切换了地图），直接清空并返回
    if (!SelectedComponent.IsValid())
    {
        if (WorkingStackBox.IsValid())
            WorkingStackBox->ClearChildren();
        if (DailyPoolBox.IsValid())
            DailyPoolBox->ClearChildren();
        return;
    }

    WorkingStackBox->ClearChildren();
    DailyPoolBox->ClearChildren();

    // 1. 构建 Working Stack 卡片 (扑克牌样式)
    const auto &Stack = SelectedComponent->WorkingStack;
    for (int32 i = Stack.Num() - 1; i >= 0; --i)
    {
        // 只有数组索引合法时才创建
        if (Stack.IsValidIndex(i))
        {
            WorkingStackBox->AddSlot()
                [CreateRoutineCard(Stack[i], (i == Stack.Num() - 1))];
        }
    }

    // 2. 构建 Daily Pool 卡片
    for (const auto &Instance : SelectedComponent->DailyTaskPool)
    {
        DailyPoolBox->AddSlot()
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

        // 核心功能：更新细节面板显示的对象
        if (DetailsView.IsValid())
        {
            // 如果 SelectedComponent 是有效的 UObject，面板会自动解析它的 UPROPERTY
            DetailsView->SetObject(SelectedComponent.Get());
        }

        // 镜头聚焦逻辑
        TArray<AActor *> ActorsToFocus;
        ActorsToFocus.Add(ActorPtr);
        GEditor->MoveViewportCamerasToActor(ActorsToFocus, false);

        // 强制立即刷新一次 UI
        RebuildMemoryWidgets();
    }
}

TSharedRef<SWidget> SDIY_PetMemoryDebugPanel::CreateRoutineCard(const FDIY_RoutineInstance &Instance, bool bIsActive)
{
    FPropertyEditorModule &EditModule = FModuleManager::Get().LoadModuleChecked<FPropertyEditorModule>("PropertyEditor");

    FDetailsViewArgs CardViewArgs;
    CardViewArgs.bAllowSearch = false;
    CardViewArgs.bHideSelectionTip = true;
    CardViewArgs.bShowOptions = false;
    CardViewArgs.NameAreaSettings = FDetailsViewArgs::HideNameArea;
    CardViewArgs.ColumnWidth = 0.5f;

    // 1. 创建 [实时实例数据] 详情 (Structure)
    TSharedPtr<IStructureDetailsView> StructView = EditModule.CreateStructureDetailView(CardViewArgs, FStructureDetailsViewArgs(), nullptr);
    TSharedPtr<FStructOnScope> StructData = MakeShared<FStructOnScope>(FDIY_RoutineInstance::StaticStruct(), (uint8 *)&Instance);
    StructView->SetStructureData(StructData);

    // 2. 创建 [原始资源数据] 详情 (UObject)
    TSharedPtr<IDetailsView> AssetDetailsView = EditModule.CreateDetailView(CardViewArgs);

    // --- 核心修复：使用 AssetManager 获取资源对象 ---
    if (Instance.OriginalRoutineAssetID.IsValid())
    {
        // 1. 先尝试快速从缓存获取 (不涉及磁盘 IO)
        UDIY_PetRoutineAsset *AssetObj = UAssetManager::Get().GetPrimaryAssetObject<UDIY_PetRoutineAsset>(Instance.OriginalRoutineAssetID);

        // 2. 如果缓存中没有，则进行真正的同步加载
        if (!AssetObj)
        {
            // 在编辑器环境下，这会同步加载资源到内存
            FSoftObjectPath AssetPath = UAssetManager::Get().GetPrimaryAssetPath(Instance.OriginalRoutineAssetID);
            AssetObj = Cast<UDIY_PetRoutineAsset>(AssetPath.TryLoad());
        }

        if (AssetObj)
        {
            AssetDetailsView->SetObject(AssetObj);
        }
    }

    // --- 3. 颜色定义 (修复 Subtitle 报错) ---
    FLinearColor CardBgColor = bIsActive ? FLinearColor(0.01f, 0.12f, 0.02f, 1.0f) : FLinearColor(0.02f, 0.02f, 0.02f, 1.0f);
    FLinearColor BorderColor = bIsActive ? FLinearColor::Green : FLinearColor(0.08f, 0.08f, 0.08f, 1.0f);
    FLinearColor HeaderTextColor = bIsActive ? FLinearColor::White : FLinearColor(0.5f, 0.5f, 0.5f, 1.0f);

    return SNew(SBox)
        .WidthOverride(240.0f * CardScale)
        .HeightOverride(380.0f * CardScale)
            [SNew(SBorder)
                 .BorderImage(FAppStyle::GetBrush("Graph.Node.Body"))
                 .BorderBackgroundColor(CardBgColor)
                 .Padding(2.0f)
                     [SNew(SBorder)
                          .BorderImage(FAppStyle::GetBrush("PaneBorder"))
                          .BorderBackgroundColor(BorderColor)
                          .Padding(4.0f)
                              [SNew(SVerticalBox)

                               // 卡片标题：Routine Tag
                               + SVerticalBox::Slot().AutoHeight().Padding(0, 2, 0, 6)
                                     [SNew(STextBlock)
                                          .Text(FText::FromName(Instance.RoutineTag.GetTagName()))
                                          .Font(FAppStyle::GetFontStyle("BoldFont"))
                                          .ColorAndOpacity(HeaderTextColor)
                                          .Justification(ETextJustify::Center)]

                               // 滚动内容区
                               + SVerticalBox::Slot().FillHeight(1.0f)
                                     [SNew(SScrollBox) + SScrollBox::Slot()
                                                             [SNew(SVerticalBox)

                                                              // 第一部分：实时运行数据 (RUNTIME)
                                                              + SVerticalBox::Slot().AutoHeight().Padding(0, 5, 0, 2)
                                                                    [SNew(STextBlock).Text(FText::FromString(">> RUNTIME DATA")).Font(FAppStyle::GetFontStyle("SmallFontBold")).ColorAndOpacity(FLinearColor::Yellow)] +
                                                              SVerticalBox::Slot().AutoHeight()
                                                                  [StructView->GetWidget().ToSharedRef()]

                                                              // 第二部分：原始资源详情 (SOURCE)
                                                              + SVerticalBox::Slot().AutoHeight().Padding(0, 12, 0, 2)
                                                                    [SNew(STextBlock).Text(FText::FromString(">> SOURCE ASSET")).Font(FAppStyle::GetFontStyle("SmallFontBold")).ColorAndOpacity(FLinearColor(0.5f, 0.8f, 1.0f, 1.0f)) // 淡蓝色
    ] + SVerticalBox::Slot().AutoHeight()[AssetDetailsView.ToSharedRef()]]]]]];
}

TSharedRef<ITableRow> SDIY_PetMemoryDebugPanel::OnGenerateRowForActor(TWeakObjectPtr<AActor> InActor,
                                                                      const TSharedRef<STableViewBase> &OwnerTable)
{
    FString ActorName = InActor.IsValid() ? InActor->GetName() : TEXT("Dead Actor");

    return SNew(STableRow<TWeakObjectPtr<AActor>>, OwnerTable)
        [SNew(STextBlock).Text(FText::FromString(ActorName))];
}