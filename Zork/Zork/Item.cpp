#include "stdafx.h"
#include "Item.h"


Item::Item(){}

Item::Item(std::string name, std::string description)
{
	prName = name;
	prDescription = description;
}

Item::~Item(){}

void Item::SetName(std::string name)
{
	prName = name;
}

void Item::SetDesc(std::string desc)
{
	prDescription = desc;
}

std::string Item::getName()
{
	return prName;
}

std::string Item::getDesc()
{
	return prDescription;
}