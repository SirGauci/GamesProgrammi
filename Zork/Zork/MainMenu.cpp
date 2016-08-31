#include "stdafx.h"
#include "MainMenu.h"
#include <string>
#include <iostream>


MainMenu::MainMenu(){}

MainMenu::~MainMenu(){}

void MainMenu::Display()
{
	std::cout << "Zorkish :: Main Menu\n"
		<< "--------------------------------------------------------\n"
		<< "Welcome to Zorkish Adventures\n"
		<< "\t1. Select Adventure and Play\n\t2. Hall of Fame\n\t3. Help\n\t4. About\n\t5. Quit\n"
		<< "Select 1-5: ";
}
