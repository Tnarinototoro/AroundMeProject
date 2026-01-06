#pragma once
#include "CoreMinimal.h"
#include "AroundMe/AI/DIY_MainPet_Defines.h"
#include "AroundMe/AI/DIY_PetMemoryComponent.h"
#include "Widgets/SCompoundWidget.h"
#include "IDetailsView.h"            // 包含头文件
#include "Widgets/Layout/SWrapBox.h" // <--- 必须添加这个
#include "IStructureDetailsView.h"
/** AI 调试面板：监控 MemoryComponent 状态 */
class SDIY_PetMemoryDebugPanel : public SCompoundWidget
{
public:
    SLATE_BEGIN_ARGS(SDIY_PetMemoryDebugPanel) {}
    SLATE_END_ARGS()

    void Construct(const FArguments &InArgs);

    // 每帧刷新，用于实时更新运行时的内存数值
    virtual void Tick(const FGeometry &AllottedGeometry, const double InCurrentTime, const float InDeltaTime) override;
    float GetCardScale() const { return CardScale; }
    void OnCardScaleChanged(float NewValue);

private:
    /** 刷新左侧 Actor 列表 */
    void RefreshActorList();

    /** 当列表项被点击：跳转相机并记录选中组件 */
    void OnActorSelectionChanged(AActor *InActor, ESelectInfo::Type SelectInfo);

    /** 生成列表行 */
    TSharedRef<ITableRow> OnGenerateRowForActor(TWeakObjectPtr<AActor> InActor, const TSharedRef<STableViewBase> &OwnerTable);

    TSharedRef<SWidget> CreateRoutineCard(const FDIY_RoutineInstance &Instance, bool bIsActive);
    /** 当列表项被点击 */
    void OnActorSelectionChanged(TWeakObjectPtr<AActor> InActor, ESelectInfo::Type SelectInfo);

    // 细节面板组件
    TSharedPtr<IDetailsView> DetailsView;

private:
    /** 数据源：场景中所有带 MemoryComponent 的 Actor */
    /** 修改点：使用弱指针数组，防止阻止 GC 销毁世界 */
    TArray<TWeakObjectPtr<AActor>> FoundActors;

    /** 修改点：列表控件也需要同步修改模板参数 */
    TSharedPtr<SListView<TWeakObjectPtr<AActor>>> ActorListView;

    /** 当前选中的组件 */
    TWeakObjectPtr<UDIY_PetMemoryComponent> SelectedComponent;

    /** 刷新计时器，不必每帧搜寻 Actor，每秒搜一次即可 */
    float NextRefreshSearchTime = 0.0f;

    TSharedPtr<SWrapBox> WorkingStackBox;
    TSharedPtr<SWrapBox> DailyPoolBox;

    int32 LastStackCount, LastPoolCount = -1;
    FName LastActiveTag = NAME_None;

    float CardScale = 1.0f; // 缩放比例
    float BaseCardWidth = 240.0f;
    float BaseCardHeight = 360.0f;

    void RebuildMemoryWidgets();
};