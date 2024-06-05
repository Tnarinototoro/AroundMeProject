#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DIY_InteractionCommonInterFace.h"
#include "DIY_SolidnessProcessor.generated.h"

UCLASS(ClassGroup=(Player), meta=(BlueprintSpawnableComponent))
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
    virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

    virtual void OnInitWithConfigCopy(const FDIY_ItemDefualtConfig* inConfig) override;
    
    inline float GetFinal_Durability() const 
    {
        return Final_Durability;

    }
 //Solidness data and functions start <--------------------------------------------------------------------------------------------------------------------

protected:
 
    UPROPERTY(BlueprintReadOnly)
        float Final_Durability{ 0.f };

    //those functions are only here for reference will be moved to actor level
    void AcceptDamage(float inDamage, float inDamageSphereNess);
    void GiveDamage(class AActor* inDamageTaker, float giveDamage);

private:

 


   



   

//Solidness data and functions End -------------------------------------------------------------------------------------------------------------------->
    

//Solidness Configs Start <--------------------------------------------------------------------------------------------------------------------

private:
    
    float cutting_damage_susceptibility{ 2.0f };

    float blunt_damage_susceptibility{ 0.1f };

    float sphereness{ 0.6 };
  //Solidness Configs  End -------------------------------------------------------------------------------------------------------------------->


};