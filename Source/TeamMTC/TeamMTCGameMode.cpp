// Copyright Epic Games, Inc. All Rights Reserved.

#include "TeamMTCGameMode.h"
#include "TeamMTCHUD.h"
#include "TeamMTCCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATeamMTCGameMode::ATeamMTCGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ATeamMTCHUD::StaticClass();
}
