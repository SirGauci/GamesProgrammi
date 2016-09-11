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

Inventory* Location::getInventory()
{
	return prInventory;
}