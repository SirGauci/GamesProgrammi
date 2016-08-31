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
	std::vector<Location> prMap;
};

