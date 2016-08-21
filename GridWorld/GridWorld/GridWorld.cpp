// GridWorld.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <sstream>
#include <string>
#include <Windows.h>
#include "Grid.h"
#include "Player.h"
#include <thread>

void Timer(Player *p, std::string input)
{
	int time = 0;
	do
	{
		time++;
		std::cout << "Time: " << time << " seconds" << "\nEnter direction:\n";
		Sleep(1000);
		system("cls");
	} while ((p->GetCell() != 'D' && p->GetCell() != 'G') && input != "q");
}

void CommandProcessor(Player *p, std::string input)
{
	char command;
	do
	{
		std::getline(std::cin, input);
		command = input[0];
		command = tolower(command);
		if (command == 'n' || command == 's' || command == 'w' || command == 'e')
		{
			p->Move(command);
		}
		else if (command == 'q')
		{
			std::cout << "Goodbye!";
		}
		else
		{
			std::cout << "Invalid command\n";
		}
	} while ((p->GetCell() != 'D' && p->GetCell() != 'G') && command != 'q');
}

int main()
{
	Grid* grid = new Grid();
	Player* p = new Player(*grid);
	std::string input;
	std::thread inputThread(CommandProcessor, p, input);

	Timer(p, input);

	if (p->GetCell() == 'D')
	{
		std::cout << "Arrrrgh.... you've fallen down a pit.\nYOU HAVE DIED!\nThanks for playing. Maybe next time.";
	}
	else if (input != "q")
	{
		std::cout << "Wow... you've discovered a large chest filled with GOLD coins\nYOU WIN!\nThanks for playing. There probably won't be a next time.";
	}

	inputThread.detach();

	return 0;
}