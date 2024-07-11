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

public:
    // Called every frame
    virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction) override;

    void RequestChangeUISectionVisibility(ESlateVisibility invisibility, EMainPlayerUISectionID SectionID);

    // Music Player Funcs
    void RequestUpdateStateInfoText_MusicPlayer(const FText &inText);

    // BackPack Funcs
    void RequestVisibility_BackPack(ESlateVisibility invisibility);

    bool IsUISectionVisible(EMainPlayerUISectionID SectionID) const;
    bool RequestAddItemToBackPack(class AActor *inItem);
    // must has been in backpack
    void RequestMoveCurrentSelectedCursor(int inDeltaX, int inDeltaY, uint32 inStride = 1);
    void ToggleBackPackUI(bool inIsOpen);
    void SetRememberLastSelectedSlotCursorPos_WhenClosed(bool inBool) { RememberLastSelectedSlotCursorPos_WhenClosed = inBool; }
    bool GetRememberLastSelectedSlotCursorPos_WhenClosed() const { return RememberLastSelectedSlotCursorPos_WhenClosed; }

    void ToggleBackPackSlotSelected(uint32 inCol_x, uint32 inRow_y, bool isSelected);

private:
    TArray<class UUserWidget *> mAllWidgets;
    bool RememberLastSelectedSlotCursorPos_WhenClosed{false};
    // Pos Y
    int32 BackPack_CurrentSelectedSlot_Row_index{-1};
    // pos X
    int32 BackPack_CurrentSelectedSlot_Col_index{-1};

    // col_x and row_y must be in valid range
    void SelectBackPackSlotOn(uint32 col_x, uint32 row_y, bool is_multi_selecting = false);

    bool isBackPackPosInRange(int32 col_x, int32 row_y) const
    {

        return (col_x >= 0 && col_x < BackPack_GridColNum) && (BackPack_GridRowNum > row_y && row_y >= 0);
    }
    bool isCurrentSlectedSlotInRange() const { return isBackPackPosInRange(BackPack_CurrentSelectedSlot_Col_index, BackPack_CurrentSelectedSlot_Row_index); }

    TArray<FDIY_BackPackItemSlotInfo> StoredBackPackSlotItemInfo;

    TMap<int, int> ItemInfoHelperMap;

    int QuicklyFindBackPackItemSlotIndex_FromItemID(EItemID inItemID);
};
