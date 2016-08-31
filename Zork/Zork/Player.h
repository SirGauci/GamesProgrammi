#pragma once
#include "GameObject.h"
#include <string>

class Player : public GameObject
{
public:
	Player();
	Player(std::string name, std::string description);
	~Player();
private:
	std::string prName;
	std::string prDescription;
};

