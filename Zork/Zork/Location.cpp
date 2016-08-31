#include "stdafx.h"
#include "Location.h"


Location::Location(){}

Location::Location(std::string name, std::string description)
{
	prName = name;
	prDescription = description;
}

Location::~Location(){}

void Location::setPath(std::string key, Location value)
{
	prPath.insert(std::pair<std::string, Location>(key, value));
}