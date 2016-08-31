#include "stdafx.h"
#include "SelectAdventure.h"
#include <iostream>

SelectAdventure::SelectAdventure(){}

SelectAdventure::~SelectAdventure(){}

void SelectAdventure::Display()
{
	std::cout << "Zorkish :: Select Adventure\n"
		<< "--------------------------------------------------------\n"
		<< "Choose your Adventure:\n"
		<< "\t1. Mountain World\n\t2. Water World\n\t3. Box World\n"
		<< "Select 1-3: ";
}
