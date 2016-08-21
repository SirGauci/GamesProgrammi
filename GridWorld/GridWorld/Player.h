#pragma once
#include "Grid.h"
class Player
{
public:
	Player();
	Player(Grid grid);
	~Player();
	void Move(char command);
	char GetCell();
private:
	int x, y;
	Grid map;
};

