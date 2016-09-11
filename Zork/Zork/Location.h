#pragma once
#include "GameObject.h"
#include <map>
#include <string>
#include "Inventory.h"

class Location : public GameObject
{
public:
	Location();
	Location(std::string name, std::string description);
	~Location();
	void setPath(std::string key, Location* value);
	Location* returnLocation(std::string key);
	std::string getName();
private:
	std::string prName;
	std::string prDescription;
	Inventory* prInventory;
	std::map<std::string, Location*> prPath;
};

