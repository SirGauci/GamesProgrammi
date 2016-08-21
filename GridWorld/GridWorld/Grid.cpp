#include "stdafx.h"
#include "Grid.h"


Grid::Grid()
{
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			Tile tile;
			cell[i][j] = tile;
		}
	}
	// Top row
	for (int i = 0; i < 8; i++)
	{
		cell[0][i].SetType('#');
	}
	// Bottom row
	for (int i = 0; i < 8; i++)
	{
		if (i != 2)
		{
			cell[7][i].SetType('#');
		}
		else
		{
			cell[7][i].SetType('S');
		}
	}
	// Left column 
	for (int i = 0; i < 8; i++)
	{
		cell[i][0].SetType('#');
	}
	// Right column 
	for (int i = 0; i < 8; i++)
	{
		cell[i][7].SetType('#');
	}
	// Other walls
	for (int i = 1; i < 5; i++)
	{
		cell[i][4].SetType('#');
	}
	for (int i = 2; i < 6; i++)
	{
		cell[5][i].SetType('#');
	}
	cell[3][1].SetType('#');
	cell[3][2].SetType('#');
	cell[8][2].SetType('#');
	// Death and Gold tile(s)
	cell[1][1].SetType('G');
	cell[1][3].SetType('D');
	cell[1][5].SetType('D');
	cell[3][6].SetType('D');
}


Grid::~Grid()
{
}

char Grid::GetCell(int i, int j)
{
	return cell[i][j].GetType();
}
