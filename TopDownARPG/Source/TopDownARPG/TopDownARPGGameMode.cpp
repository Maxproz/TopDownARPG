// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#include "TopDownARPG.h"
#include "TopDownARPGGameMode.h"
#include "TopDownARPGPlayerController.h"
#include "TopDownARPGCharacter.h"

ATopDownARPGGameMode::ATopDownARPGGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = ATopDownARPGPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}