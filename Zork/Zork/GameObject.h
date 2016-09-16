#pragma once
#include <string>
#include <vector>
#include "CompAttackable.h"
#include "CompDamage.h"

class GameObject
{
public:
	std::string prName;
	std::string prDescription;

	GameObject(CompAttackable* atk, CompDamage* dmg) : prAtk(atk), prDmg(dmg)
	{
		if (prAtk != NULL)
		{
			prAtk->Start();
		}
		if (prDmg != NULL)
		{
			prDmg->Start();
		}
	}

	void Update(GameObject* dmg)
	{
		prAtk->Update(dmg->prDmg);
	}

private:
	CompAttackable* prAtk;
	CompDamage* prDmg;
};

