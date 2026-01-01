#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DIY_MainPlayerUIDefines.h"
#include "DIY_MainPlayerUIController.generated.h"

UCLASS(ClassGroup = (Player), meta = (BlueprintSpawnableComponent))
class AROUNDME_API UDIY_MainPlayerUIController : public UActorComponent
{
    GENERATED_BODY()

public:
    UDIY_MainPlayerUIController();

protected:
    // Called when the game starts
    virtual void BeginPlay() override;
    virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "UI_BackPack")
    uint8 BackPack_GridRowNum{5};
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "UI_BackPack")
    uint8 BackPack_GridColNum{10};

    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "UI_BackPack")
    FVector2D BackPack_Anchors_InViewPort{0.5f, 0.f};
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "UI_BackPack")
    FVector2D BackPack_Align_InViewPort{0.5f, 0.f};

    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "UI_BackPack")
    FVector2D BackPack_SlotIconSize{100.0f, 100.0f};
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "UI_BackPack")
    float BackPack_TextSlotFontSize{20.0f};

    // Music player
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "UI_MusicPlayer")
    FVector2D MusicPlayer_Anchors_InViewPort{0.5f, 0.f};
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "UI_MusicPlayer")
    FVector2D MusicPlayer_Align_InViewPort{0.5f, 0.f};

    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "UI_MusicPlayer")
    FVector2D MusicPlayer_SlotIconSize{100.0f, 100.0f};
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "UI_MusicPlayer")
    float MusicPlayer_TextSlotFontSize{20.0f};

    // PlatformService
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "UI_PlatformService")
    FVector2D PlatformService_Anchors_InViewPort{0.5f, 0.f};
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "UI_PlatformService")
    FVector2D PlatformService_Align_InViewPort{0.5f, 0.f};

    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "UI_PlatformService")
    FVector2D PlatformService_SlotIconSize{100.0f, 100.0f};
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "UI_PlatformService")
    float PlatformService_TextSlotFontSize{20.0f};

    // ItemCraftingPlatform

    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "UI_ItemCraftingPlatform")
    uint8 ItemCraftingPlatform_GridColNum{10};
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "UI_ItemCraftingPlatform")
    uint8 ItemCraftingPlatform_GridRowNum{20};
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "UI_ItemCraftingPlatform")
    uint8 ItemCraftingPlatform_GridRowMax_DisplayedNumLimit{5};

    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "UI_ItemCraftingPlatform")
    FVector2D ItemCraftingPlatform_Anchors_InViewPort{0.5f, 0.f};
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "UI_ItemCraftingPlatform")
    FVector2D ItemCraftingPlatform_Align_InViewPort{0.5f, 0.f};

    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "UI_ItemCraftingPlatform")
    FVector2D ItemCraftingPlatform_SlotIconSize{100.0f, 100.0f};
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "UI_ItemCraftingPlatform")
    float ItemCraftingPlatform_TextSlotFontSize{20.0f};

    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "UI_ItemCraftingPlatform")
    FVector2D ItemCraftingPlatform_Console_IconSize{100.0f, 300.0f};
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "UI_ItemCraftingPlatform")
    float ItemCraftingPlatform_Console_TextSlotFontSize{20.0f};

public:
    // Called every frame
    virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction) override;

    // common funcs

    void RequestChangeUISectionVisibility(ESlateVisibility invisibility, EMainPlayerUISectionID SectionID);
    bool IsUISectionVisible(EMainPlayerUISectionID SectionID) const;

    // Music Player Funcs
    void RequestUpdateStateInfoText_MusicPlayer(const FText &inText);

    // BackPack Funcs
    void RequestVisibility_BackPack(ESlateVisibility invisibility);
    bool RequestAddItemToBackPack(class AActor *inItem);
    // must has been in backpack
    void RequestMoveCurrentSelectedCursor(int inDeltaX, int inDeltaY, uint32 inStride = 1);
    void ToggleBackPackUI(bool inIsOpen);
    void SetRememberLastSelectedSlotCursorPos_WhenClosed(bool inBool) { RememberLastSelectedSlotCursorPos_WhenClosed = inBool; }
    bool GetRememberLastSelectedSlotCursorPos_WhenClosed() const { return RememberLastSelectedSlotCursorPos_WhenClosed; }
    bool IsBackPackUiOpened() const;
    void ToggleBackPackSlotSelected(uint32 inCol_x, uint32 inRow_y, bool isSelected);
    int GetBackPackItemCountAt(uint32 inCol_x, uint32 inRow_y);
    const FDIY_BackPackItemSlotInfo *GetBackPackItemInfoAt(uint32 inCol_x, uint32 inRow_y) const;
    FDIY_BackPackItemSlotInfo *GetBackPackItemInfoAt(uint32 inCol_x, uint32 inRow_y);

    // item sub menu funcs
    void RequestShowItemSubMenu_AtCurrentSelectedSlot();
    void RequestMoveSubMenuChoice(int MoveDelta, int inStride = 1);
    void RequestHideItemSubMenu();
    bool IsItemSubMenuShown() const;
    void ToggleItemSubMenuAtCurrentSelectedSlot();
    void ExecuteCurrentItemSubMenuCommand();

    // crafting platform ui funcs
    void RequestMoveCurrentSelectedCursor_CraftingPlatform(int32 DeltaX, int32 DeltaY, uint32 Stride = 1);
    void UpdateScrollOffset_CraftingPlatform();
    void UpdateSelectionInfo_CraftingPlatform();
    void ToggleCraftingPlatformUi(bool inIsOpen);
    void ToggleCraftingPlatformSlotSelected(uint32 inCol_x, uint32 inRow_y, bool isSelected);
    bool IsCraftingPlatformUiOpened() const;
    void RequestVisibility_CraftingPlatform(ESlateVisibility invisibility);
    FPrimaryAssetId GetCurrentTargetCraftingItemID() const;

private:
    TArray<class UUserWidget *> mAllWidgets;
    bool RememberLastSelectedSlotCursorPos_WhenClosed{false};
    // Pos Y
    int32 BackPack_CurrentSelectedSlot_Row_index{-1};
    // pos X
    int32 BackPack_CurrentSelectedSlot_Col_index{-1};

    uint32 Item_Current_SubMenu_ChoosenIndex{0};

    int32 ItemTolTalNumber{-1};

    // col_x and row_y must be in valid range
    void SelectBackPackSlotOn(uint32 col_x, uint32 row_y, bool is_multi_selecting = false);
    void SelectCraftingPlatformSlotOn(uint32 col_x, uint32 row_y, bool is_multi_selecting = false);

    bool isBackPackPosInRange(int32 col_x, int32 row_y) const
    {

        return (col_x >= 0 && col_x < BackPack_GridColNum) && (BackPack_GridRowNum > row_y && row_y >= 0);
    }

    bool isCraftingPlatformPosInValidRange(int32 col_x, int32 row_y) const;

    void ClampPlatformPoseToValid(int32 &col_x, int32 &row_y);
    bool isCurrentSlectedSlotInRange() const { return isBackPackPosInRange(BackPack_CurrentSelectedSlot_Col_index, BackPack_CurrentSelectedSlot_Row_index); }

    bool isCurrentSlectedSlotInRange_ItemCraftingPlatform() const { return isCraftingPlatformPosInValidRange(CraftingPlatform_CurrentSelectedCol, CraftingPlatform_CurrentSelectedRow); }
    TArray<FDIY_BackPackItemSlotInfo> StoredBackPackSlotItemInfo;

    TMap<FPrimaryAssetId, int> ItemInfoHelperMap;

    TArray<FPrimaryAssetId> AllCachedItemIDs;

    int QuicklyFindBackPackItemSlotIndex_FromItemID(FPrimaryAssetId InItemID);

    int32 CraftingPlatform_CurrentSelectedRow{-1};
    int32 CraftingPlatform_CurrentSelectedCol{-1};

    bool need_change_crafting_item_info{false};

    void OnItemBackPackNumChanged(FPrimaryAssetId InItemID);
};
