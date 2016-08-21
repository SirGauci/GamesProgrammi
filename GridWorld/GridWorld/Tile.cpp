#include "stdafx.h"
#include "Tile.h"


Tile::Tile()
{
	type = ' '; //defaults every tile to empty
}


Tile::~Tile()
{
}

void Tile::SetType(char t)
{
	type = t;
}
char Tile::GetType()
{
	return type;
}