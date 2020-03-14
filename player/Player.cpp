#include <algorithm>
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

	//save these for later, in case player decides not to confirm move
	Geography::Map OriginalMap = PMap;
	int OriginalMapPosition = PMapPosition;
	Geography::MapSquare OriginalCharacterSquare = PCharacterSquare;

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
	Geography::MapSquare NewSquare;
	Entities::BaseCharacter Placeholder;

	std::cout << std::to_string(PCharacterSquare.GetOccupant().GetCreationId()) << std::endl;

	while (!MoveCompleted)
	{
		std::cout << Character.GetName() + " has " + std::to_string(CharacterMoveDistance) + " movement remaining.\n\n";

		std::cin >> MoveCommand;

		if (MoveCommand == "W" || "w")
		{
			NewSquare = PMap.CheckSquareUp(PCharacterSquare);
			if (!(NewSquare == PCharacterSquare))
			{
				std::cout << std::to_string(PMap.GetSquareVector().at(22).GetOccupant().GetCreationId()) << std::endl;
				std::cout << PMap.GetSquareVector().at(22).GetOccupant().GetSymbol() << std::endl;
				std::cout << PMap.GetSquareVector().at(22).GetOccupant().GetAffiliation() << std::endl;

				NewSquare.SetOccupant(PCharacterSquare.GetOccupant());
				//fill the old square with a character with CreationId 0
				std::cout << std::to_string(Placeholder.GetCreationId()) << std::endl;
				std::cout << Placeholder.GetSymbol() << std::endl;
				std::cout << Placeholder.GetAffiliation() << std::endl;
				PMap.GetSquareVector().at(PMapPosition).SetOccupant(Placeholder);
				std::cout << "===================" << std::endl;
				std::cout << std::to_string(PMapPosition) << std::endl;
				std::cout << std::to_string(PMap.GetSquareVector().at(PMapPosition).GetOccupant().GetCreationId()) << std::endl;
				std::cout << PMap.GetSquareVector().at(PMapPosition).GetOccupant().GetSymbol() << std::endl;
				std::cout << PMap.GetSquareVector().at(PMapPosition).GetOccupant().GetAffiliation() << std::endl;
				//place the new square in the correct position
				PMap.GetSquareVector().at(PMapPosition - PMap.GetWidth()) = NewSquare;

				std::cout << MapGenerator.BuildMap(PMap) << std::endl;

				std::cout << std::to_string(PMap.GetSquareVector().at(22).GetOccupant().GetCreationId()) << std::endl;
				std::cout << PMap.GetSquareVector().at(22).GetOccupant().GetSymbol() << std::endl;
				std::cout << PMap.GetSquareVector().at(22).GetOccupant().GetAffiliation() << std::endl;
				//update values to reflect new position
				PMapPosition -= PMap.GetWidth();
				PCharacterSquare = NewSquare;
			}
			//std::cout << std::to_string(PMapPosition) << std::endl;
			//std::cout << std::to_string(PCharacterSquare.GetOccupant().GetCreationId()) << std::endl;
		}
		else if (MoveCommand == "A" || "a")
		{
			NewSquare = PMap.CheckSquareLeft(PCharacterSquare);
			if (!(NewSquare == PCharacterSquare))
			{
				NewSquare.SetOccupant(PCharacterSquare.GetOccupant());
				//place the new square in the correct position
				PMap.GetSquareVector().at(PMapPosition - 1) = NewSquare;

				//fill the old square with a character with CreationId 0
				Entities::BaseCharacter Placeholder;
				PCharacterSquare.SetOccupant(Placeholder);

				std::cout << MapGenerator.BuildMap(PMap) << std::endl;
			}
		}
		else if (MoveCommand == "S" || "s")
		{
			NewSquare = PMap.CheckSquareDown(PCharacterSquare);
			if (!(NewSquare == PCharacterSquare))
			{
				NewSquare.SetOccupant(PCharacterSquare.GetOccupant());
				//place the new square in the correct position
				PMap.GetSquareVector().at(PMapPosition + PMap.GetWidth()) = NewSquare;

				//fill the old square with a character with CreationId 0
				Entities::BaseCharacter Placeholder;
				PCharacterSquare.SetOccupant(Placeholder);

				std::cout << MapGenerator.BuildMap(PMap) << std::endl;
			}
		}
		else if (MoveCommand == "D" || "d")
		{
			NewSquare = PMap.CheckSquareRight(PCharacterSquare);
			if (!(NewSquare == PCharacterSquare))
			{
				NewSquare.SetOccupant(PCharacterSquare.GetOccupant());
				//place the new square in the correct position
				PMap.GetSquareVector().at(PMapPosition + 1) = NewSquare;

				//fill the old square with a character with CreationId 0
				Entities::BaseCharacter Placeholder;
				PCharacterSquare.SetOccupant(Placeholder);

				std::cout << MapGenerator.BuildMap(PMap) << std::endl;
			}
		}
		else if (MoveCommand == "Back")
		{
			std::cout << MoveCommand << std::endl;
			MoveCompleted = true;
			std::cout << MoveCommand << std::endl;
		}
		else
		{
			std::cout << "Please type one character (W,A,S, or D) per command, and then press enter." << std::endl;
			
		}
		std::cout << "At the end of a loop" << std::endl;
	}

	std::cout << Character.GetName() + " has " + std::to_string(CharacterMoveDistance) + " movement remaining.";


	return true;
}