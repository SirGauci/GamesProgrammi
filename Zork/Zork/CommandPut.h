#pragma once
#include "Command.h"

class CommandPut : public Command
{
public:
	CommandPut();
	~CommandPut();
	void Process(std::string input, Player* player);
};

