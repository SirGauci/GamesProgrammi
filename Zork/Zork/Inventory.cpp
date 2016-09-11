#include "stdafx.h"
#include "Inventory.h"
#include <iostream>


Inventory::Inventory(){}

Inventory::~Inventory(){}

void Inventory::Add(Item* item)
{
	prInventory.push_back(item); 
}

Item* Inventory::Access(std::string item)
{
	for each (Item* i in prInventory)
	{
		if (i->getName() == item)
		{
			return i;
		}
	}
}

void Inventory::Remove(std::string item)
{
	auto it = std::find(prInventory.begin(), prInventory.end(), Access(item));

	if (it != prInventory.end())
	{
		std::swap(*it, prInventory.back());
		prInventory.pop_back();
	}
}


void Inventory::Display()
{
	for each (Item* i in prInventory)
	{
		std::cout << i->getName();
	}
}