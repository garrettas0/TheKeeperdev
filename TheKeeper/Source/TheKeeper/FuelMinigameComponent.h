#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FuelMinigameComponent.generated.h"

UCLASS()
class THEKEEPER_API AFuelMinigameComponent : public AActor
{
	GENERATED_BODY()

public:
	AFuelMinigameComponent();

	// Starts the fuel pouring minigame
	UFUNCTION(BlueprintCallable, Category = "Fuel Minigame")
	void StartMinigame();

	// Stops the minigame
	UFUNCTION(BlueprintCallable, Category = "Fuel Minigame")
	void StopMinigame();

	// Whether the minigame is currently running
	UPROPERTY(BlueprintReadOnly, Category = "Fuel Minigame")
	bool bIsMinigameActive = false;
};
