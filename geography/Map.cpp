
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
Geography::MapSquare Geography::Map::CheckSquareLeft(Geography::MapSquare& PMapSquare)
{
	std::vector<Geography::MapSquare>::iterator It;
	//find check that the square exists and, if it does, get its position
	It = std::find(SquareVector.begin(), SquareVector.end(), PMapSquare);
	if (It != SquareVector.end())
	{
		Geography::MapSquare LeftSquare = *std::prev(It);
		if ((LeftSquare.GetXPosition() != (Width - 1)) &&
			LeftSquare.GetOccupant().GetCreationId() == 0)
		{
			return LeftSquare;
		}
	}
	return PMapSquare;
}
Geography::MapSquare Geography::Map::CheckSquareRight(Geography::MapSquare& PMapSquare)
{
	std::vector<Geography::MapSquare>::iterator It;
	//find check that the square exists and, if it does, get its position
	It = std::find(SquareVector.begin(), SquareVector.end(), PMapSquare);
	if (It != SquareVector.end())
	{
		Geography::MapSquare RightSquare = *std::next(It);
		if ((RightSquare.GetXPosition() != (0)) &&
			RightSquare.GetOccupant().GetCreationId() == 0)
		{
			return RightSquare;
		}
	}
	return PMapSquare;
}
Geography::MapSquare Geography::Map::CheckSquareUp(Geography::MapSquare& PMapSquare)
{
	std::vector<Geography::MapSquare>::iterator It;
	//find check that the square exists and, if it does, get its position
	It = std::find(SquareVector.begin(), SquareVector.end(), PMapSquare);
	if (It != SquareVector.end())
	{
		std::advance(It, -Width);
		Geography::MapSquare SquareUp = *It;
		if ((SquareUp.GetXPosition() == PMapSquare.GetXPosition()) &&
			SquareUp.GetYPosition() == PMapSquare.GetYPosition() - 1 &&
			SquareUp.GetOccupant().GetCreationId() == 0)
		{
			return SquareUp;
		}
	}
	return PMapSquare;
}
Geography::MapSquare Geography::Map::CheckSquareDown(Geography::MapSquare& PMapSquare)
{
	std::vector<Geography::MapSquare>::iterator It;
	//find check that the square exists and, if it does, get its position
	It = std::find(SquareVector.begin(), SquareVector.end(), PMapSquare);
	if (It != SquareVector.end())
	{
		std::advance(It, Width);
		Geography::MapSquare SquareDown = *It;
		if ((SquareDown.GetXPosition() == PMapSquare.GetXPosition()) &&
			SquareDown.GetYPosition() == PMapSquare.GetYPosition() + 1 &&
			SquareDown.GetOccupant().GetCreationId() == 0)
		{
			return SquareDown;
		}
	}
	return PMapSquare;
}