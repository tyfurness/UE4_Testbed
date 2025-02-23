// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#include "FPS.h"
#include "FPSGameMode.h"
#include "FPSHUD.h"
#include "FPSCharacter.h"

AFPSGameMode::AFPSGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AFPSHUD::StaticClass();
}
