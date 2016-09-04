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
	std::ifstream file("Map_1.txt");
	Link* link = new Link();
	while (!file.eof())
	{
		std::getline(file, line);
		if (line.substr(0, line.find(' ')) != "ulink" && line.substr(0, line.find(' ')) != "dlink")
		{
			Location l(line.substr(0, line.find(' ')), line.substr(line.find_first_of(" \t") + 1));
			prMap.push_back(l);
		}
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
			
			link->directLink(LookupLocation(stringA), LookupLocation(stringB), stringD);
		}
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

			link->undirectLink(LookupLocation(stringA), LookupLocation(stringB), stringD);
		}
	}
	file.close();
}

Location MapGenerator::LookupLocation(std::string input)
{
	for each (Location l in prMap)
	{
		if (l.getName() == input)
		{
			return l;
		}
	}
}