#include "DIY_MainPlayerUIController.h"
#include "Blueprint/UserWidget.h"
#include "../../UIWidgets/DIY_ItemBackPackWidget.h"
#include "../../UIWidgets/DIY_PlatformServiceStateWidget.h"
#include "../../UIWidgets/DIY_MusicPlayerStateWidget.h"
#include "../../UIWidgets/DIY_CraftingPlatformWidget.h"
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
        case (int)EMainPlayerUISectionID::ItemCraftingPlatform:
        {
            ensureMsgf(mAllWidgets[type] == nullptr, TEXT("ItemCraftingPlatform widget has to be null firstly"));
            mAllWidgets[type] = CreateWidget(GetWorld(), UDIY_CraftingPlatformWidget::StaticClass());
            UDIY_CraftingPlatformWidget *item_crafting_platform_widget = Cast<UDIY_CraftingPlatformWidget>(mAllWidgets[type]);
            ensureMsgf(item_crafting_platform_widget != nullptr, TEXT("UDIY_PlatformServiceStateWidget null"));
            item_crafting_platform_widget->InitializeItemCraftingPlatformWidget(ItemCraftingPlatform_GridRowMax_DisplayedNumLimit, ItemCraftingPlatform_GridRowNum, ItemCraftingPlatform_GridColNum, ItemCraftingPlatform_SlotIconSize, ItemCraftingPlatform_TextSlotFontSize);

            item_crafting_platform_widget->SetAnchorsInViewport(FAnchors(ItemCraftingPlatform_Anchors_InViewPort.X, ItemCraftingPlatform_Anchors_InViewPort.Y));
            item_crafting_platform_widget->SetAlignmentInViewport(ItemCraftingPlatform_Align_InViewPort);

            // item_backpack_widget->SetDesiredSizeInViewport(FVector2D(300.0f, 300.0f));
            item_crafting_platform_widget->AddToViewport(0);

            RequestChangeUISectionVisibility(ESlateVisibility::Hidden, EMainPlayerUISectionID::ItemCraftingPlatform);

            // ToggleCraftingPlatformUi(true);
            break;
        }

        default:
            break;
        }
    }

    ADIY_ItemManager::OnItemsNumInBackPack_Changed.AddUObject(this, &UDIY_MainPlayerUIController::OnItemBackPackNumChanged);
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
        case (int)EMainPlayerUISectionID::ItemCraftingPlatform:
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
    ADIY_ItemManager::OnItemsNumInBackPack_Changed.RemoveAll(this);
}
void UDIY_MainPlayerUIController::OnItemBackPackNumChanged(int32 itemID)
{

    int slot_index = *(ItemInfoHelperMap.Find((int)itemID));
    if (slot_index < 0)
        return;
    // change slot appearance
    UDIY_ItemBackPackWidget *item_backpack_widget = Cast<UDIY_ItemBackPackWidget>(mAllWidgets[(int)EMainPlayerUISectionID::BackPack]);
    int row_y = slot_index / BackPack_GridColNum;
    int col_x = slot_index % BackPack_GridColNum;

    item_backpack_widget->RequestChangeSlotCountText(row_y, col_x, FText::AsNumber(UDIY_Utilities::DIY_GetItemManagerInstance()->Get_ItemNumInBackPack_Statistics((EItemID)itemID)));

    item_backpack_widget->RequestVisibility_BackpackUI_CountText_At_Slot(row_y, col_x, ESlateVisibility::Visible);
    EASY_LOG_MAINPLAYER("OnItemBackPackNumChanged %d", itemID);
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
void UDIY_MainPlayerUIController::RequestVisibility_CraftingPlatform(ESlateVisibility invisibility)
{
    UUserWidget *cur_widget = mAllWidgets[(int)EMainPlayerUISectionID::ItemCraftingPlatform];
    ensureMsgf(nullptr != cur_widget, TEXT("ItemCraftingPlatform widget is not valid"));
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
bool UDIY_MainPlayerUIController::IsItemSubMenuShown() const
{
    UDIY_ItemBackPackWidget *item_backpack_widget = Cast<UDIY_ItemBackPackWidget>(mAllWidgets[(int)EMainPlayerUISectionID::BackPack]);
    ensureMsgf(nullptr != item_backpack_widget, TEXT("back_pack widget is not valid"));
    return item_backpack_widget->IsItemSubMenuShown_Impl();
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
            RequestHideItemSubMenu();
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

            // item_backpack_widget->RequestChangeSlotCountText(row_y, col_x, FText::AsNumber(1));
            EASY_LOG_MAINPLAYER("current item id %d added", current_item_id);
            item_backpack_widget->RequestChangeSlotImage(row_y, col_x, UDIY_Utilities::DIY_GetItemManagerInstance()->GetItemIconTexture(int32(current_item_id)));
            // item_backpack_widget->RequestVisibility_BackpackUI_CountText_At_Slot(row_y, col_x, ESlateVisibility::Visible);
            UDIY_Utilities::DIY_GetItemManagerInstance()->RequestRecycleItem(current_item);
            UDIY_Utilities::DIY_GetItemManagerInstance()->RequestChange_ItemNumInBackPack_Statistics(current_item_id, 1);
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

        // item_backpack_widget->RequestChangeSlotCountText(existing_row_y, existing_col_x, FText::AsNumber(cur_item_info.ItemCount));
        // item_backpack_widget->RequestVisibility_BackpackUI_CountText_At_Slot(existing_row_y, existing_col_x, ESlateVisibility::Visible);
        item_backpack_widget->RequestChangeSlotImage(existing_row_y, existing_col_x, UDIY_Utilities::DIY_GetItemManagerInstance()->GetItemIconTexture(int32(current_item_id)));
        UDIY_Utilities::DIY_GetItemManagerInstance()->RequestRecycleItem(current_item);
        UDIY_Utilities::DIY_GetItemManagerInstance()->RequestChange_ItemNumInBackPack_Statistics(current_item_id, 1);
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
    RequestHideItemSubMenu();
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
        // item_backpack_widget->ShowSubMenuAt(inRow_y,inCol_x);
    }
    else
    {
        item_backpack_widget->RequestChangeSlotBorderColor(inRow_y, inCol_x, FLinearColor::Transparent);
    }
}
int UDIY_MainPlayerUIController::GetBackPackItemCountAt(uint32 inCol_x, uint32 inRow_y)
{
    uint32 real_index = inRow_y * BackPack_GridColNum + inCol_x;

    if (real_index >= (uint32)StoredBackPackSlotItemInfo.Num())
        return 0;

    return StoredBackPackSlotItemInfo[real_index].ItemCount;
}
const FDIY_BackPackItemSlotInfo *UDIY_MainPlayerUIController::GetBackPackItemInfoAt(uint32 inCol_x, uint32 inRow_y) const
{
    uint32 real_index = inRow_y * BackPack_GridColNum + inCol_x;

    if (real_index >= (uint32)StoredBackPackSlotItemInfo.Num())
        return nullptr;

    return &StoredBackPackSlotItemInfo[real_index];
}
FDIY_BackPackItemSlotInfo *UDIY_MainPlayerUIController::GetBackPackItemInfoAt(uint32 inCol_x, uint32 inRow_y)
{
    uint32 real_index = inRow_y * BackPack_GridColNum + inCol_x;

    if (real_index >= (uint32)StoredBackPackSlotItemInfo.Num())
        return nullptr;

    return &StoredBackPackSlotItemInfo[real_index];
}
bool UDIY_MainPlayerUIController::IsBackPackUiOpened() const
{
    return IsUISectionVisible(EMainPlayerUISectionID::BackPack);
}
void UDIY_MainPlayerUIController::RequestShowItemSubMenu_AtCurrentSelectedSlot()
{
    UDIY_ItemBackPackWidget *item_backpack_widget = Cast<UDIY_ItemBackPackWidget>(mAllWidgets[(int)EMainPlayerUISectionID::BackPack]);
    ensureMsgf(item_backpack_widget != nullptr, TEXT("back_pack widget is not okay"));

    item_backpack_widget->ShowSubMenuAt(BackPack_CurrentSelectedSlot_Row_index, BackPack_CurrentSelectedSlot_Col_index);
    item_backpack_widget->RequestToggleSubMenuButtonAt(Item_Current_SubMenu_ChoosenIndex, false);
    Item_Current_SubMenu_ChoosenIndex = 0;
    item_backpack_widget->RequestToggleSubMenuButtonAt(Item_Current_SubMenu_ChoosenIndex, true);
}
void UDIY_MainPlayerUIController::RequestMoveSubMenuChoice(int MoveDelta, int inStride)
{
    if (!IsItemSubMenuShown())
        return;
    UDIY_ItemBackPackWidget *item_backpack_widget = Cast<UDIY_ItemBackPackWidget>(mAllWidgets[(int)EMainPlayerUISectionID::BackPack]);
    ensureMsgf(item_backpack_widget != nullptr, TEXT("back_pack widget is not okay"));
    int target_item_submenu_index = FMath::Clamp<int>(Item_Current_SubMenu_ChoosenIndex + (MoveDelta * inStride), 0, item_backpack_widget->GetItemSubMenuCommandsNum() - 1);
    if (target_item_submenu_index != Item_Current_SubMenu_ChoosenIndex)
    {
        item_backpack_widget->RequestToggleSubMenuButtonAt(Item_Current_SubMenu_ChoosenIndex, false);
        Item_Current_SubMenu_ChoosenIndex = target_item_submenu_index;
        item_backpack_widget->RequestToggleSubMenuButtonAt(Item_Current_SubMenu_ChoosenIndex, true);
    }
}
void UDIY_MainPlayerUIController::RequestHideItemSubMenu()
{
    UDIY_ItemBackPackWidget *item_backpack_widget = Cast<UDIY_ItemBackPackWidget>(mAllWidgets[(int)EMainPlayerUISectionID::BackPack]);
    ensureMsgf(item_backpack_widget != nullptr, TEXT("back_pack widget is not okay"));
    item_backpack_widget->HideSubMenu();
    item_backpack_widget->RequestToggleSubMenuButtonAt(Item_Current_SubMenu_ChoosenIndex, false);
}
void UDIY_MainPlayerUIController::ToggleItemSubMenuAtCurrentSelectedSlot()
{
    UDIY_ItemBackPackWidget *item_backpack_widget = Cast<UDIY_ItemBackPackWidget>(mAllWidgets[(int)EMainPlayerUISectionID::BackPack]);
    ensureMsgf(item_backpack_widget != nullptr, TEXT("back_pack widget is not okay"));

    int cur_slot_count = GetBackPackItemCountAt(BackPack_CurrentSelectedSlot_Col_index, BackPack_CurrentSelectedSlot_Row_index);
    if (cur_slot_count > 0)
    {
        if (IsItemSubMenuShown())
        {
            RequestHideItemSubMenu();
        }
        else
        {
            RequestShowItemSubMenu_AtCurrentSelectedSlot();
        }
    }
}

void UDIY_MainPlayerUIController::ExecuteCurrentItemSubMenuCommand()
{
    UDIY_ItemBackPackWidget *item_backpack_widget = Cast<UDIY_ItemBackPackWidget>(mAllWidgets[(int)EMainPlayerUISectionID::BackPack]);
    ensureMsgf(item_backpack_widget != nullptr, TEXT("back_pack widget is not okay"));
    EASY_LOG_MAINPLAYER("Q command executed!!!!!!!! %s", *item_backpack_widget->GetItemSubMenuCommandStringAt(Item_Current_SubMenu_ChoosenIndex));

    const FDIY_BackPackItemSlotInfo *cur_item_info = GetBackPackItemInfoAt(BackPack_CurrentSelectedSlot_Col_index, BackPack_CurrentSelectedSlot_Row_index);

    if (cur_item_info != nullptr && cur_item_info->ItemCount > 0)
    {
        AActor *player = GetOwner();

        FVector spawned_loc = player->GetActorLocation();
        //+ player->GetActorForwardVector().Normalize()*200.f;
        spawned_loc.Z += 100.0f;

        // DrawDebugLine(GetWorld(), player->GetActorLocation(), spawned_loc, FColor::Red, true, 2.0f, 0, 1.0f);
        UDIY_Utilities::DIY_GetItemManagerInstance()->RequestSpawnItem(cur_item_info->itemID, spawned_loc, {0.f, 0.f, 0.f});
    }
}

void UDIY_MainPlayerUIController::RequestMoveCurrentSelectedCursor_CraftingPlatform(int32 inDeltaX, int32 inDeltaY, uint32 inStride)
{
    ensureMsgf(isCraftingPlatformPosInValidRange(CraftingPlatform_CurrentSelectedCol, CraftingPlatform_CurrentSelectedRow), TEXT("Current slot must be valid to move"));

    int32 final_col_x = CraftingPlatform_CurrentSelectedCol + inStride * inDeltaX;
    int32 final_row_y = CraftingPlatform_CurrentSelectedRow + inStride * inDeltaY;
    ClampPlatformPoseToValid(final_col_x, final_row_y);
    SelectCraftingPlatformSlotOn(
        final_col_x,
        final_row_y);
}

void UDIY_MainPlayerUIController::ClampPlatformPoseToValid(int32 &col_x, int32 &row_y)
{
    int32 item_count = (int32)EItemID::EItemID_Count;

    int32 row_num = FMath::CeilToInt32(((float)EItemID::EItemID_Count) / ItemCraftingPlatform_GridColNum);
    col_x = FMath::Clamp<int32>(col_x, 0, ItemCraftingPlatform_GridColNum - 1);
    row_y = FMath::Clamp<int32>(row_y, 0, row_num - 1);

    if (row_y == row_num - 1)
    {
        col_x = FMath::Clamp<int32>(col_x, 0, (int32)EItemID::EItemID_Count % ItemCraftingPlatform_GridColNum - 1);
    }
}
void UDIY_MainPlayerUIController::UpdateScrollOffset_CraftingPlatform()
{
    UDIY_CraftingPlatformWidget *cur_crafting_widget = Cast<UDIY_CraftingPlatformWidget>(mAllWidgets[(int)EMainPlayerUISectionID::ItemCraftingPlatform]);
    if (cur_crafting_widget != nullptr)
    {

        cur_crafting_widget->RequestScrollOffset(CraftingPlatform_CurrentSelectedRow * ItemCraftingPlatform_SlotIconSize.Y);
    }
}
void UDIY_MainPlayerUIController::UpdateSelectionInfo_CraftingPlatform()
{
}

void UDIY_MainPlayerUIController::ToggleCraftingPlatformSlotSelected(uint32 inCol_x, uint32 inRow_y, bool isSelected)
{
    UDIY_CraftingPlatformWidget *item_crafting_widget = Cast<UDIY_CraftingPlatformWidget>(mAllWidgets[(int)EMainPlayerUISectionID::ItemCraftingPlatform]);
    ensureMsgf(item_crafting_widget != nullptr, TEXT("item_crafting_widget is not okay"));
    if (isSelected)
    {
        item_crafting_widget->RequestChangeSlotBorderColor(inRow_y, inCol_x, FColor::Cyan);
        // item_backpack_widget->ShowSubMenuAt(inRow_y,inCol_x);
    }
    else
    {
        item_crafting_widget->RequestChangeSlotBorderColor(inRow_y, inCol_x, FLinearColor::Transparent);
    }
}

void UDIY_MainPlayerUIController::ToggleCraftingPlatformUi(bool inIsOpen)
{
    bool is_crafting_platform_ui_opened = IsCraftingPlatformUiOpened();

    if (is_crafting_platform_ui_opened != inIsOpen)
    {
        if (inIsOpen)
        {
            RequestVisibility_CraftingPlatform(ESlateVisibility::Visible);
#if 0
 if (RememberLastSelectedSlotCursorPos_WhenClosed)
            {
                if (isCurrentSlectedSlotInRange_ItemCraftingPlatform())
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
#endif

            SelectCraftingPlatformSlotOn(0, 0);
        }
        else
        {
            RequestVisibility_CraftingPlatform(ESlateVisibility::Hidden);
            ensureMsgf(isCurrentSlectedSlotInRange_ItemCraftingPlatform(), TEXT("is strange the slot invalid when closing crafting item platform ui"));

            ToggleCraftingPlatformSlotSelected(CraftingPlatform_CurrentSelectedCol, CraftingPlatform_CurrentSelectedRow, false);
            CraftingPlatform_CurrentSelectedRow = -1;
            CraftingPlatform_CurrentSelectedCol = -1;
#if 0
 ensureMsgf(isCurrentSlectedSlotInRange(), TEXT("is strange the slot invalid when closing backpack ui"));
            ToggleBackPackSlotSelected(BackPack_CurrentSelectedSlot_Col_index, BackPack_CurrentSelectedSlot_Row_index, false);
            if (!RememberLastSelectedSlotCursorPos_WhenClosed)
            {
                BackPack_CurrentSelectedSlot_Col_index = -1;
                BackPack_CurrentSelectedSlot_Row_index = -1;
            }
            RequestHideItemSubMenu();
#endif
            Cast<UDIY_CraftingPlatformWidget>(mAllWidgets[(int)EMainPlayerUISectionID::ItemCraftingPlatform])->RequestUpdateShowConsoleWidget(false);
        }
    }
}
bool UDIY_MainPlayerUIController::IsCraftingPlatformUiOpened() const
{
    return IsUISectionVisible(EMainPlayerUISectionID::ItemCraftingPlatform);
}

void UDIY_MainPlayerUIController::SelectCraftingPlatformSlotOn(uint32 col_x, uint32 row_y, bool is_multi_selecting)
{
    // not/no need to be implemented yet
    if (is_multi_selecting)
        return;

    ensureMsgf(isCraftingPlatformPosInValidRange(col_x, row_y) && IsUISectionVisible(EMainPlayerUISectionID::ItemCraftingPlatform), TEXT("Selected slot is not in rang or ItemCraftingPlatform not opended"));
    if (col_x == CraftingPlatform_CurrentSelectedCol && CraftingPlatform_CurrentSelectedRow == row_y)
        return;

    // first selecting first oepning the backpack ui
    if (!isCraftingPlatformPosInValidRange(CraftingPlatform_CurrentSelectedCol, CraftingPlatform_CurrentSelectedRow))
    {
        ToggleCraftingPlatformSlotSelected(col_x, row_y, true);
    }
    else
    {

        ToggleCraftingPlatformSlotSelected(CraftingPlatform_CurrentSelectedCol, CraftingPlatform_CurrentSelectedRow, false);
        ToggleCraftingPlatformSlotSelected(col_x, row_y, true);
    }
    // RequestHideItemSubMenu();
    CraftingPlatform_CurrentSelectedCol = col_x;
    CraftingPlatform_CurrentSelectedRow = row_y;

    UpdateScrollOffset_CraftingPlatform();

    // platform process
    {
        UDIY_CraftingPlatformWidget *cur_crafting_platform_widget = Cast<UDIY_CraftingPlatformWidget>(mAllWidgets[(int)EMainPlayerUISectionID::ItemCraftingPlatform]);
        ensureMsgf(nullptr != cur_crafting_platform_widget, TEXT("cur_crafting_platform_widget is null"));
        cur_crafting_platform_widget->RequestUpdateShowConsoleWidget(true);

        cur_crafting_platform_widget->RequestChangeConsoleWidgetImage(UDIY_Utilities::DIY_GetItemManagerInstance()->GetItemIconTexture(row_y * ItemCraftingPlatform_GridColNum + col_x));
        FString final_Receipt_String{};
        int32 cur_item_id = row_y * ItemCraftingPlatform_GridColNum + col_x;

        FDIY_CraftingReceipt cur_receipt = UDIY_Utilities::DIY_GetItemManagerInstance()->GetReceiptFromItemID((EItemID)cur_item_id);
        final_Receipt_String += FString::Printf(TEXT("Target:%s \n"), *UEnum::GetValueAsString((EItemID)cur_item_id));

        bool okay_to_craft = true;
        for (const FDIY_CraftingReceipt_Element &cur_element : cur_receipt.InputElements)
        {
            int32 cur_element_req_num = cur_element.CurrentItemNumReq;
            int32 cur_element_existing_num = UDIY_Utilities::DIY_GetItemManagerInstance()->Get_ItemNumInBackPack_Statistics(cur_element.ItemID);
            final_Receipt_String += FString::Printf(TEXT("%s:(%d/%d)\n"), *UEnum::GetValueAsString(cur_element.ItemID), cur_element_existing_num, cur_element_req_num);

            if (cur_element_existing_num < cur_element_req_num)
                okay_to_craft = false;
        }
        if (cur_receipt.InputElements.Num() > 0)
        {
            final_Receipt_String += FString::Printf(TEXT("Coins:%d \n"), cur_receipt.ReqEtherEnergyCoinNum);
        }
        else
        {
            okay_to_craft = false;
        }

        cur_crafting_platform_widget->RequestUpdateConsoleWidgetReceiptText(final_Receipt_String);
        cur_crafting_platform_widget->RquestToggleCraftButtonEnable(okay_to_craft);
    }
}

EItemID UDIY_MainPlayerUIController::GetCurrentTargetCraftingItemID() const
{
    return (EItemID)(ItemCraftingPlatform_GridColNum * CraftingPlatform_CurrentSelectedRow + CraftingPlatform_CurrentSelectedCol);
}