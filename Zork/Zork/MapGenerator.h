#pragma once
#include "Link.h"
#include "Location.h"
#include <vector>

class MapGenerator
{
public:
	MapGenerator();
	~MapGenerator();
	void CreateMap();
private:
	Location LookupLocation(std::string input);
	std::vector<Location> prMap;
};

