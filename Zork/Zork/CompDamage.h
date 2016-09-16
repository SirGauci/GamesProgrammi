#pragma once

class CompDamage
{
public:
	void virtual Start() = 0;
	void virtual Update() = 0;
	int Output;
};