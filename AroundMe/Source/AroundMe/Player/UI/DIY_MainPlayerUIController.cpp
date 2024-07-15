#include "DIY_MainPlayerUIController.h"
#include "Blueprint/UserWidget.h"
#include "../../UIWidgets/DIY_ItemBackPackWidget.h"

UDIY_MainPlayerUIController::UDIY_MainPlayerUIController()
{
}

void UDIY_MainPlayerUIController::BeginPlay()
{
    Super::BeginPlay();

    mAllWidgets.Init(nullptr, (int32)EMainPlayerUISectionID::EMainPlayerUISectionID_Count);

    for (int type = 0; type < (int)EMainPlayerUISectionID::EMainPlayerUISectionID_Count; ++type)
    {
        switch (type)
        {
        case (int)EMainPlayerUISectionID::BackPack:
        {
            mAllWidgets[type] = CreateWidget(GetWorld(), UDIY_ItemBackPackWidget::StaticClass());
            UDIY_ItemBackPackWidget *item_backpack_widget = Cast<UDIY_ItemBackPackWidget>(mAllWidgets[type]);
            ensureMsgf(item_backpack_widget != nullptr, TEXT("UDIY_ItemBackPackWidget null"));

            item_backpack_widget->InitializeBackPack(BackPack_GridRowNum, BackPack_GridColNum);

            item_backpack_widget->SetAnchorsInViewport(FAnchors(BackPack_Anchors_InViewPort.X, BackPack_Anchors_InViewPort.Y));
            item_backpack_widget->SetAlignmentInViewport(BackPack_Align_InViewPort);

            // item_backpack_widget->SetDesiredSizeInViewport(FVector2D(300.0f, 300.0f));
            item_backpack_widget->AddToViewport(0);

            RequestChangeUISectionVisibility(ESlateVisibility::Visible, EMainPlayerUISectionID::BackPack);

            break;
        }
        case (int)EMainPlayerUISectionID::DailyActivity:
        {

            break;
        }
        default:
            break;
        }
    }
}

void UDIY_MainPlayerUIController::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
    Super::EndPlay(EndPlayReason);

    ensureMsgf(mAllWidgets.Num() == (int32)EMainPlayerUISectionID::EMainPlayerUISectionID_Count, TEXT("Widgets num not right please contact PG"));
    for (int type = 0; type < (int)EMainPlayerUISectionID::EMainPlayerUISectionID_Count; ++type)
    {
        switch (type)
        {
        case (int)EMainPlayerUISectionID::BackPack:
        {
            mAllWidgets[type]->RemoveFromParent();
            mAllWidgets[type] = nullptr;
            break;
        }
        case (int)EMainPlayerUISectionID::DailyActivity:
        {

            break;
        }
        default:
            break;
        }
    }
}

void UDIY_MainPlayerUIController::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction)
{
    Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

void UDIY_MainPlayerUIController::RequestChangeUISectionVisibility(ESlateVisibility invisibility, EMainPlayerUISectionID SectionID)
{
    uint32 sec_id = (uint32)SectionID;
    if (sec_id >= (uint32)EMainPlayerUISectionID::EMainPlayerUISectionID_Count)
        return;
    UUserWidget *cur_widget = mAllWidgets[int(SectionID)];

    if (nullptr != cur_widget)
    {
        cur_widget->SetVisibility(invisibility);
    }
}
