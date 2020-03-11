
#include <algorithm>
#include <iostream>
#include <iterator>
#include <string>
#include <vector>

#include "Map.h"
#include "MapSquare.h"

//Getters and Setters---------------------------------------------------------------
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
std::vector<Geography::MapSquare>& Geography::Map::GetSquareVector()
{
	return SquareVector;
}
void Geography::Map::SetSquareVector(std::vector<Geography::MapSquare>& PSquareVector)
{
	SquareVector = PSquareVector;
}

//Practical Funtions---------------------------------------------------------------
bool Geography::Map::CheckSquareLeft(Geography::MapSquare& PMapSquare)
{
	std::vector<Geography::MapSquare>::iterator It;
	//find check that the square exists and, if it does, get its position
	It = std::find(SquareVector.begin(), SquareVector.end(), PMapSquare);
	/*if (It != SquareVector.end())
	{
		Geography::MapSquare LeftSquare = *std::prev(It);
		std::cout << LeftSquare.GetXPosition() << std::endl;
	}*/
	return true;
}
bool Geography::Map::CheckSquareRight(Geography::MapSquare& PMapSquare)
{
	return true;
}
bool Geography::Map::CheckSquareUp(Geography::MapSquare& PMapSquare)
{
	return true;
}
bool Geography::Map::CheckSquareDown(Geography::MapSquare& PMapSquare)
{
	return true;
}