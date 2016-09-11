#pragma once
#include <string>
#include "Player.h"

class Command
{
public:
	Command();
	~Command();
	virtual void Process(std::string, Player* player);
};

