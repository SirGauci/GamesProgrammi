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
		<< "quit,\nhiscore (for testing)\n"
		<< "Press Q to return to the Main Menu\n";
}