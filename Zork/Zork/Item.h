#pragma once
#include "GameObject.h"
#include <string>

class Item : public GameObject
{
public:
	Item();
	Item(std::string name, std::string description);
	~Item();
	std::string getName();
	std::string getDesc();
private:
	std::string prName;
	std::string prDescription;
};

