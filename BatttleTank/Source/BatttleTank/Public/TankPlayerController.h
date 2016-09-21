// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Tank.h"
#include "GameFramework/PlayerController.h"
#include "TankPlayerController.generated.h" // Must be the las include

/**
 * 
 */
UCLASS()
class BATTTLETANK_API ATankPlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:

	virtual void BeginPlay() override;

	virtual void Tick(float DeltaTime) override;

	ATank*  GetControlledTrank() const;

	// Start the tank moving the barrel so that shot would it where
	// the crosshair intersects the world
	void AimTowardsCrosshair();
};
