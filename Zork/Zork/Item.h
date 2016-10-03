#pragma once
#include <string>

class Item 
{
public:
	Item();
	Item(std::string name, std::string description);
	~Item();
	void SetName(std::string name);
	void SetDesc(std::string name);
	std::string getName();
	std::string getDesc();
private:
	std::string prName;
	std::string prDescription;
};

