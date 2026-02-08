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
class AROUNDME_API UDIY_EquipmentManager : public UActorComponent
{
    GENERATED_BODY()

public:
    UDIY_EquipmentManager();

    UFUNCTION(BlueprintCallable, Category = "DIY_EquipmentManager")
    void RequestEquipModelTypeTo(EEquipmentsIndex inEquipIndex, int inModelType, bool forceReLoad = false);

    UFUNCTION(BlueprintCallable, BlueprintPure, Category = "DIY_EquipmentManager")
    class UDIY_EquipmentBase *GetEquipAtIndex(EEquipmentsIndex inIndex);

  

    UFUNCTION(BlueprintCallable, Category = "DIY_EquipmentManager")
    void RegisterEquipment(class UDIY_EquipmentBase *inEquipment, EEquipmentsIndex inIndex);

    UFUNCTION(BlueprintCallable, Category = "DIY_EquipmentManager")
    void RealizeAllEquipmentModels();
protected:
    // Called when the game starts
    virtual void BeginPlay() override;

public:
    // Called every frame
    virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction) override;

    FVector GetKagoRobotDumpItemPoint();

    virtual void PostInitProperties() override;

protected:
private:
    
    TArray<class UDIY_EquipmentBase *> AllEquipments;
};