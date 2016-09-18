// Fill out your copyright notice in the Description page of Project Settings.

#include "BatttleTank.h"
#include "TankAIController.h"

void ATankAIController::BeginPlay()
{
	Super::BeginPlay();
	auto ControlledTank = GetControlledTrank();
	if (!ControlledTank) {
		UE_LOG(LogTemp, Warning, TEXT("AIController not possesing a tank"));
	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("AIController possesing : %s"), *(ControlledTank->GetName()));
	}
}

ATank* ATankAIController::GetControlledTrank() const {

	return Cast<ATank>(GetPawn());
}