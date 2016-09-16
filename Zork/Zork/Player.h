#pragma once
#include <string>
#include "Location.h"
#include "Inventory.h"

class Player
{
public:
	Player();
	Player(std::string name, std::string description);
	~Player();
	void AssignMap(Location* start);
	void Move(std::string input);
	Location* CurrentLocation();
	Inventory* getInventory();
private:
	std::string prName;
	std::string prDescription;
	Location* prLocation;
	Inventory* prInventory;
};

