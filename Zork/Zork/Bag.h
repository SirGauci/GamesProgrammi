#pragma once
#include "Item.h"
#include "Inventory.h"

class Bag : public Item
{
public:
	Bag();
	Bag(std::string name, std::string description);
	~Bag();
	Inventory* getInventory();
private:
	Inventory* prInventory;
};

