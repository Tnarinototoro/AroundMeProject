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

public:
    // Called every frame
    virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction) override;

    void RequestChangeUISectionVisibility(ESlateVisibility invisibility, EMainPlayerUISectionID SectionID);

    void RequestVisibility_BackPack(ESlateVisibility invisibility);
private:
    TArray<class UUserWidget *> mAllWidgets;
};
