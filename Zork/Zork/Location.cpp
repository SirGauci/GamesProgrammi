#include "stdafx.h"
#include "Location.h"
#include <iostream>
#include <utility>
#include <vector>

Location::Location(){}

Location::Location(std::string name, std::string description)
{
	prName = name;
	prDescription = description;
	prInventory = new Inventory();
}

Location::~Location(){}

// Adds a *location with a direction (key) to a map
void Location::setPath(std::string key, Location* value)
{
	prPath.insert(prPath.begin(), std::make_pair(key, value));
}

Location* Location::returnLocation(std::string key)
{
	return prPath[key];
}

std::string Location::getName()
{
	return prName;
};

std::string Location::getDescription()
{
	std::string result;
	std::vector<std::string> exits;
	result += prDescription + "\n";
	result += "You can see exits in the directions: \n";

	for (auto imap : prPath)
	{
		exits.push_back(imap.first);
	}

	for each (std::string str in exits)
	{
		result += "\t" + str + "\n";
	}
	result += "In this area you can see:\n";
	result += prInventory->Display();

	return result;
}

Inventory* Location::getInventory()
{
	return prInventory;
}