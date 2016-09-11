// Zork.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "StateManager.h"

int main()
{
	StateManager* sManager = new StateManager();
	sManager->Manager();
    return 0;
}

