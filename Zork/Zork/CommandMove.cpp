#include "stdafx.h"
#include "CommandMove.h"


CommandMove::CommandMove(){}

CommandMove::~CommandMove(){}

void CommandMove::Process(std::string input, Player* player)
{
	input = input.erase(0, input.find(' ') + 1);
	player->Move(input);
}
