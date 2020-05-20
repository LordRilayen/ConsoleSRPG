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
bool Player::Player::MoveCharacter(Geography::Map& PMap, Entities::BaseCharacter& PCharacter)
{
	Generators::MapGenerator MapGenerator;

	bool MoveCompleted = false;
	int CharacterMoveDistance = PCharacter.GetMovement();

	std::cout << "Use the W,A,S, or D keys to move. Type Back to cancel movement." << std::endl;
	std::cout << "Please type one character per command, and then press enter." << std::endl;
	std::string MoveCommand;

	while (!MoveCompleted)
	{
		std::cout << PCharacter.GetName() + " has " + std::to_string(CharacterMoveDistance) + " movement remaining.\n\n";
		std::cin >> MoveCommand;

		std::cout << MoveCommand << std::endl;

		if (MoveCommand.compare("W") == 0 || MoveCommand.compare("w") == 0)
		{
			std::cout << "I typed a w." << std::endl;
			if (PMap.MoveCharacterUp(PCharacter))
			{
				CharacterMoveDistance--;
			}
			std::cout << MapGenerator.BuildMap(PMap) << std::endl;
		}
		else if (MoveCommand.compare("A") == 0 || MoveCommand.compare("a") == 0)
		{
			std::cout << "I typed an a." << std::endl;
			if (PMap.MoveCharacterLeft(PCharacter))
			{
				CharacterMoveDistance--;
			}
			std::cout << MapGenerator.BuildMap(PMap) << std::endl;
		}
		else if (MoveCommand.compare("S") == 0 || MoveCommand.compare("s") == 0)
		{
			std::cout << "I typed an s." << std::endl;
			if (PMap.MoveCharacterDown(PCharacter))
			{
				CharacterMoveDistance--;
			}
			std::cout << MapGenerator.BuildMap(PMap) << std::endl;
		}
		else if (MoveCommand.compare("D") == 0 || MoveCommand.compare("d") == 0)
		{
			std::cout << "I typed a d." << std::endl;
			if (PMap.MoveCharacterRight(PCharacter))
			{
				CharacterMoveDistance--;
			}
			std::cout << MapGenerator.BuildMap(PMap) << std::endl;
		}
		else if (MoveCommand.compare("Back") == 0 || MoveCommand.compare("back") == 0)
		{
			std::cout << "I typed a Back." << std::endl;
		}
		else
		{
			std::cout << "Please type one character (W,A,S, or D) per command, and then press enter." << std::endl;
			
		}
		std::cout << "At the end of a loop" << std::endl;//DEBUGGING
		if (CharacterMoveDistance <= 0) {
			MoveCompleted = true;
		}
	}

	std::cout << PCharacter.GetName() + " has " + std::to_string(CharacterMoveDistance) + " movement remaining.";


	return true;
}