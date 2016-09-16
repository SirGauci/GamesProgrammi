// Zork.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "StateManager.h"
#include "GameObject.h"
#include "CompAttackable_A.h"
#include "CompDamage_B.h"
#include "CompDamage_A.h"

int main()
{
	GameObject* Troll = new GameObject(new CompAttackable_A, new CompDamage_B);
	GameObject* Sword = new GameObject(NULL, new CompDamage_A);

	Troll->Update(Sword);
	
	StateManager* sManager = new StateManager();
	sManager->Manager();
    return 0;
}

