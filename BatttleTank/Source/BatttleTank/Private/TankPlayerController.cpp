// Fill out your copyright notice in the Description page of Project Settings.

#include "BatttleTank.h"
#include "TankPlayerController.h"

void ATankPlayerController::BeginPlay()
{
	Super::BeginPlay();
	auto ControlledTank = GetControlledTrank();
	if (!ControlledTank) {
		UE_LOG(LogTemp, Warning, TEXT("PlayerController not possesing a tank"));
	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("PlayerController possesing : %s"), *(ControlledTank->GetName()));
	}
}

ATank* ATankPlayerController::GetControlledTrank() const {
	
	return Cast<ATank>(GetPawn());
}