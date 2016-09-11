#include "stdafx.h"
#include "Item.h"


Item::Item(){}

Item::Item(std::string name, std::string description)
{
	prName = name;
	prDescription = description;
}

Item::~Item(){}

std::string Item::getName()
{
	return prName;
}