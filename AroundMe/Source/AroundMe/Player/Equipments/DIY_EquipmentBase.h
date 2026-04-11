// All rights reserved to ShadowCandle Studio

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "DIY_EquipmentDefines.h"
#include "DIY_EquipmentBase.generated.h"

UCLASS(ClassGroup = (Equipment), meta = (BlueprintSpawnableComponent))
class AROUNDME_API UDIY_EquipmentBase : public USkeletalMeshComponent
{
    GENERATED_BODY()

public:
    UDIY_EquipmentBase();

public:
    UPROPERTY(BlueprintReadOnly, EditAnyWhere, Category = "UDIY_EquipmentBase")
    EEquipmentsIndex mEquipIndex;

    void SetParentEquipment(UActorComponent *inParentEquipment);

    void AddChildEquipment(UActorComponent *inChildEquipment);

    virtual void OnModelTypeChanged(uint32 lastModelType, uint32 newModelType);
    void SetEquipModelType(int32 inModelType);
    int32 GetEquipModelType() const
    {
        return EquipModelType;
    }
    DECLARE_DYNAMIC_DELEGATE_ThreeParams(FOnWeaponSelfChangeModelTypeRequest, EEquipmentsIndex, inEquipIndex, int, inModelType, bool, forceReLoad);

    FOnWeaponSelfChangeModelTypeRequest OnWeaponSelfChangeModelTypeRequest;

#if WITH_EDITOR
    // 1. 当属性被修改时触发 (用于自动重命名组件)
    virtual void PostEditChangeProperty(FPropertyChangedEvent &PropertyChangedEvent) override;

    // 2. 地图保存或编译时触发 (用于在日志中报错)
    virtual void CheckForErrors() override;
#endif

private:
protected:
    int32 EquipModelType{-1};
    UActorComponent *ParentEquipment{nullptr};

    TArray<UActorComponent *> ChildEquipments;
};