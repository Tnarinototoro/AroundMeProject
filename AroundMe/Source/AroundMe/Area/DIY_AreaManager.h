// All rights reserved to ShadowCandle Studio

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "../System/DIY_WorldSubsystem.h"
#include "DIY_AreaDefines.h"
#include "DIY_EnvObjectBase.h"

// #include "PhysicalMaterials/PhysicalMaterial.h"
#include "DIY_AreaManager.generated.h"

UCLASS()
class AROUNDME_API UDIY_AreaManager : public UDIY_WorldSubsystem
{
    GENERATED_BODY()

public:
    virtual void Initialize(FSubsystemCollectionBase &Collection) override;
    virtual void Deinitialize() override;

    static UDIY_AreaManager *Get(const UObject *WorldContextObject);

    // 注册/卸载 Area
    void RegisterArea(EDIY_Area InAreaID, AActor *InAreaAnchor);
    void UnregisterArea(EDIY_Area InAreaID);

    // 获取 Area Anchor
    UFUNCTION(BlueprintCallable, Category = "AreaManager")
    const AActor *GetAreaAnchor(EDIY_Area InAreaID) const;

    // 切换 Area
    UFUNCTION(BlueprintCallable, Category = "AreaManager")
    void SwitchToNextArea(EDIY_Area InNextAreaID);

    UFUNCTION(BlueprintCallable, Category = "AreaManager")
    EDIY_Area GetCurrentArea() const { return CurrentAreaID; }

    UFUNCTION(BlueprintNativeEvent, Category = "AreaManager")
    void BeforeSwitchArea(EDIY_Area InNextAreaID);
    virtual void BeforeSwitchArea_Implementation(EDIY_Area InNextAreaID);

    UFUNCTION(BlueprintNativeEvent, Category = "AreaManager")
    void AfterSwitchArea(EDIY_Area InNextAreaID);
    virtual void AfterSwitchArea_Implementation(EDIY_Area InNextAreaID);

    void RegisterEnvObjectWithTag(FGameplayTag IDTag, ADIY_EnvObjectBase *Obj);
    void UnregisterEnvObjectWithTag(FGameplayTag IDTag);

    /** * 通过 ID 标签直接获取对象 (O(1) 复杂度)
     */
    UFUNCTION(BlueprintCallable, Category = "DIY|Environment")
    ADIY_EnvObjectBase *GetEnvObjectByID(FGameplayTag IDTag) const;

private:
    UPROPERTY()
    TArray<TWeakObjectPtr<AActor>> AreaAnchors;

    EDIY_Area CurrentAreaID{EDIY_Area::Area_Count};

    UPROPERTY()
    TMap<FGameplayTag, TWeakObjectPtr<ADIY_EnvObjectBase>> EnvPool;
};