#include "stdafx.h"
#include "Inventory.h"
#include <iostream>


Inventory::Inventory(){}

Inventory::~Inventory(){}

void Inventory::Add(int item)
{
	prInventory.push_back(item); 
}

int Inventory::Access(int item)
{
	for (int n : prInventory)
	{
		if (item == n)
		{
			return n;
		}
	}
}

void Inventory::Remove(int item)
{
	auto it = std::find(prInventory.begin(), prInventory.end(), item);

	if (it != prInventory.end())
	{
		std::swap(*it, prInventory.back());
		prInventory.pop_back();
	}
}

void Inventory::Display()
{
	for (int n : prInventory)
	{
		std::cout << n << "\n";
	}
}