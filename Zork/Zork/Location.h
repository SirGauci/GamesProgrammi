#pragma once
#include "GameObject.h"
#include <map>
#include <string>

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
	std::map<std::string, Location*> prPath;
};

