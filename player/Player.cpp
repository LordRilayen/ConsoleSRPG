#include <iostream>
#include <string>
#include <math.h>

#include "Player.h"

//Getters and Setters---------------------------------------------------------
std::vector<Entities::BaseCharacter>& Player::Player::GetCharacterList()
{
	return CharacterList;
}
void Player::Player::SetCharacterList(std::vector<Entities::BaseCharacter>& PCharacterList)
{
	CharacterList = PCharacterList;
}

//Practical Functions---------------------------------------------------------
bool Player::Player::MoveCharacter(Geography::Map& PMap, Geography::MapSquare& PCharacterSquare, Geography::MapSquare& PTargetSquare)
{
	Entities::BaseCharacter Character = PCharacterSquare.GetOccupant();
	int CharacterMoveDistance = Character.GetMovement();

	//Entities::BaseCharacter TargetCharacter = PTargetSquare.GetOccupant();

	//int StartX = PCharacterSquare.GetXPosition();
	//int StartY = PCharacterSquare.GetYPosition();
	//int EndX = PTargetSquare.GetXPosition();
	//int EndY = PTargetSquare.GetYPosition();
	//int XMovement = StartX - EndX;
	//int YMovement = StartY - EndY;

	////check that the movement is a legal distance
	//if (std::abs(XMovement) + std::abs(YMovement) > CharacterMoveDistance ||
	//	TargetCharacter.GetCreationId() == 0)
	//{
	//	std::string MovementFailedMessage = Character.GetName() + " cannot move more than " + std::to_string(CharacterMoveDistance) + ".";
	//	std::cout << MovementFailedMessage;
	//	return false;
	//}

	////attempt to move the character
	//for (int i = CharacterMoveDistance; i > 0; i--)
	//{
	//	for (int j = std::abs(XMovement); j > 0; j--)
	//	{
	//		if (XMovement > 0)
	//		{

	//		}
	//	}
	//}



	return true;
}