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
	return NULL;
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


std::string Inventory::Display()
{
	std::string result;

	for each (Item* i in prInventory)
	{
		result += "\t" + i->getName() + "\n";
	}

	return result;
}