#include <iostream>
#include <string>
#include <math.h>

#include "Player.h"
#include "../generators/MapGenerator.h"
#include "../entities/BaseCharacter.h"

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
bool Player::Player::MoveCharacter(Geography::Map& PMap, int PMapPosition, Geography::MapSquare& PCharacterSquare)
{
	bool MoveCompleted = false;
	Entities::BaseCharacter Character = PCharacterSquare.GetOccupant();
	int CharacterMoveDistance = Character.GetMovement();
	int OriginalX = PCharacterSquare.GetXPosition();
	int OriginalY = PCharacterSquare.GetYPosition();

	Generators::MapGenerator MapGenerator;

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

	std::cout << "Use the W,A,S, or D keys to move. Type Back to cancel movement." << std::endl;
	std::cout << "Please type one character per command, and then press enter." << std::endl;
	std::string MoveCommand;

	while (!MoveCompleted)
	{
		std::cout << Character.GetName() + " has " + std::to_string(CharacterMoveDistance) + " movement remaining.\n\n";

		std::cin >> MoveCommand;

		if (MoveCommand == "W" || "w")
		{
			Geography::MapSquare SquareUp = PMap.CheckSquareUp(PCharacterSquare);
			
			if (!(SquareUp == PCharacterSquare))
			{
				//TODO: OK next you've got to figure out why this won't draw the symbols in the new square
				std::cout << "SquareUp contents: " + std::to_string(PCharacterSquare.GetOccupant().GetCreationId()) + std::to_string(PCharacterSquare.GetXPosition()) + std::to_string(PCharacterSquare.GetYPosition()) << std::endl;
				SquareUp.SetOccupant(PCharacterSquare.GetOccupant());
				std::cout << "SquareUp contents: " + std::to_string(SquareUp.GetOccupant().GetCreationId()) + std::to_string(SquareUp.GetXPosition()) + std::to_string(SquareUp.GetYPosition()) << std::endl;
				PMap.GetSquareVector().at(PMapPosition) = SquareUp;
				std::cout << "SquareUp contents: " + std::to_string(PMap.GetSquareVector().at(PMapPosition).GetOccupant().GetCreationId()) + std::to_string(PMap.GetSquareVector().at(PMapPosition).GetXPosition()) + std::to_string(PMap.GetSquareVector().at(PMapPosition).GetYPosition()) << std::endl;
				//fill the old square with a character with CreationId 0
				Entities::BaseCharacter Placeholder;
				PCharacterSquare.SetOccupant(Placeholder);

				std::cout << MapGenerator.BuildMap(PMap) << std::endl;
			}
		}
		else if (MoveCommand == "A" || "a")
		{
			
		}
		else if (MoveCommand == "S" || "s")
		{
			
		}
		else if (MoveCommand == "D" || "d")
		{
			
		}
		else if (MoveCommand == "Back")
		{

		}
		else
		{
			std::cout << "Please type one character (W,A,S, or D) per command, and then press enter." << std::endl;
			
		}
		MoveCompleted = true;
	}

	std::cout << Character.GetName() + " has " + std::to_string(CharacterMoveDistance) + " movement remaining.";


	return true;
}