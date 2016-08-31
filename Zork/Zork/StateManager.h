#pragma once
#include <string>
#include "State.h"
#include "About.h"
#include "Help.h"
#include "HallOfFame.h"
#include "SelectAdventure.h"
#include "MainMenu.h"
#include "Gameplay.h"
#include "HighScore.h"

class StateManager
{
public:
	StateManager();
	~StateManager();
	void Manager();
	void MenuManager(std::string input);
	void GameManager(std::string input);
private:
	State* prState;
	About* prAbout;
	Help* prHelp;
	HallOfFame* prHoF;
	SelectAdventure* prSAdventure;
	Gameplay* prGame;
	HighScore* prScore;
	MainMenu* prMenu;
};

