#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Interactable1.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UInteractable1 : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class SNAKE_API IInteractable1
{
	GENERATED_BODY()
	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	virtual void Interact(AActor* Interactor, bool bIsHead);
};