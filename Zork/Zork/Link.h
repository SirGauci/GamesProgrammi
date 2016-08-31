#pragma once
#include "Location.h"
#include <string>

class Link
{
public:
	Link();
	~Link();
	void directLink(Location from, Location to, std::string direction);
	void undirectLink(Location A, Location B, std::string direction);
private:
	std::string oppositeDirection(std::string input);
};

