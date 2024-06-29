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
    uint8 BackPack_GridRowNum{3};
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "UI_BackPack")
    uint8 BackPack_GridColNum{3};

    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "UI_BackPack")
    FVector2D BackPack_Anchors_InViewPort{0.2f, 0.5f};
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "UI_BackPack")
    FVector2D BackPack_Align_InViewPort{0.5f, 0.5f};

public:
    // Called every frame
    virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction) override;

    void RequestChangeUISectionVisibility(ESlateVisibility invisibility, EMainPlayerUISectionID SectionID);

private:
    TArray<class UUserWidget *> mAllWidgets;
};
