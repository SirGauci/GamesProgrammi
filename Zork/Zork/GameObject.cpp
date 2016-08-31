#include "stdafx.h"
#include "GameObject.h"

GameObject::GameObject() {}

GameObject::GameObject(std::string name, std::string description)
{
	prName = name;
	prDescription = description;
}

GameObject::~GameObject(){}
