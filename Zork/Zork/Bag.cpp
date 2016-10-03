#include "stdafx.h"
#include "Bag.h"


Bag::Bag()
{
	prInventory = new Inventory();
}

Bag::Bag(std::string name, std::string description)
{
	SetName(name);
	SetDesc(description);
	prInventory = new Inventory();
}

Bag::~Bag(){}

Inventory* Bag::getInventory()
{
	return prInventory;
}