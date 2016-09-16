#pragma once
#include "CompDamage.h"

class CompAttackable
{
public:
	void virtual Start() = 0;
	void virtual Update (CompDamage* dmg) = 0;
	int Health;
};