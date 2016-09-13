#include "stdafx.h"
#include "Command.h"


Command::Command(){}

Command::~Command(){}

void Command::Process(std::string input, Player* player) {};

std::string Command::GetOutput()
{
	return prOutput;
}

void Command::SetOutput(std::string input)
{
	prOutput = input;
}