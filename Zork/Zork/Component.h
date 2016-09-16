#pragma once

class Component
{
public:
	~Component(){}
	void virtual Start() = 0;
	void virtual Update() = 0;
};
