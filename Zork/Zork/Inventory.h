#pragma once
#include <vector>

class Inventory
{
public:
	Inventory();
	~Inventory();
	void Add(int item);
	void Remove(int item);
	int Access(int item);
	void Display();
private:
	std::vector<int> prInventory;
};

