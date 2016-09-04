#include "stdafx.h"
#include "Location.h"
#include <iostream>

Location::Location(){}

Location::Location(std::string name, std::string description)
{
	prName = name;
	prDescription = description;
}

Location::~Location(){}

void Location::setPath(std::string key, Location value)
{
	std::cout << key;
	std::cout << value.getName();
	//prPath.insert(prPath.begin(), std::pair<std::string, Location>(key, value));
	//prPath.insert(prPath.begin(), std::make_pair(key, value));
	//prPath.emplace(key, value);
	//std::cout << prPath["N"].getName();
	std::cout << "Done\n";
}

std::string Location::getName()
{
	return prName;
};