#pragma once
#include <string>

class Tile
{
public:
	Tile();
	Tile(std::string name);
	~Tile();

private:
	std::string _type;
};

