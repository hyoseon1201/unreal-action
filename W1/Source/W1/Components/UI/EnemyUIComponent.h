
#pragma once

#include "Components/UI/PawnUIComponent.h"
#include "EnemyUIComponent.generated.h"

class UW1WidgetBase;

/**
 * 
 */
UCLASS()
class W1_API UEnemyUIComponent : public UPawnUIComponent
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	void RegisterEnemyDrawnWidget(UW1WidgetBase* InWidgetToRegister);

	UFUNCTION(BlueprintCallable)
	void RemoveEnemyDrawnWidgetsIfAny();
	
private:
	TArray<UW1WidgetBase*> EnemyDrawnWidgets;
};
