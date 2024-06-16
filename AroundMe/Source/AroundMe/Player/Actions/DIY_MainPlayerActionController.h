#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DIY_AcitonDefines.h"
#include "AroundMe/Player/Items/DIY_ItemDefines.h"
#include "DIY_MainPlayerActionController.generated.h"

UCLASS(ClassGroup = (Player), meta = (BlueprintSpawnableComponent))
class AROUNDME_API UDIY_MainPlayerActionController : public UActorComponent
{
    GENERATED_BODY()

public:
    // 设置默认值
    UDIY_MainPlayerActionController();

    UPROPERTY(BlueprintReadOnly)
    FRotator InitRotator;

    UPROPERTY(BlueprintReadOnly)
    FVector InitWorldPosition;

protected:
    // Called when the game starts
    virtual void BeginPlay() override;
    void UpdateParams(float inDelta);
    void UpdateStateMachine(float inDelta);
    bool HasImpulseTask{false};
    FVector PulseVec{0.0f, 0.f, 0.f};
    void SetCollisionProfileName_Recursively(class USceneComponent *inFirstCompo, FName InCollisionProfileName);
    void SetCollisionEnabled_Recursively(class USceneComponent *inFirstCompo, ECollisionEnabled::Type NewType);
    void SetSimulatePhysics_Recursively(class USceneComponent *inFirstCompo, bool inEnable);

public:
    void ProcessJumpInput();
    // Called every frame
    virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction) override;

    void PicUpDetectedItem(class AActor *inActor, FName SocketName);

    void PlacePickedUpItem();

    UPROPERTY(BlueprintReadWrite, Category = "DIY_MainPlayerActionController")
    EMainPlayerActingStateType CurrentActingState{EMainPlayerActingStateType::State_Base_Motion};
    UPROPERTY(BlueprintReadWrite, Category = "DIY_MainPlayerActionController")
    bool CraftSuccessSign{false};

    UPROPERTY(BlueprintReadWrite, Category = "DIY_MainPlayerActionController")
    AActor *PickUpedActor{nullptr};

    UPROPERTY(BlueprintReadWrite, Category = "DIY_MainPlayerActionController")
    float mActingRate{0.0f};

    UPROPERTY(BlueprintReadWrite, Category = "DIY_MainPlayerActionController")
    float mSpeedRate{0.0f};

    UPROPERTY(BlueprintReadWrite, Category = "DIY_MainPlayerActionController")
    FDIY_ItemDataTableRow mCurrentReceipt;

private:
    // 0--> physics   1---> pickup state no phy no collision  -1 no need to do any thing
    int TargetPhysicsState{-1};
};
