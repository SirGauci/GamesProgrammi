#pragma once
#include "Command.h"
#include "Player.h"
#include <string>

class CommandMove : public Command
{
public:
	CommandMove();
	~CommandMove();
	void Process(std::string input, Player* player);
};

