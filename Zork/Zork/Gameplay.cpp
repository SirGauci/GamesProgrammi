#include "stdafx.h"
#include "Gameplay.h"
#include <iostream>

Gameplay::Gameplay()
{
	player = new Player();
	processor = new CommandProcessor(player);
}

Gameplay::~Gameplay(){}

void Gameplay::Display()
{
	std::cout << "Location :: " + player->CurrentLocation()->getName() + "\n"
		<< "--------------------------------------------------------\n"
		<< processor->ReturnOutput() + "\n"
		<< ":> ";
}

void Gameplay::CurrentMap(std::vector<Location*> map)
{
	player->AssignMap(map[0]);
}

void Gameplay::ProcessInput(std::string input)
{
	processor->Process(input);
}