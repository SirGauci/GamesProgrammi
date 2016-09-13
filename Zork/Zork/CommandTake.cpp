#include "stdafx.h"
#include "CommandTake.h"
#include <vector>
#include <iostream>
#include <sstream>

CommandTake::CommandTake(){}


CommandTake::~CommandTake(){}

void CommandTake::Process(std::string input, Player* player)
{
	// Split string
	std::vector<std::string> split;
	std::stringstream ss(input);
	std::string temp;
	while (std::getline(ss, temp, ' '))
	{
		split.push_back(temp);
	}

	if (player->CurrentLocation()->getInventory()->Access(split[1]) != NULL)
	{
		if (split.capacity() == 2)
		{
			player->getInventory()->Add(player->CurrentLocation()->getInventory()->Access(split[1]));
			player->CurrentLocation()->getInventory()->Remove(split[1]);
		}
		else if (split.capacity() == 4)
		{
			if (split[2] == "from" && split[3] == "location")
			{
				player->getInventory()->Add(player->CurrentLocation()->getInventory()->Access(split[1]));
				player->CurrentLocation()->getInventory()->Remove(split[1]);
			}
		}
		SetOutput("You have taken the " + split[1]);
	}
	else
	{
		SetOutput("You cannot take the " + split[1]);
	}
}