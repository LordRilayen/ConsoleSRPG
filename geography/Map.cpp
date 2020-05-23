
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
	//check that the square exists and, if it does, get its position
	It = std::find(SquareVector.begin(), SquareVector.end(), PMapSquare);
	//ensure the MapSquare pointed to by the iterator is not the out out bounds or the first value 
	if (It != SquareVector.end() &&
		!(*It == SquareVector.at(0)))
	{
		Geography::MapSquare LeftSquare = *std::prev(It);
		//ensure that moving left on the board, corresponding to backwards down the SquareVector, hasn't brought us up to the previous row
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
	//check that the square exists and, if it does, get its position
	It = std::find(SquareVector.begin(), SquareVector.end(), PMapSquare);
	//ensure the MapSquare pointed to by the iterator is not the out out bounds or the last value 
	if (It != SquareVector.end() &&
		!(*It == SquareVector.at(SquareVector.size() - 1)))
	{
		Geography::MapSquare RightSquare = *std::next(It);
		//ensure that moving right on the board, corresponding to forwards up the SquareVector, hasn't brought us down to the next row
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
	//if y = 0 of the square passed in, we can't go higher
	if (PMapSquare.GetYPosition() != 0) 
	{
		std::vector<Geography::MapSquare>::iterator It;
		//find check that the square exists and, if it does, get its position
		It = std::find(SquareVector.begin(), SquareVector.end(), PMapSquare);
		if (It != SquareVector.end())
		{
			std::advance(It, -Width);
			Geography::MapSquare SquareUp = *It;
			//ensure that moving up on the board, corresponding to a jump backwards down the SquareVector, hasn't brought us to the wrong column or to the wrong row
			if ((SquareUp.GetXPosition() == PMapSquare.GetXPosition()) &&
				SquareUp.GetYPosition() == PMapSquare.GetYPosition() - 1 &&
				SquareUp.GetOccupant().GetCreationId() == 0)
			{
				return *It;
			}
		}
	}
	return PMapSquare;
}
Geography::MapSquare Geography::Map::CheckSquareDown(Geography::MapSquare& PMapSquare)
{
	//if y = 4 on a height 5 board, then we're on the bottom row and can't go lower
	if (PMapSquare.GetYPosition() != Height - 1)
	{
		std::vector<Geography::MapSquare>::iterator It;
		//find check that the square exists and, if it does, get its position
		It = std::find(SquareVector.begin(), SquareVector.end(), PMapSquare);
		if (It != SquareVector.end())
		{
			std::advance(It, Width);
			Geography::MapSquare SquareDown = *It;
			//ensure that moving down on the board, corresponding to a jump forwards up the SquareVector, hasn't brought us to the wrong column or to the wrong row
			if ((SquareDown.GetXPosition() == PMapSquare.GetXPosition()) &&
				SquareDown.GetYPosition() == PMapSquare.GetYPosition() + 1 &&
				SquareDown.GetOccupant().GetCreationId() == 0)
			{
				return *It;
			}
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
			if (!(CheckSquareLeft(square) == square))
			{
				SquareVector.at(count - 1).SetOccupant(PCharacter);
				PCharacter.SetXPosition(SquareVector.at(count - 1).GetXPosition());
				PCharacter.SetYPosition(SquareVector.at(count - 1).GetYPosition());
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
	return true;
}
bool Geography::Map::MoveCharacterRight(Entities::BaseCharacter& PCharacter)
{
	int count = 0;
	for (auto& square : SquareVector)
	{
		if (square.GetOccupant() == PCharacter)
		{
			if (!(CheckSquareRight(square) == square))
			{
				SquareVector.at(count + 1).SetOccupant(PCharacter);
				PCharacter.SetXPosition(SquareVector.at(count + 1).GetXPosition());
				PCharacter.SetYPosition(SquareVector.at(count + 1).GetYPosition());
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
	return true;
}
bool Geography::Map::MoveCharacterUp(Entities::BaseCharacter& PCharacter)
{
	int count = 0;
	for (auto& square : SquareVector)
	{
		if(square.GetOccupant() == PCharacter)
		{
			if (!(CheckSquareUp(square) == square))
			{
				SquareVector.at(count - Width).SetOccupant(PCharacter);
				PCharacter.SetXPosition(SquareVector.at(count - Width).GetXPosition());
				PCharacter.SetYPosition(SquareVector.at(count - Width).GetYPosition());
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
	return true;
}
bool Geography::Map::MoveCharacterDown(Entities::BaseCharacter& PCharacter)
{
	int count = 0;
	for (auto& square : SquareVector)
	{
		if (square.GetOccupant() == PCharacter)
		{
			if (!(CheckSquareDown(square) == square))
			{
				SquareVector.at(count + Width).SetOccupant(PCharacter);
				PCharacter.SetXPosition(SquareVector.at(count + Width).GetXPosition());
				PCharacter.SetYPosition(SquareVector.at(count + Width).GetYPosition());
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
	return true;
}