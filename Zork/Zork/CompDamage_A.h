#pragma once
#include "CompDamage.h"

class CompDamage_A : public CompDamage
{
public:
	void Start()
	{
		Output = 50;
	}

	void Update()
	{
		Output;
	}
};
