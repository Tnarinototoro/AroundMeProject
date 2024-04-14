//UToonRenderingSettings.cpp
#include "Engine/UToonRenderingSettings.h"
UToonRenderingSettings::UToonRenderingSettings(const FObjectInitializer & ObjectInitializer)
	: Super(ObjectInitializer)
{
	SectionName = TEXT("UToonRenderingSettings");
}
FTextureRHIRef UToonRenderingSettings::GetTextureRHI() const
{
	if (ToonRampTexture)
	{
		//UE_LOG(LogEngine, Error, TEXT("PPPPPPPPP Ramp is loaded Again %s"), *ToonRampTextureName.ToString());
		return ToonRampTexture->GetResource()->TextureRHI;
	}
	else
	{
		//UE_LOG(LogEngine, Error, TEXT("KKKKKKKKKKKKKKKKKKKKKKK Ramp is loaded Again %s"), *ToonRampTextureName.ToString());
		return GBlackTexture->TextureRHI;
	}
}
		
void UToonRenderingSettings::PostInitProperties()
{
	Super::PostInitProperties();
	LoadDefaultObjects();
}
#if WITH_EDITOR
void UToonRenderingSettings::PreEditChange(FProperty* PropertyAboutToChange)
{
	Super::PreEditChange(PropertyAboutToChange);
	CachedToonRampTextureNameClass = ToonRampTextureName;
}
void UToonRenderingSettings::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	//UE_LOG(LogEngine, Error, TEXT("YYYYYYYYYY Ramp is loaded Again %s"), *ToonRampTextureName.ToString());
	Super::PostEditChangeProperty(PropertyChangedEvent);
	if (PropertyChangedEvent.Property)
	{
		FName PropertyName = PropertyChangedEvent.Property->GetFName();
		if (PropertyName == GET_MEMBER_NAME_CHECKED(UToonRenderingSettings, ToonRampTextureName))
		{
			if (UObject* NewTexture2D = ToonRampTextureName.TryLoad())
			{
				LoadDefaultObjects();
			}
		}
	}
}
bool UToonRenderingSettings::CanEditChange(const FProperty* InProperty) const
{
	if (!Super::CanEditChange(InProperty))
	{
		return false;
	}
	return true;
}
#endif//WITH_EDITOR
void UToonRenderingSettings::LoadDefaultObjects()
{
	if (ToonRampTexture)
	{
		ToonRampTexture->RemoveFromRoot();
		ToonRampTexture = nullptr;
	}
	if (UObject* ToonRampClassObject = ToonRampTextureName.TryLoad())
	{
		ToonRampTexture = CastChecked<UTexture2D>(ToonRampClassObject);
		ToonRampTexture->AddToRoot();
		//UE_LOG(LogEngine, Error, TEXT("MMMMMMMMMMMMMM Ramp is loaded successfully Again %s"), *ToonRampTextureName.ToString());
	}
#if WITH_EDITOR
	if (!ToonRampTexture)
	{
		ToonRampTextureName = CachedToonRampTextureNameClass;
		if (UObject* ToonRampClassObject = ToonRampTextureName.TryLoad())
		{
			ToonRampTexture = CastChecked<UTexture2D>(ToonRampClassObject);
			ToonRampTexture->AddToRoot();
			//UE_LOG(LogEngine, Error, TEXT("ZZZZZZZZZZZZ Ramp is loaded successfully Again %s"), *ToonRampTextureName.ToString());
		}
	}
#endif
}