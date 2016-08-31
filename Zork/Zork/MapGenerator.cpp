#include "stdafx.h"
#include "MapGenerator.h"
#include <iostream>
#include <fstream>
#include <string>



MapGenerator::MapGenerator(){}

MapGenerator::~MapGenerator(){}

void MapGenerator::CreateMap()
{
	std::string line;
	std::ifstream file;
	file.open("Map_1.txt");
	while (!file.eof())
	{
		std::getline(file, line);
		//prMap.push_back(new Location(line[0], ))
	}
	file.close();
}