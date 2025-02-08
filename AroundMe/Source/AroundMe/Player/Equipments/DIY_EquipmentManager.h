#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "DIY_RobotHand_Defines.h"
#include "DIY_RobotHand_Head_Defines.h"
#include "DIY_BagDefines.h"
#include "DIY_EquipmentDefines.h"
#include "DIY_KagoDefines.h"
#include "DIY_EquipmentManager.generated.h"



UCLASS(ClassGroup = (Player), meta = (BlueprintSpawnableComponent))
class AROUNDME_API UDIY_EquipmentManager : public USceneComponent
{
    GENERATED_BODY()

public:
    UDIY_EquipmentManager();


    UFUNCTION(BlueprintCallable, Category = "DIY_EquipmentManager")
    void RequestChangeToNew_Hand(int32 HandIndex,EDIY_RobotHandType inTargetHandType);

    UFUNCTION(BlueprintCallable, Category = "DIY_EquipmentManager")
    void RequestChangeToNew_HandHead(int32 HandIndex,EDIY_RobotHand_HeadType inTargetHandHead_Type);

    UFUNCTION(BlueprintCallable, Category = "DIY_EquipmentManager")
    void RequestChangeToNew_Bag(EDIY_BagType inTargetBagType);
    
    
    
    UFUNCTION(BlueprintCallable,BlueprintPure, Category = "DIY_EquipmentManager")
    class UDIY_EquipmentBase* GetEquipAtIndex(EEquipmentsIndex inIndex);

    UFUNCTION(BlueprintCallable,BlueprintPure, Category = "DIY_EquipmentManager")
    class USkeletalMeshComponent* GetEquipSKMAtIndex(EEquipmentsIndex inIndex);

protected:
    // Called when the game starts
    virtual void BeginPlay() override;

    UPROPERTY(EditDefaultsOnly, Category = "DIY_EquipmentManager")
        TArray<TSoftObjectPtr<USkeletalMesh>> SKMDepot_Hand_Heads;
    UPROPERTY(EditDefaultsOnly, Category = "DIY_EquipmentManager")
        TArray<TSoftObjectPtr<USkeletalMesh>> SKMDepot_Hands;
    UPROPERTY(EditDefaultsOnly, Category = "DIY_EquipmentManager")
        TArray<TSoftObjectPtr<USkeletalMesh>> SKMDepot_Bags;
    UPROPERTY(EditDefaultsOnly, Category = "DIY_EquipmentManager")
        TArray<TSoftObjectPtr<USkeletalMesh>> SKMDepot_Kagos;
    UPROPERTY(EditDefaultsOnly, Category = "DIY_EquipmentManager")
        TArray<TSoftObjectPtr<USkeletalMesh>> SKMDepot_Chests;
    UPROPERTY(EditDefaultsOnly, Category = "DIY_EquipmentManager")
        TArray<TSoftObjectPtr<USkeletalMesh>> SKMDepot_Caps;

    
public:
  
    // Called every frame
    virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction) override;
   

    virtual void PostInitProperties() override;

    UPROPERTY(EditAnyWhere,BluePrintReadWrite, Category = "DIY_EquipmentManager")
    TArray<class UDIY_EquipmentBase*> AllEquipments;
protected:
    

    EDIY_BagType mCurrentBagType{EDIY_BagType::Count};
    EDIY_RobotHandType mCurrentHandType{EDIY_RobotHandType::Count};
    EDIY_RobotHand_HeadType mCurrentHand_Head_Type{EDIY_RobotHand_HeadType::Count};
    EDIY_KagoType mCurrentKagoType{EDIY_KagoType::Count};
    
private:
    void InitAllEquipments();
    void RealizeAllEquipmentModels();
};