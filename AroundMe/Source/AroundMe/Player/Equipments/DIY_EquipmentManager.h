#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DIY_RobotHand_Defines.h"
#include "DIY_RobotHand_Head_Defines.h"
#include "DIY_BagDefines.h"
#include "DIY_EquipmentManager.generated.h"



UCLASS(ClassGroup = (Player), meta = (BlueprintSpawnableComponent))
class AROUNDME_API UDIY_EquipmentManager : public UActorComponent
{
    GENERATED_BODY()

public:
    UDIY_EquipmentManager();


    void RequestChangeToNew_Hand(int32 HandIndex,EDIY_RobotHandType inTargetHandType);
    void RequestChangeToNew_HandHead(int32 HandIndex,EDIY_RobotHand_HeadType inTargetHandHead_Type);
    void RequestChangeToNew_Bag(EDIY_BagType inTargetBagType);
protected:
    // Called when the game starts
    virtual void BeginPlay() override;

    UPROPERTY(EditDefaultsOnly, Category = "DIY_EquipmentManager")
        TArray<TSoftObjectPtr<USkeletalMesh>> SKMDepot_Hand_Heads;
    UPROPERTY(EditDefaultsOnly, Category = "DIY_EquipmentManager")
        TArray<TSoftObjectPtr<USkeletalMesh>> SKMDepot_Hands;
    UPROPERTY(EditDefaultsOnly, Category = "DIY_EquipmentManager")
        TArray<TSoftObjectPtr<USkeletalMesh>> SKMDepot_Bags;

public:
  
    // Called every frame
    virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction) override;

protected:
    

    EDIY_BagType mCurrentBagType{EDIY_BagType::Count};
    EDIY_RobotHandType mCurrentHandType{EDIY_RobotHandType::Count};
    EDIY_RobotHand_HeadType mCurrentHand_Head_Type{EDIY_RobotHand_HeadType::Count};
};