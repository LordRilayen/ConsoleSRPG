#include <iostream>
#include <string>
#include <vector>

#include "Map.h"
#include "MapSquare.h"

int Geography::Map::GetWidth()
{
	return Width;
}
void Geography::Map::SetWidth(int PWidth)
{
	Width = PWidth;
}
int Geography::Map::GetHeight()
{
	return Height;
}
void Geography::Map::SetHeight(int PHeight)
{
	Height = PHeight;
}
std::vector<Geography::MapSquare> Geography::Map::GetSquareVector()
{
	return SquareVector;
}
void Geography::Map::SetSquareVector(std::vector<Geography::MapSquare> PSquareVector)
{
	SquareVector = PSquareVector;
}

