#include "stdafx.h"
#include "CommandPut.h"
#include "Bag.h"
#include <vector>
#include <iostream>
#include <sstream>


CommandPut::CommandPut(){}


CommandPut::~CommandPut(){}

void CommandPut::Process(std::string input, Player* player)
{
	// Split string
	std::vector<std::string> split;
	std::stringstream ss(input);
	std::string temp;
	while (std::getline(ss, temp, ' '))
	{
		split.push_back(temp);
	}

	if (player->getInventory()->Access(split[1]) != NULL)
	{
		if (split.capacity() == 2)
		{
			player->CurrentLocation()->getInventory()->Add(player->getInventory()->Access(split[1]));
			player->getInventory()->Remove(split[1]);
		}
		else if (split.capacity() == 4)
		{
			if (split[2] == "in" && split[3] == "inventory")
			{
				player->CurrentLocation()->getInventory()->Add(player->getInventory()->Access(split[1]));
				player->getInventory()->Remove(split[1]);
			}
			if (split[2] == "in" && split[3] == "bag")
			{
				Bag* bag = static_cast<Bag*>(player->getInventory()->Access(split[3]));

				bag->getInventory()->Add(bag->getInventory()->Access(split[1]));
				player->getInventory()->Remove(split[1]);
			}
		}
		SetOutput("You have placed the " + split[1]);
	}
	else
	{
		SetOutput("You cannot put that");
	}
}