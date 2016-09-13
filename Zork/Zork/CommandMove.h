#pragma once
#include "Command.h"
#include <map>
#include <vector>

class CommandMove : public Command
{
public:
	CommandMove();
	~CommandMove();
	void Process(std::string input, Player* player);
private:
	std::map<std::vector<std::string>, std::string> compass;
};

