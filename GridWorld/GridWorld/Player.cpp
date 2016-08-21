#include "stdafx.h"
#include "Player.h"
#include <iostream>
#include <string>

Player::Player()
{
}

Player::Player(Grid grid)
{
	map = grid;
	// Assign player to Start
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			if (grid.GetCell(i, j) == 'S')
			{
				x = j;
				y = i;
			}
		}
	}
}

Player::~Player()
{
}

void Player::Move(char command)
{
	int tempx = x;
	int tempy = y;
	if (command == 'n')
	{
		y -= 1;
	}
	else if (command == 's')
	{
		y += 1;
	}
	else if (command == 'e')
	{
		x += 1;
	}
	else if (command == 'w')
	{
		x -= 1;
	}

	if (map.GetCell(y, x) == '#')
	{
		x = tempx;
		y = tempy;
		std::cout << "You can't move there\n";
	}
}

char Player::GetCell()
{
	return map.GetCell(y, x);
}