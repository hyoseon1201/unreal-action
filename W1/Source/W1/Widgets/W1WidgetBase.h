
#pragma once

#include "Blueprint/UserWidget.h"
#include "W1WidgetBase.generated.h"

/**
 * 
 */
UCLASS()
class W1_API UW1WidgetBase : public UUserWidget
{
	GENERATED_BODY()
	
protected:
	virtual void NativeOnInitialized() override;

	UFUNCTION(BlueprintImplementableEvent, meta = (DisplayName = "On Owning HeroUI Component Initialized"))
	void BP_OnOwningHeroUIComponentInitialized(UHeroUIComponent* OwningHeroUIComponent);

	UFUNCTION(BlueprintImplementableEvent, meta = (DisplayName = "On Owning EnemyUI Component Initialized"))
	void BP_OnOwningEnemyUIComponentInitialized(UEnemyUIComponent* OwningEnemyUIComponent);
public:
	UFUNCTION(BlueprintCallable)
	void InitEnemyCreatedWidget(AActor* OwningEnemyActor);
};
