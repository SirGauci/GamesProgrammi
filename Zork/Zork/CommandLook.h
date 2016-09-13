#pragma once
#include "Command.h"


class CommandLook : public Command
{
public:
	CommandLook();
	~CommandLook();
	void Process(std::string input, Player* player);
};

