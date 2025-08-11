// All rights reserved to ShadowCandle Studio

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "DIY_EquipmentDefines.h"
#include "DIY_EquipmentBase.generated.h"

UCLASS(ClassGroup = (Equipment), meta = (BlueprintSpawnableComponent))
class AROUNDME_API UDIY_EquipmentBase : public UActorComponent
{
    GENERATED_BODY()

public:
    UDIY_EquipmentBase();

public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "UDIY_EquipmentBase")
    class USkeletalMeshComponent *mEquipMentMesh{nullptr};

    UPROPERTY(BlueprintReadOnly, VisibleAnyWhere, Category = "UDIY_EquipmentBase")
    FName mEquipName;

    UPROPERTY(BlueprintReadOnly, VisibleAnyWhere, Category = "UDIY_EquipmentBase")
    EEquipmentsIndex mEquipIndex;

    void SetParentEquipment(UActorComponent *inParentEquipment);

    void AddChildEquipment(UActorComponent *inChildEquipment);

    void SetEquipModelType(int32 inModelType)
    {
        EquipModelType = inModelType;
    }
    int32 GetEquipModelType() const
    {
        return EquipModelType;
    }

private:
protected:
    int32 EquipModelType{-1};
    UActorComponent *ParentEquipment{nullptr};

    TArray<UActorComponent *> ChildEquipments;
};