#include "stdafx.h"
#include "CommandLook.h"
#include <vector>
#include <iostream>
#include <sstream>

CommandLook::CommandLook(){}

CommandLook::~CommandLook(){}

void CommandLook::Process(std::string input, Player* player)
{
	// Split string
	std::vector<std::string> split;
	std::stringstream ss(input);
	std::string temp;
	while (std::getline(ss, temp, ' '))
	{
		split.push_back(temp);
	}

	// Locations look
	if (split.capacity() == 1)
	{
		SetOutput(player->CurrentLocation()->getDescription());
	}
	else if (split[1] == "at")
	{
		if (split.capacity() == 3)
		{
			// Location item look
			if (player->CurrentLocation()->getInventory()->Access(split[2]) != NULL)
			{
				SetOutput(player->CurrentLocation()->getInventory()->Access(split[2])->getDesc());
			}
			// Player item look
			else if (player->getInventory()->Access(split[2]) != NULL)
			{
				SetOutput(player->getInventory()->Access(split[2])->getDesc());
			}
			else if (split[2] == "location")
			{
				SetOutput(player->CurrentLocation()->getDescription());
			}
			else if (split[2] == "inventory")
			{
				SetOutput("In your inventory:\n" + player->getInventory()->Display());
			}
			else
			{
				SetOutput("I can't find " + split[2]);
			}
		}
		else if (split.capacity() == 6)
		{
			if (split[3] == "in")
			{
				if (split[4] == "inventory")
				{
					if (player->getInventory()->Access(split[2]) != NULL)
					{
						SetOutput(player->getInventory()->Access(split[2])->getDesc());
					}
					else
					{
						SetOutput("I can't find " + split[2]);
					}
				}
				else if (split[4] == "location")
				{
					if (player->CurrentLocation()->getInventory()->Access(split[2]) != NULL)
					{
						SetOutput(player->CurrentLocation()->getInventory()->Access(split[2])->getDesc());
					}
					else
					{
						SetOutput("I can't find " + split[2]);
					}
				}
				else
				{
					SetOutput("I can't look like that");
				}
			}
			else
			{
				SetOutput("I can't look like that");
			}
		}
		else
		{
			SetOutput("I can't look like that");
		}
	}
	else
	{
		SetOutput("I can't look like that");
	}
}