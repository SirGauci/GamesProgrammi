#pragma once
#include "Command.h"

class CommandTake : public Command
{
public:
	CommandTake();
	~CommandTake();
	void Process(std::string input, Player* player);
};

