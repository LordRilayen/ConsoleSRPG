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

	Entities::BaseCharacter TargetCharacter = PTargetSquare.GetOccupant();

	int StartX = PCharacterSquare.GetXPosition();
	int StartY = PCharacterSquare.GetYPosition();
	int EndX = PTargetSquare.GetXPosition();
	int EndY = PTargetSquare.GetYPosition();

	//check that the movement is legal
	if (std::abs(StartX - EndX) + std::abs(StartY - EndY) > CharacterMoveDistance ||
		TargetCharacter.GetIsPlaceholder() == false)
	{
		std::string MovementFailedMessage = Character.GetName() + " cannot move more than " + std::to_string(CharacterMoveDistance) + ".";
		std::cout << MovementFailedMessage;
		return false;
	}

	return true;
}