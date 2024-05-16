#pragma once


// Declare the helper function and the member variable for caching the component
#define DECLARE_GET_COMPONENT_HELPER(TargetComponentName) \
private: \
    class TargetComponentName* mOwnerActorOwned_##TargetComponentName = nullptr; \
public: \
    class TargetComponentName* AcquireOwnerActorOwned##TargetComponentName();

// Implement the helper function for actor class
#define IMPL_GET_COMPONENT_HELPER_FOR_ACTOR(CurrentActorName, TargetComponentName)\
class TargetComponentName* CurrentActorName::AcquireOwnerActorOwned##TargetComponentName() \
{ \
    if (mOwnerActorOwned_##TargetComponentName != nullptr)\
    { \
        return mOwnerActorOwned_##TargetComponentName; \
    } \
 mOwnerActorOwned_##TargetComponentName = this->FindComponentByClass<TargetComponentName>(); \
   \
    ensure(mOwnerActorOwned_##TargetComponentName); \
    return mOwnerActorOwned_##TargetComponentName; \
}

// Implement the helper function for component class
#define IMPL_GET_COMPONENT_HELPER_FOR_COMPONENT(CurrentComponentName, TargetComponentName)\
class TargetComponentName* CurrentComponentName::AcquireOwnerActorOwned##TargetComponentName() \
{ \
    if (mOwnerActorOwned_##TargetComponentName != nullptr)\
    { \
        return mOwnerActorOwned_##TargetComponentName; \
    } \
if (AActor* OwnerActor = GetOwner())\
        { \
            mOwnerActorOwned_##TargetComponentName = OwnerActor->FindComponentByClass<TargetComponentName>();\
        } \
   \
    ensure(mOwnerActorOwned_##TargetComponentName); \
    return mOwnerActorOwned_##TargetComponentName; \
}


