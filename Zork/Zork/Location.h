#pragma once
#include <map>
#include <string>
#include "Inventory.h"

class Location
{
public:
	Location();
	Location(std::string name, std::string description);
	~Location();
	void setPath(std::string key, Location* value);
	Location* returnLocation(std::string key);
	Inventory* getInventory();
	std::string getName();
	std::string getDescription();
private:
	std::string prName;
	std::string prDescription;
	Inventory* prInventory;
	std::map<std::string, Location*> prPath;
};

