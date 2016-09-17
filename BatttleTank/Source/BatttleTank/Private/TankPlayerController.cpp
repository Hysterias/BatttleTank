// Fill out your copyright notice in the Description page of Project Settings.

#include "BatttleTank.h"
#include "TankPlayerController.h"



ATank* ATankPlayerController::GetControlledTrank() const {
	
	return Cast<ATank>(GetPawn());
}
