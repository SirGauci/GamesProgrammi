#include "stdafx.h"
#include "Help.h"
#include <iostream>


Help::Help(){}

Help::~Help(){}

void Help::Display()
{
	std::cout << "Zorkish :: Help\n"
		<< "--------------------------------------------------------\n"
		<< "The following commands are supported: \n"
		<< "\tq [QUIT]\n\thiscore (for testing)\n\tmove, go, run, walk [MOVEMENT]\n\tN, S, E, W, U, D[SUPPORTED DIRECTIONS]\n"
		<< "Press Q to return to the Main Menu\n";
}