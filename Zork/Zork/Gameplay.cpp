#include "stdafx.h"
#include "Gameplay.h"
#include <iostream>

Gameplay::Gameplay()
{
	player = new Player();
}

Gameplay::~Gameplay(){}

void Gameplay::Display()
{
	std::cout << "You are at the " + player->CurrentLocation()->getName() + "\n";
}

void Gameplay::CurrentMap(std::vector<Location*> map)
{
	player->AssignMap(map[0]);
}

void Gameplay::ProcessInput(std::string input)
{
	player->Move(input);
}