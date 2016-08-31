#include "stdafx.h"
#include "Link.h"


Link::Link(){}

Link::~Link(){}

void Link::directLink(Location from, Location to, std::string direction)
{
	from.setPath(direction, to);
}

void Link::undirectLink(Location A, Location B, std::string direction)
{
	A.setPath(direction, B);
	B.setPath(oppositeDirection(direction), A); 
}

std::string Link::oppositeDirection(std::string input)
{
	if (input == "N")
	{
		return "S";
	}
	if (input == "S")
	{
		return "N";
	}
	if (input == "E")
	{
		return "W";
	}
	if (input == "W")
	{
		return "E";
	}
	if (input == "NW")
	{
		return "SE";
	}
	if (input == "NE")
	{
		return "SW";
	}
	if (input == "SE")
	{
		return "NW";
	}
	if (input == "SW")
	{
		return "NE";
	}
	if (input == "U")
	{
		return "D";
	}
	if (input == "D")
	{
		return "U";
	}
}