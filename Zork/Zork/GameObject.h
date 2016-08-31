#pragma once
#include <string>

class GameObject
{
public:
	GameObject();
	GameObject(std::string name, std::string description); 
	~GameObject();
private:
	std::string prName;
	std::string prDescription;
};

