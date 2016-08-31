#include "stdafx.h"
#include "HallOfFame.h"
#include <iostream>

HallOfFame::HallOfFame(){}

HallOfFame::~HallOfFame(){}

void HallOfFame::Display()
{
	std::cout << "Zorkish :: Hall Of Fame\n"
		<< "--------------------------------------------------------\n"
		<< "Top 10 Zorkish Adventure Champions\n"
		<< "There are none\n";
}