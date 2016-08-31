#include "stdafx.h"
#include "About.h"
#include <iostream>


About::About(){}

About::~About(){}

void About::Display()
{
	std::cout << "Zorkish :: About\n"
		<< "--------------------------------------------------------\n"
		<< "Written by: Daniel Gauci\n"
		<< "Press Q to return to the Main Menu\n";
}