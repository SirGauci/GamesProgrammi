#pragma once
#include "GameObject.h"
#include <string>
#include "Location.h"
#include "Inventory.h"

class Player : public GameObject
{
public:
	Player();
	Player(std::string name, std::string description);
	~Player();
	void AssignMap(Location* start);
	void Move(std::string input);
	Location* CurrentLocation();
private:
	std::string prName;
	std::string prDescription;
	Location* prLocation;
	Inventory* prInventory;
};

