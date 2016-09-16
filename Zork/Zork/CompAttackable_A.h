#pragma once
#include "CompAttackable.h"

class CompAttackable_A : public CompAttackable
{
public:
	void Start()
	{
		Health = 100;
	}

	void Update (CompDamage* dmg) 
	{
		if (dmg != NULL)
		{
			Health -= (dmg->Output - 2) / 3;
		}
	}
};
