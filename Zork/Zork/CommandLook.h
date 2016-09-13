#pragma once
#include "Command.h"
#include "Player.h"
#include <string>

class CommandLook : public Command
{
public:
	CommandLook();
	~CommandLook();
	void Process(std::string input, Player* player);
};

