#pragma once
#include <string>
#include "Player.h"
#include <map>
#include <vector>
#include "Command.h"

class CommandProcessor
{
public:
	CommandProcessor();
	CommandProcessor(Player* player);
	~CommandProcessor();
	void Process(std::string input);
private:
	Player* prPlayer;
	std::map<std::vector<std::string>, Command*> prProcesses;
};

