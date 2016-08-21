#pragma once
class Tile
{
public:
	Tile();
	~Tile();
	void SetType(char t);
	char GetType();
private:
	char type;
};

