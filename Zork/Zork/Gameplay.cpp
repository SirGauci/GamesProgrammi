#include "stdafx.h"
#include "Gameplay.h"
#include "Bag.h"
#include <iostream>

Gameplay::Gameplay()
{
	player = new Player();
	Bag* bag = new Bag("bag", "A bag that is a bag but not actually a bag");
	player->getInventory()->Add(bag);
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