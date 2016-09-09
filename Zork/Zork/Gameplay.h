#pragma once
#include "State.h"
#include <vector>
#include "Location.h"
#include "Player.h"

class Gameplay : public State
{
public:
	Gameplay();
	~Gameplay();
	void Display();
	void CurrentMap(std::vector<Location*> map);
	void ProcessInput(std::string);
private:
	Player* player;
};

