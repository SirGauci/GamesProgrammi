#pragma once
#include "CompDamage.h"

class CompDamage_B : public CompDamage
{
public:
	void Start()
	{
		Output = 70;
	}

	void Update()
	{
		Output;
	}
};
