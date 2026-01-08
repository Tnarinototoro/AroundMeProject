
// All rights reserved to ShadowCandle Studio

#pragma once

#include "CoreMinimal.h"
#include "AroundMe/Player/Interactions/DIY_TagInterface.h"
#include "DIY_EnvObjectBase.generated.h"
UCLASS()
class AROUNDME_API ADIY_EnvObjectBase : public AActor,
                                        public IDIY_TagInterface
{
    GENERATED_BODY()

#if UE_BUILD_DEVELOPMENT || UE_BUILD_DEBUG

#endif

protected:
    // Called when the game starts or when spawned
    virtual void BeginPlay() override;
    virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "!DIY|Env|Tags")
    FGameplayTagContainer AllTags;
#if WITH_EDITORONLY_DATA
    /** 专门用于在编辑器里显示错误信息的文本组件 */
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TObjectPtr<class UTextRenderComponent> ErrorTextComponent;
#endif
public:
    ADIY_EnvObjectBase();
    ~ADIY_EnvObjectBase();
#if WITH_EDITOR
    void PostEditChangeProperty(FPropertyChangedEvent &PropertyChangedEvent);
    void ValidateIDTag();
#endif

    // Called every frame
    virtual void Tick(float DeltaTime) override;

    UFUNCTION(BlueprintCallable, Category = "DIY|TagInterface")
    virtual const FGameplayTagContainer &GetOwnedGameplayTags() const override;

    /** * 从 AllTags 中提取唯一的 DIY.AI.Env.ID 标签。
     * @return 返回找到的 ID 标签；如果没有或多于一个，返回空的 Tag。
     */
    UFUNCTION(BlueprintCallable, Category = "DIY|Env")
    FGameplayTag GetEnvIdentifier() const;
};
