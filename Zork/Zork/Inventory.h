#pragma once
#include <vector>
#include <string>
#include "Item.h"

class Inventory
{
public:
	Inventory();
	~Inventory();
	void Add(Item* item);
	void Remove(std::string item);
	Item* Access(std::string item);
	std::string Display();
private:
	std::vector<Item*> prInventory;
};

