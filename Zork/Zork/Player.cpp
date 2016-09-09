#include "stdafx.h"
#include "Player.h"
#include <sstream>


Player::Player(){}

Player::Player(std::string name, std::string description)
{
	prName = name;
	prDescription = description;
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
	// Converts input
	if (input.length() == 1)
	{
		char sToChar = toupper(input[0]);
		std::stringstream ss;
		ss << sToChar;
		ss >> input;
	}
	if (prLocation->returnLocation(input) != NULL)
	{
		prLocation = prLocation->returnLocation(input);
	}
}