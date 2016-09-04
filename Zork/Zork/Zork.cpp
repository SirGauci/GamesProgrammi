// Zork.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "StateManager.h"
#include "MapGenerator.h"

int main()
{
	MapGenerator* mGenerator = new MapGenerator();
	mGenerator->CreateMap();
	StateManager* sManager = new StateManager();
	sManager->Manager();
    return 0;
}

