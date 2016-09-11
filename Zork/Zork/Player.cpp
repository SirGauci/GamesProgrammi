#include "stdafx.h"
#include "Player.h"
#include <sstream>


Player::Player()
{
	prInventory = new Inventory();
}

Player::Player(std::string name, std::string description)
{
	prName = name;
	prDescription = description;
	prInventory = new Inventory();
}

Player::~Player(){}

// Gives player starting location
void Player::AssignMap(Location* start)
{
	prLocation = start;
}

// Returns current location for game to display details
Location* Player::CurrentLocation()
{
	return prLocation;
}

void Player::Move(std::string input)
{
	if (prLocation->returnLocation(input) != NULL)
	{
		prLocation = prLocation->returnLocation(input);
	}
}