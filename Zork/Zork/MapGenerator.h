#pragma once
#include "Location.h"
#include <vector>

class MapGenerator
{
public:
	MapGenerator();
	~MapGenerator();
	void CreateMap();
private:
	Location* LookupLocation(std::string input);
	std::string oppositeDirection(std::string input);
	std::vector<Location*> prMap;
};

