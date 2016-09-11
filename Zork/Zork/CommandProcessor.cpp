#include "stdafx.h"
#include "CommandProcessor.h"
#include "CommandMove.h"

CommandProcessor::CommandProcessor(){}

CommandProcessor::CommandProcessor(Player* player)
{
	prPlayer = player;
	
	Command* cMove = new CommandMove();
	std::vector<std::string> vMove{ "go", "move", "walk", "run" };
	prProcesses.insert(prProcesses.begin(), std::make_pair(vMove, cMove));
}

CommandProcessor::~CommandProcessor(){}

// Calls a process dependant on keywords
void CommandProcessor::Process(std::string input)
{
	// List of keys from map
	std::vector<std::vector<std::string>> keysList;
	// Key to pass
	std::vector<std::string> key;
	
	// Adds keys to map
	for (auto imap : prProcesses)
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
				prProcesses[keys]->Process(input, prPlayer);
				break;
			}
		}
	}
}