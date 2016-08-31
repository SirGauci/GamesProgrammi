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
	while (!(input == "5" && prState == prMenu))
	{
		std::system("cls");
		prState->Display();

		if (prState == prSAdventure && input == "1")
		{
			prState = prGame;
		}

		std::getline(std::cin, input);
		MenuManager(input);
		GameManager(input);
	}
}

void StateManager::MenuManager(std::string input)
{
	char converted = input[0];
	if (prState == prMenu)
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

void StateManager::GameManager(std::string input)
{
	if (prState == prGame)
	{
		if (input == "hiscore")
		{
			prState = prScore;
		}
		else if (input == "quit")
		{
			prState = prMenu;
		}
	}
}
