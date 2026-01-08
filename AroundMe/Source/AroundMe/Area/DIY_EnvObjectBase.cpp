#include "DIY_EnvObjectBase.h"
#include "DIY_AreaManager.h"
#include "Logging/MessageLog.h"
// #include "Components/BillboardComponent.h" // 用于可视化警告
#include "Components/TextRenderComponent.h"

#define LOCTEXT_NAMESPACE "DIY_EnvObjectBase"

void ADIY_EnvObjectBase::BeginPlay()
{
    Super::BeginPlay();

    FGameplayTag MyID = GetEnvIdentifier();

    // 严格校验：利用我们写好的函数进行逻辑判断
    if (!MyID.IsValid())
    {
        int32 Count = AllTags.Filter(FGameplayTagContainer(FGameplayTag::RequestGameplayTag(TEXT("DIY.AI.Env.ID")))).Num();
        FString ErrorMsg = FString::Printf(TEXT("Actor [%s] Configuration Error! Found %d tags under 'DIY.AI.Env.ID'. Must be exactly 1."),
                                           *GetName(), Count);

#if WITH_EDITOR
        FMessageLog("PIE").Error(FText::FromString(ErrorMsg));
#endif
        UE_LOG(LogTemp, Fatal, TEXT("%s"), *ErrorMsg);
        return;
    }

    // 注册
    if (UDIY_AreaManager *Manager = GetWorld()->GetSubsystem<UDIY_AreaManager>())
    {
        Manager->RegisterEnvObjectWithTag(MyID, this);
    }
}

void ADIY_EnvObjectBase::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
    FGameplayTag MyID = GetEnvIdentifier();
    if (MyID.IsValid())
    {
        if (UDIY_AreaManager *Manager = GetWorld()->GetSubsystem<UDIY_AreaManager>())
        {
            Manager->UnregisterEnvObjectWithTag(MyID);
        }
    }
    Super::EndPlay(EndPlayReason);
}

ADIY_EnvObjectBase::ADIY_EnvObjectBase()
{
    PrimaryActorTick.bCanEverTick = false;
#if WITH_EDITOR
    RootComponent=CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    // 使用标准创建方式，但标记为仅编辑器可见
    ErrorTextComponent = CreateDefaultSubobject<UTextRenderComponent>(TEXT("ErrorTextComponent"));
    if (ErrorTextComponent)
    {
        ErrorTextComponent->SetupAttachment(RootComponent);
        ErrorTextComponent->SetRelativeLocation(FVector(0.f, 0.f, 150.f)); // 稍微调高一点，防止穿模

         // 关键属性设置
         // ErrorTextComponent
         ErrorTextComponent->bHiddenInGame = true; // 运行游戏时隐藏
         ErrorTextComponent->CastShadow = false;   // 关闭阴影减少开销

         ErrorTextComponent->SetTextRenderColor(FColor::Red);
         ErrorTextComponent->SetHorizontalAlignment(EHTA_Center);
         ErrorTextComponent->SetWorldSize(60.f);
         ErrorTextComponent->bIsEditorOnly = true;
         // 确保在编辑器里即便没选中也能看到
         ErrorTextComponent->SetVisibility(true);
    }
#endif
}

ADIY_EnvObjectBase::~ADIY_EnvObjectBase()
{
}

void ADIY_EnvObjectBase::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

const FGameplayTagContainer &ADIY_EnvObjectBase::GetOwnedGameplayTags() const
{
    return AllTags;
}

FGameplayTag ADIY_EnvObjectBase::GetEnvIdentifier() const
{
    // 1. 定义我们寻找的根路径
    FGameplayTag RootIDTag = FGameplayTag::RequestGameplayTag(TEXT("DIY.AI.Env.ID"));

    // 2. 过滤出所有属于该路径下的标签
    FGameplayTagContainer IDTags = AllTags.Filter(FGameplayTagContainer(RootIDTag));

    // 3. 只有当数量正好为 1 时，才认为是合法的 ID
    if (IDTags.Num() == 1)
    {
        return IDTags.GetByIndex(0); // 这样拿到的绝对是属于 ID 分支下的那个标签
    }

    return FGameplayTag::EmptyTag;
}
#if WITH_EDITOR

void ADIY_EnvObjectBase::PostEditChangeProperty(FPropertyChangedEvent &PropertyChangedEvent)
{
    Super::PostEditChangeProperty(PropertyChangedEvent);

    // 如果修改的是 AllTags 属性，立即校验
    const FName PropertyName = (PropertyChangedEvent.Property != nullptr) ? PropertyChangedEvent.Property->GetFName() : NAME_None;
    if (PropertyName == GET_MEMBER_NAME_CHECKED(ADIY_EnvObjectBase, AllTags))
    {
        ValidateIDTag();
    }
}

void ADIY_EnvObjectBase::ValidateIDTag()
{
    FGameplayTag MyID = GetEnvIdentifier();

    // 如果 ID 不合法（没有或多于一个）
    if (!MyID.IsValid())
    {
        // 1. 在视口中打印警告文字（红色）
        // GEngine->AddOnScreenDebugMessage 是瞬时的，我们这里可以用辅助图标

        // 2. 检查 ID 具体的错误数量用于日志输出
        FGameplayTag RootIDTag = FGameplayTag::RequestGameplayTag(TEXT("DIY.AI.Env.ID"));
        int32 IDCount = AllTags.Filter(FGameplayTagContainer(RootIDTag)).Num();

        FString WarningMsg = FString::Printf(TEXT("!!! CONFIG ERROR !!! Actor: %s | ID Tags: %d (Must be 1)"),
                                             *GetName(), IDCount);

        // 3. 输出到控制台（黄色警告，不至于让编辑器崩溃）
        UE_LOG(LogTemp, Warning, TEXT("%s"), *WarningMsg);
    }
    if (!ErrorTextComponent)
        return;

    FGameplayTag RootIDTag = FGameplayTag::RequestGameplayTag(TEXT("DIY.AI.Env.ID"));
    int32 IDCount = AllTags.Filter(FGameplayTagContainer(RootIDTag)).Num();

    if (IDCount == 1)
    {
        // 配置正确，隐藏文字
        FString ErrorMsg = FString::Printf(TEXT("Proper SetUpLoc (%s)"), *MyID.GetTagName().ToString());
        ErrorTextComponent->SetText(FText::FromString(ErrorMsg));
    }
    else
    {
        // 配置错误，显示具体的错误原因
        FString ErrorMsg = (IDCount == 0) ? TEXT("MISSING ID TAG") : FString::Printf(TEXT("DUPLICATE ID TAGS (%d)"), IDCount);
        ErrorTextComponent->SetText(FText::FromString(ErrorMsg));

        // 同时在 Log 打印，方便通过 Output Log 检索
        UE_LOG(LogTemp, Warning, TEXT("[%s] Environment Config Error: %s"), *GetName(), *ErrorMsg);
    }
}
#endif
#undef LOCTEXT_NAMESPACE