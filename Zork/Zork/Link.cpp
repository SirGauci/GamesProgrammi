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
	else if (input == "S")
	{
		return "N";
	}
	else if (input == "E")
	{
		return "W";
	}
	else  if (input == "W")
	{
		return "E";
	}
	else if (input == "NW")
	{
		return "SE";
	}
	else if (input == "NE")
	{
		return "SW";
	}
	else if (input == "SE")
	{
		return "NW";
	}
	else if (input == "SW")
	{
		return "NE";
	}
	else if (input == "U")
	{
		return "D";
	}
	else if (input == "D")
	{
		return "U";
	}
}