#include "Grid.h"



Grid::Grid()
{
	Cell[8][8];
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			Cell[i][j] = new Tile;
		}
	}
}


Grid::~Grid()
{
}
