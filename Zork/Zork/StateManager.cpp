#include "stdafx.h"
#include "StateManager.h"
#include <iostream>


StateManager::StateManager()
{
	prAbout = new About();
	prHelp = new Help();
	prMenu = new MainMenu();
	prHoF = new HallOfFame();
	prSAdventure = new SelectAdventure();
	prScore = new HighScore();
	prGame = new Gameplay();
}


StateManager::~StateManager(){}

void StateManager::Manager()
{
	std::string input;
	prState = prMenu;
	prState->Display();

	while (!(input == "5" && prState == prMenu))
	{
		std::getline(std::cin, input);
		GameManager(input);
		ChooseAdventure(input);
		MenuManager(input);

		std::system("cls");
		prState->Display();
	}
}

// Changes state from menu state
void StateManager::MenuManager(std::string input)
{
	char converted = input[0];
	if (prState == prMenu && input.length() == 1)
	{
		switch (converted)
		{
		case '1':
			prState = prSAdventure;
			break;
		case '2':
			prState = prHoF;
			break;
		case '3':
			prState = prHelp;
			break;
		case '4':
			prState = prAbout;
			break;

		default:
			break;
		}
	}
	else if (prState != prGame)
	{
		if (input == "q" || input == "Q")
		{
			if (prState == prScore)
			{
				prState = prHoF;
			}
			else
			{
				prState = prMenu;
			}
		}
	}
}

// Manages player input in game state
void StateManager::GameManager(std::string input)
{
	if (prState == prGame)
	{
		if (input == "hiscore")
		{
			prState = prScore;
		}
		else if (input == "q")
		{
			prState = prMenu;
		}
		else
		{
			prGame->ProcessInput(input);
		}
	}
}

// Manages player input in sAdventure state
void StateManager::ChooseAdventure(std::string input)
{
	if (prState == prSAdventure)
	{
		if (input == "1")
		{
			MapGenerator* map = new MapGenerator();
			map->CreateMap();
			prGame->CurrentMap(map->fetchMap());
			prState = prGame;
		}
	}
}