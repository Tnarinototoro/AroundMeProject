// All rights reserved to ShadowCandle Studio

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "../../System/DIY_GameInstanceSubsystem.h"
#include "DIY_SoundManager.generated.h"

UCLASS()
class AROUNDME_API UDIY_SoundManager : public UDIY_GameInstanceSubsystem
{
    GENERATED_BODY()

public:
    UDIY_SoundManager();

    static UDIY_SoundManager *Get(UWorld *World);

protected:
    virtual void Initialize(FSubsystemCollectionBase &Collection) override;
    virtual void Deinitialize() override;

private:
    TSubclassOf<class UDIY_SoundManagerHelperBase> SubsystemHelperClass;

public:
    UPROPERTY(Transient, BlueprintReadOnly)
    class UDIY_SoundManagerHelperBase *SubsystemHelper;
};

// Subsystem helper
UCLASS(Abstract, Blueprintable, MinimalAPI, meta = (ShowWorldContextPin))
class UDIY_SoundManagerHelperBase : public UObject
{
    GENERATED_BODY()

    // virtual class UWorld* GetWorld() const override;

protected:
public:
    friend class UDIY_SoundManager;

    void Initialize();

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "DIY_MusicPlayer")
    UDataTable *MusicDataTable;

#if 1 // test.
    // Test Function 1
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TestFunction1();

    // Test Function 2
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TestFunction2(const int32 &MyInt);

    // Test Function 3
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FString TestFunction3();
#endif
};