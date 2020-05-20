
#include <algorithm>
#include <iostream>
#include <iterator>
#include <string>
#include <vector>

#include "Map.h"
#include "MapSquare.h"
#include "../entities/BaseCharacter.h"

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
			return *std::prev(It);
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
			return *std::next(It);
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
			return *It;
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
			return *It;
		}
	}
	return PMapSquare;
}

bool Geography::Map::MoveCharacterLeft(Entities::BaseCharacter& PCharacter)
{
	int count = 0;
	for (auto& square : SquareVector)
	{
		if (square.GetOccupant() == PCharacter)
		{
			std::cout << "I found the character!" << std::endl;
			if (!(CheckSquareLeft(square) == square))
			{
				std::cout << "The square to the left is open!" << std::endl;
				SquareVector.at(count - 1).SetOccupant(square.GetOccupant());
				Entities::BaseCharacter Placeholder;
				SquareVector.at(count).SetOccupant(Placeholder);
				break;
			}
			else
			{
				std::cout << "That move is not allowed." << std::endl;
				return false;
			}
		}
		count++;
	}

	std::cout << "I moved the character left!" << std::endl;
	return true;
}
bool Geography::Map::MoveCharacterRight(Entities::BaseCharacter& PCharacter)
{
	int count = 0;
	for (auto& square : SquareVector)
	{
		if (square.GetOccupant() == PCharacter)
		{
			std::cout << "I found the character!" << std::endl;
			if (!(CheckSquareRight(square) == square))
			{
				std::cout << "The square to the right is open!" << std::endl;
				SquareVector.at(count + 1).SetOccupant(square.GetOccupant());
				Entities::BaseCharacter Placeholder;
				SquareVector.at(count).SetOccupant(Placeholder);
				break;
			}
			else
			{
				std::cout << "That move is not allowed." << std::endl;
				return false;
			}
		}
		count++;
	}

	std::cout << "I moved the character right!" << std::endl;
	return true;
}
bool Geography::Map::MoveCharacterUp(Entities::BaseCharacter& PCharacter)
{
	int count = 0;
	for (auto& square : SquareVector)
	{
		if(square.GetOccupant() == PCharacter)
		{
			std::cout << "I found the character!" << std::endl;
			if (!(CheckSquareUp(square) == square))
			{
				std::cout << "The square above is open!" << std::endl;
				SquareVector.at(count - Width).SetOccupant(square.GetOccupant());
				Entities::BaseCharacter Placeholder;
				SquareVector.at(count).SetOccupant(Placeholder);
				break;
			}
			else
			{
				std::cout << "That move is not allowed." << std::endl;
				return false;
			}
		}
		count++;
	}

	std::cout << "I moved the character up!" << std::endl;
	return true;
}
bool Geography::Map::MoveCharacterDown(Entities::BaseCharacter& PCharacter)
{
	int count = 0;
	for (auto& square : SquareVector)
	{
		if (square.GetOccupant() == PCharacter)
		{
			std::cout << "I found the character!" << std::endl;
			if (!(CheckSquareDown(square) == square))
			{
				std::cout << "The square down is open!" << std::endl;
				SquareVector.at(count + Width).SetOccupant(square.GetOccupant());
				Entities::BaseCharacter Placeholder;
				SquareVector.at(count).SetOccupant(Placeholder);
				break;
			}
			else
			{
				std::cout << "That move is not allowed." << std::endl;
				return false;
			}
		}
		count++;
	}

	std::cout << "I moved the character down!" << std::endl;
	return true;
}