#include "stdafx.h"
#include "MapGenerator.h"
#include <iostream>
#include <fstream>
#include <string>


MapGenerator::MapGenerator(){}

MapGenerator::~MapGenerator(){}

// Reads a text file and generates locations and paths 
void MapGenerator::CreateMap()
{
	std::string line;	
	std::ifstream file("Map_1.txt");
	while (!file.eof())
	{
		std::getline(file, line);
		// Creates Locations and adds them to map
		if (line.substr(0, line.find(' ')) != "ulink" && line.substr(0, line.find(' ')) != "dlink" && line.substr(0, line.find(' ')) != "item")
		{
			Location* l = new Location(line.substr(0, line.find(' ')), line.substr(line.find_first_of(" \t") + 1));
			prMap.push_back(l);
		}
		// Creates links between locations (undirected)
		else if (line.substr(0, line.find(' ')) == "dlink")
		{
			std::string stringA;
			std::string stringB;
			std::string stringD;
			
			line.erase(0, line.find(' ') + 1);
			stringA = line.substr(0, line.find(' '));
			line.erase(0, line.find(' ') + 1);
			stringB = line.substr(0, line.find(' '));
			line.erase(0, line.find(' ') + 1);
			stringD = line.substr(0, line.find(' '));
			
			LookupLocation(stringA)->setPath(stringD, LookupLocation(stringB));
		}
		// Creates a link between locations (directed)
		else if (line.substr(0, line.find(' ')) == "ulink")
		{
			std::string stringA;
			std::string stringB;
			std::string stringD;

			line.erase(0, line.find(' ') + 1);
			stringA = line.substr(0, line.find(' '));
			line.erase(0, line.find(' ') + 1);
			stringB = line.substr(0, line.find(' '));
			line.erase(0, line.find(' ') + 1);
			stringD = line.substr(0, line.find(' '));

			LookupLocation(stringA)->setPath(stringD, LookupLocation(stringB));
			LookupLocation(stringB)->setPath(oppositeDirection(stringD), LookupLocation(stringA));
		}
		else if (line.substr(0, line.find(' ')) == "item")
		{
			std::string stringLoc;
			std::string stringN;
			std::string stringD;

			line.erase(0, line.find(' ') + 1);
			stringLoc = line.substr(0, line.find(' '));
			line.erase(0, line.find(' ') + 1);
			stringN = line.substr(0, line.find(' '));
			line.erase(0, line.find(' ') + 1);
			stringD = line;

			Item* i = new Item(stringN, stringD);

			LookupLocation(stringLoc)->getInventory()->Add(i);
		}
	}
	file.close();
}

std::vector<Location*> MapGenerator::fetchMap()
{
	return prMap;
}

// Searches location name and returns if found
Location* MapGenerator::LookupLocation(std::string input)
{
	for each (Location* l in prMap)
	{
		if (l->getName() == input)
		{
			return l;
		}
	}
}

// Returns opposite key
std::string MapGenerator::oppositeDirection(std::string input)
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
	else if (input == "U")
	{
		return "D";
	}
	else if (input == "D")
	{
		return "U";
	}
}