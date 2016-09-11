#include "stdafx.h"
#include "CommandMove.h"


CommandMove::CommandMove()
{
	std::vector<std::string> N{ "n", "N", "north", "North" };
	compass.insert(compass.begin(), std::make_pair(N, "N"));
	std::vector<std::string> S{ "s", "S", "south", "South" };
	compass.insert(compass.begin(), std::make_pair(S, "S"));
	std::vector<std::string> E{ "e", "E", "east", "East" };
	compass.insert(compass.begin(), std::make_pair(E, "E"));
	std::vector<std::string> W{ "w", "W", "west", "West" };
	compass.insert(compass.begin(), std::make_pair(W, "W"));
	std::vector<std::string> U{ "u", "U", "up", "Up" };
	compass.insert(compass.begin(), std::make_pair(U, "U"));
	std::vector<std::string> D{ "d", "D", "down", "Down" };
	compass.insert(compass.begin(), std::make_pair(D, "D"));
}

CommandMove::~CommandMove(){}

void CommandMove::Process(std::string input, Player* player)
{
	input = input.erase(0, input.find(' ') + 1);
	// List of keys from map
	std::vector<std::vector<std::string>> keysList;

	// Adds keys to map
	for (auto imap : compass)
	{
		keysList.push_back(imap.first);
	}

	// Iterates through keys and returns the correct key
	for each (std::vector<std::string> keys in keysList)
	{
		for each (std::string str in keys)
		{
			if (input.substr(0, input.find(' ')) == str)
			{
				player->Move(compass[keys]);
				break;
			}
		}
	}
}
