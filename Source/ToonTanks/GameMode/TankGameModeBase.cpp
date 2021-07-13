// Fill out your copyright notice in the Description page of Project Settings.


#include "TankGameModeBase.h"

void ATankGameModeBase::BeginPlay()
{
	// Get references and game win/lose conditions.

	// Call HandleGameStart() to intialize the start countdown, turret activation, pawn check etc.
}

void ATankGameModeBase::ActorDied(AActor* DeadActor)
{
	// Check what type of actor died. If turret, tally. If player-> go to lose condition.
}

void ATankGameModeBase::HandleGameStart()
{
	// Initialize the start countdown, turret activation, pawn check etc.
	// Call blueprint version GameStart()
}

void ATankGameModeBase::HandleGameOver(bool PlayerWon)
{
	// See if the player has destroyed all the turrets, show win result.
	// else if turret destroyed player, show the lose result.
	// Call blueprint version GameOver(bool).
}

