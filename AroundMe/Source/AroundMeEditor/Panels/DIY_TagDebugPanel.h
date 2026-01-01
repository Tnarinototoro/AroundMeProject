#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Widgets/SCompoundWidget.h"

class SDIY_TagDebugPanel : public SCompoundWidget
{
public:
    SLATE_BEGIN_ARGS(SDIY_TagDebugPanel) {}
    SLATE_END_ARGS()

    void Construct(const FArguments &InArgs);

    // 每一帧轮询选中物体
    virtual void Tick(const FGeometry &AllottedGeometry, const double InCurrentTime, const float InDeltaTime) override;
    void RefreshTagList(AActor *Actor);

private:
    TSharedPtr<SVerticalBox> TagListView;
    FText CurrentActorName;

    TWeakObjectPtr<AActor> LastSelectedActor;
    FGameplayTagContainer LastTagContainer;
};