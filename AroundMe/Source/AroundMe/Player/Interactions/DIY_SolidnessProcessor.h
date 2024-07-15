#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DIY_InteractionCommonInterFace.h"
#include "../Items/DIY_ItemDefines.h"
#include "DIY_SolidnessProcessor.generated.h"

UENUM(BlueprintType)
enum class ESolidnessState
{
    SS_Normal,
    // use chaos to be make it pieces
    SS_Pieces,
    // totally destroyed already, which means that it should be recycled by item manager
    SS_Destroyed,
    SS_Count
};

UCLASS(ClassGroup = (Player), meta = (BlueprintSpawnableComponent))
class AROUNDME_API UDIY_SolidnessProcessor : public UActorComponent, public IDIY_InteractionCommonInterFace
{
    GENERATED_BODY()

public:
    UDIY_SolidnessProcessor();

protected:
    // Called when the game starts
    virtual void BeginPlay() override;

public:
  
    // Called every frame
    virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction) override;

    virtual void OnInitWithConfigCopy(const FDIY_ItemDefualtConfig *inConfig) override;
    virtual void OnResetComponentValues() override;
    inline float GetFinal_Durability() const
    {
        return Final_Durability;
    }
    inline const ESolidnessState &GetCurrentState() const
    {
        return CurrentState;
    }
    inline const FDIY_SolidnessAttr &GetSolidNessAttrs() const
    {
        return solidness_attr;
    }
    // Solidness data and functions start <--------------------------------------------------------------------------------------------------------------------
    // those functions are only here for reference will be moved to actor level
    void AcceptDamage(float inDamage, float inDamageSphereNess);
    void GiveDamage(class AActor *inDamageTaker, float giveDamage);

protected:
    UPROPERTY(BlueprintReadOnly)
    float Final_Durability{0.f};

    UPROPERTY(BlueprintReadOnly)
    ESolidnessState CurrentState{ESolidnessState::SS_Normal};

private:
    // Solidness data and functions End -------------------------------------------------------------------------------------------------------------------->

    // Solidness Configs Start <--------------------------------------------------------------------------------------------------------------------

private:
    FDIY_SolidnessAttr solidness_attr;
    // Solidness Configs  End -------------------------------------------------------------------------------------------------------------------->
};