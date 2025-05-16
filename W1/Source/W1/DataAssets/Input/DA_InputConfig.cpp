
#include "DataAssets/Input/DA_InputConfig.h"

UInputAction* UDA_InputConfig::FindNativeInputActionByTag(const FGameplayTag& InInputTag) const
{
	for (const FW1InputActionConfig& InputActionConfig : NativeInputActions)
	{
		if (InputActionConfig.InputTag == InInputTag && InputActionConfig.InputAction)
		{
			return InputActionConfig.InputAction;
		}
	}

	return nullptr;
}
