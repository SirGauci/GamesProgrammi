#pragma once
#include "Tile.h"
class Grid
{
public:
	Grid();
	~Grid();
	char GetCell(int i, int j);
private:
	Tile cell[8][8];
};

