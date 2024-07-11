#include "DIY_MainPlayerUIController.h"
#include "Blueprint/UserWidget.h"
#include "../../UIWidgets/DIY_ItemBackPackWidget.h"
#include "../../UIWidgets/DIY_PlatformServiceStateWidget.h"
#include "../../UIWidgets/DIY_MusicPlayerStateWidget.h"
#include "../../GameUtilities/Logs/DIY_LogHelper.h"
#include "../Items/DIY_Item.h"
#include "../../GameUtilities/DIY_Utilities.h"
#include "../Items/DIY_ItemManager.h"

UDIY_MainPlayerUIController::UDIY_MainPlayerUIController()
{
    mAllWidgets.Init(nullptr, (int32)EMainPlayerUISectionID::EMainPlayerUISectionID_Count);
}

void UDIY_MainPlayerUIController::BeginPlay()
{
    Super::BeginPlay();

    for (int type = 0; type < (int)EMainPlayerUISectionID::EMainPlayerUISectionID_Count; ++type)
    {
        switch (type)
        {
        case (int)EMainPlayerUISectionID::BackPack:
        {
            ensureMsgf(mAllWidgets[type] == nullptr, TEXT("BackPack widget has to be null firstly"));
            mAllWidgets[type] = CreateWidget(GetWorld(), UDIY_ItemBackPackWidget::StaticClass());
            UDIY_ItemBackPackWidget *item_backpack_widget = Cast<UDIY_ItemBackPackWidget>(mAllWidgets[type]);
            ensureMsgf(item_backpack_widget != nullptr, TEXT("UDIY_ItemBackPackWidget null"));

            item_backpack_widget->InitializeBackPack(BackPack_GridRowNum, BackPack_GridColNum, BackPack_SlotIconSize, BackPack_TextSlotFontSize);

            item_backpack_widget->SetAnchorsInViewport(FAnchors(BackPack_Anchors_InViewPort.X, BackPack_Anchors_InViewPort.Y));
            item_backpack_widget->SetAlignmentInViewport(BackPack_Align_InViewPort);

            // item_backpack_widget->SetDesiredSizeInViewport(FVector2D(300.0f, 300.0f));
            item_backpack_widget->AddToViewport(0);

            RequestVisibility_BackPack(ESlateVisibility::Hidden);

            break;
        }
        case (int)EMainPlayerUISectionID::DailyActivity:
        {

            break;
        }
        case (int)EMainPlayerUISectionID::PlatformService:
        {
            ensureMsgf(mAllWidgets[type] == nullptr, TEXT("PlatformService widget has to be null firstly"));
            mAllWidgets[type] = CreateWidget(GetWorld(), UDIY_PlatformServiceStateWidget::StaticClass());
            UDIY_PlatformServiceStateWidget *platform_widget = Cast<UDIY_PlatformServiceStateWidget>(mAllWidgets[type]);
            ensureMsgf(platform_widget != nullptr, TEXT("UDIY_PlatformServiceStateWidget null"));

            platform_widget->SetAnchorsInViewport(FAnchors(PlatformService_Anchors_InViewPort.X, PlatformService_Anchors_InViewPort.Y));
            platform_widget->SetAlignmentInViewport(PlatformService_Align_InViewPort);

            // item_backpack_widget->SetDesiredSizeInViewport(FVector2D(300.0f, 300.0f));
            platform_widget->AddToViewport(0);

            RequestChangeUISectionVisibility(ESlateVisibility::Visible, EMainPlayerUISectionID::PlatformService);
            break;
        }
        case (int)EMainPlayerUISectionID::MusicPlayerState:
        {
            ensureMsgf(mAllWidgets[type] == nullptr, TEXT("MusicPlayerStateWidget widget has to be null firstly"));
            mAllWidgets[type] = CreateWidget(GetWorld(), UDIY_MusicPlayerStateWidget::StaticClass());
            UDIY_MusicPlayerStateWidget *music_player_widget = Cast<UDIY_MusicPlayerStateWidget>(mAllWidgets[type]);
            ensureMsgf(music_player_widget != nullptr, TEXT("UDIY_MusicPlayerStateWidget null"));

            music_player_widget->SetAnchorsInViewport(FAnchors(MusicPlayer_Anchors_InViewPort.X, MusicPlayer_Anchors_InViewPort.Y));
            music_player_widget->SetAlignmentInViewport(MusicPlayer_Align_InViewPort);

            music_player_widget->InitMusicPlayerStateWidget(MusicPlayer_TextSlotFontSize);
            music_player_widget->AddToViewport(0);

            RequestChangeUISectionVisibility(ESlateVisibility::Visible, EMainPlayerUISectionID::MusicPlayerState);
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
            mAllWidgets[type]->MarkAsGarbage();
            mAllWidgets[type] = nullptr;
            break;
        }
        case (int)EMainPlayerUISectionID::DailyActivity:
        {

            break;
        }
        case (int)EMainPlayerUISectionID::PlatformService:
        {

            mAllWidgets[type]->RemoveFromParent();
            mAllWidgets[type]->MarkAsGarbage();
            mAllWidgets[type] = nullptr;
            break;
        }
        case (int)EMainPlayerUISectionID::MusicPlayerState:
        {

            mAllWidgets[type]->RemoveFromParent();
            mAllWidgets[type]->MarkAsGarbage();
            mAllWidgets[type] = nullptr;
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

void UDIY_MainPlayerUIController::RequestVisibility_BackPack(ESlateVisibility invisibility)
{
    UUserWidget *cur_widget = mAllWidgets[(int)EMainPlayerUISectionID::BackPack];
    ensureMsgf(nullptr != cur_widget, TEXT("back_pack widget is not valid"));
    if (invisibility != cur_widget->GetVisibility())
    {
        cur_widget->SetVisibility(invisibility);
    }
}

bool UDIY_MainPlayerUIController::IsUISectionVisible(EMainPlayerUISectionID SectionID) const
{
    return mAllWidgets[int(SectionID)]->IsVisible();
}

void UDIY_MainPlayerUIController::RequestMoveCurrentSelectedCursor(int inDeltaX, int inDeltaY, uint32 inStride)
{
    ensureMsgf(isBackPackPosInRange(BackPack_CurrentSelectedSlot_Col_index, BackPack_CurrentSelectedSlot_Row_index), TEXT("Current slot must be valid to move"));

    SelectBackPackSlotOn(
        FMath::Clamp<int32>(BackPack_CurrentSelectedSlot_Col_index + inStride * inDeltaX, 0, BackPack_GridColNum - 1),
        FMath::Clamp<int32>(BackPack_CurrentSelectedSlot_Row_index + inStride * inDeltaY, 0, BackPack_GridRowNum - 1));
}

void UDIY_MainPlayerUIController::RequestUpdateStateInfoText_MusicPlayer(const FText &inText)
{
    UDIY_MusicPlayerStateWidget *music_player_widget = Cast<UDIY_MusicPlayerStateWidget>(mAllWidgets[(int)EMainPlayerUISectionID::MusicPlayerState]);
    music_player_widget->UpdateText(inText);
}

void UDIY_MainPlayerUIController::ToggleBackPackUI(bool inIsOpen)
{
    bool is_back_pack_ui_opened = IsUISectionVisible(EMainPlayerUISectionID::BackPack);

    if (is_back_pack_ui_opened != inIsOpen)
    {
        if (inIsOpen)
        {
            RequestVisibility_BackPack(ESlateVisibility::Visible);

            if (RememberLastSelectedSlotCursorPos_WhenClosed)
            {
                if (isCurrentSlectedSlotInRange())
                {
                    SelectBackPackSlotOn(BackPack_CurrentSelectedSlot_Col_index, BackPack_CurrentSelectedSlot_Row_index);
                }
                else
                {
                    SelectBackPackSlotOn(0, 0);
                }
            }
            else
            {
                SelectBackPackSlotOn(0, 0);
            }
        }
        else
        {
            RequestVisibility_BackPack(ESlateVisibility::Hidden);

            ensureMsgf(isCurrentSlectedSlotInRange(), TEXT("is strange the slot invalid when closing backpack ui"));
            ToggleBackPackSlotSelected(BackPack_CurrentSelectedSlot_Col_index, BackPack_CurrentSelectedSlot_Row_index, false);
            if (!RememberLastSelectedSlotCursorPos_WhenClosed)
            {
                BackPack_CurrentSelectedSlot_Col_index = -1;
                BackPack_CurrentSelectedSlot_Row_index = -1;
            }
        }
    }
}

bool UDIY_MainPlayerUIController::RequestAddItemToBackPack(AActor *inItem)
{
    if (nullptr == inItem)
        return false;

    ADIY_ItemBase *current_item = Cast<ADIY_ItemBase>(inItem);

    if (nullptr == current_item)
        return false;
    EItemID current_item_id = current_item->GetItemID();
    int possible_already_existing_slot_index = QuicklyFindBackPackItemSlotIndex_FromItemID(current_item_id);

    // not existing
    if (possible_already_existing_slot_index < 0)
    {

        // less the max capacity so we can add it
        if (StoredBackPackSlotItemInfo.Num() < BackPack_GridColNum * BackPack_GridColNum)
        {
            StoredBackPackSlotItemInfo.Add(FDIY_BackPackItemSlotInfo(current_item_id, 1));
            int slot_index = StoredBackPackSlotItemInfo.Num() - 1;
            ItemInfoHelperMap.Add((int)current_item_id, slot_index);
            // change slot appearance
            UDIY_ItemBackPackWidget *item_backpack_widget = Cast<UDIY_ItemBackPackWidget>(mAllWidgets[(int)EMainPlayerUISectionID::BackPack]);
            int row_y = slot_index / BackPack_GridColNum;
            int col_x = slot_index % BackPack_GridColNum;

            item_backpack_widget->RequestChangeSlotCountText(row_y, col_x, FText::AsNumber(1));
            item_backpack_widget->RequestChangeSlotImage(row_y, col_x, UDIY_Utilities::DIY_GetItemManagerInstance()->GetItemIconTexture(int32(current_item_id)));
            UDIY_Utilities::DIY_GetItemManagerInstance()->RequestRecycleItem(current_item);
            return true;
        }
        else
        {
            // max can not add new items
            return false;
        }
    }
    else // already existing
    {
        int existing_row_y = possible_already_existing_slot_index / BackPack_GridColNum;
        int existing_col_x = possible_already_existing_slot_index % BackPack_GridColNum;

        UDIY_ItemBackPackWidget *item_backpack_widget = Cast<UDIY_ItemBackPackWidget>(mAllWidgets[(int)EMainPlayerUISectionID::BackPack]);
        FDIY_BackPackItemSlotInfo &cur_item_info = StoredBackPackSlotItemInfo[possible_already_existing_slot_index];
        ++cur_item_info.ItemCount;

        item_backpack_widget->RequestChangeSlotCountText(existing_row_y, existing_col_x, FText::AsNumber(cur_item_info.ItemCount));
        UDIY_Utilities::DIY_GetItemManagerInstance()->RequestRecycleItem(current_item);
        return true;
    }

    return false;
}

int UDIY_MainPlayerUIController::QuicklyFindBackPackItemSlotIndex_FromItemID(EItemID inItemID)
{
    int *slot_index = ItemInfoHelperMap.Find(int(inItemID));
    if (nullptr != slot_index)
    {
        return *slot_index;
    }
    return -1;
}
void UDIY_MainPlayerUIController::SelectBackPackSlotOn(uint32 col_x, uint32 row_y, bool is_multi_selecting)
{
    // not/no need to be implemented yet
    if (is_multi_selecting)
        return;
    ensureMsgf(isBackPackPosInRange(col_x, row_y) && IsUISectionVisible(EMainPlayerUISectionID::BackPack), TEXT("Selected slot is not in rang or back pack not opended"));
    if (col_x == BackPack_CurrentSelectedSlot_Col_index && BackPack_CurrentSelectedSlot_Row_index == row_y)
        return;

    // first selecting first oepning the backpack ui
    if (!isBackPackPosInRange(BackPack_CurrentSelectedSlot_Col_index, BackPack_CurrentSelectedSlot_Row_index))
    {
        ToggleBackPackSlotSelected(col_x, row_y, true);
    }
    else
    {

        ToggleBackPackSlotSelected(BackPack_CurrentSelectedSlot_Col_index, BackPack_CurrentSelectedSlot_Row_index, false);
        ToggleBackPackSlotSelected(col_x, row_y, true);
    }

    BackPack_CurrentSelectedSlot_Col_index = col_x;
    BackPack_CurrentSelectedSlot_Row_index = row_y;
}
void UDIY_MainPlayerUIController::ToggleBackPackSlotSelected(uint32 inCol_x, uint32 inRow_y, bool isSelected)
{
    UDIY_ItemBackPackWidget *item_backpack_widget = Cast<UDIY_ItemBackPackWidget>(mAllWidgets[(int)EMainPlayerUISectionID::BackPack]);
    ensureMsgf(item_backpack_widget != nullptr, TEXT("back_pack widget is not okay"));
    if (isSelected)
    {
        item_backpack_widget->RequestChangeSlotBorderColor(inRow_y, inCol_x, FColor::Cyan);
    }
    else
    {
        item_backpack_widget->RequestChangeSlotBorderColor(inRow_y, inCol_x, FLinearColor::Transparent);
    }
}