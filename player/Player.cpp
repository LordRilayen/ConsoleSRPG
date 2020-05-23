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

	//Movement
	bool MoveCompleted = false;
	int CharacterMoveDistance = PCharacter.GetMovement();

	//Cancelling Movement
	bool MovementCancelled = false;
	std::vector<std::string> MoveCommandReversal;

	std::cout << "Use the W,A,S, or D keys to move. Type Back to cancel movement." << std::endl;
	std::cout << "Please type one character per command, and then press enter." << std::endl;
	std::string MoveCommand;

	while (!MoveCompleted)
	{
		if (!MovementCancelled)
		{
			std::cout << PCharacter.GetName() + " has " + std::to_string(CharacterMoveDistance) + " movement remaining.\n\n";
			std::cin >> MoveCommand;
		}
		else
		{
			if (MoveCommandReversal.size() != 0)
			{
				MoveCommand = MoveCommandReversal.at(MoveCommandReversal.size() - 1);
				CharacterMoveDistance++;
				MoveCommandReversal.pop_back();
			}
			else
			{
				std::cout << "Character Movement cancelled." << std::endl;
				break;
			}
		}

		if (MoveCommand.compare("W") == 0 || MoveCommand.compare("w") == 0)
		{
			if (PMap.MoveCharacterUp(PCharacter))
			{
				CharacterMoveDistance--;
				//prepare in case the player cancels their movement commands
				if (!MovementCancelled)
				{
					MoveCommandReversal.push_back("s");
				}
			}
			std::cout << PCharacter.GetName() + " moved to (" + std::to_string(PCharacter.GetXPosition()) + ", " + std::to_string(PCharacter.GetYPosition()) + ")" << std::endl;
			std::cout << MapGenerator.BuildMap(PMap) << std::endl;
		}
		else if (MoveCommand.compare("A") == 0 || MoveCommand.compare("a") == 0)
		{
			if (PMap.MoveCharacterLeft(PCharacter))
			{
				CharacterMoveDistance--;
				//prepare in case the player cancels their movement commands
				if (!MovementCancelled)
				{
					MoveCommandReversal.push_back("d");
				}

			}
			std::cout << PCharacter.GetName() + " moved to (" + std::to_string(PCharacter.GetXPosition()) + ", " + std::to_string(PCharacter.GetYPosition()) + ")" << std::endl;
			std::cout << MapGenerator.BuildMap(PMap) << std::endl;
		}
		else if (MoveCommand.compare("S") == 0 || MoveCommand.compare("s") == 0)
		{
			if (PMap.MoveCharacterDown(PCharacter))
			{
				CharacterMoveDistance--;
				//prepare in case the player cancels their movement commands
				if (!MovementCancelled)
				{
					MoveCommandReversal.push_back("w");
				}
			}
			std::cout << PCharacter.GetName() + " moved to (" + std::to_string(PCharacter.GetXPosition()) + ", " + std::to_string(PCharacter.GetYPosition()) + ")" << std::endl;
			std::cout << MapGenerator.BuildMap(PMap) << std::endl;
		}
		else if (MoveCommand.compare("D") == 0 || MoveCommand.compare("d") == 0)
		{
			if (PMap.MoveCharacterRight(PCharacter))
			{
				CharacterMoveDistance--;
				//prepare in case the player cancels their movement commands
				if (!MovementCancelled)
				{
					MoveCommandReversal.push_back("a");
				}
			}
			std::cout << PCharacter.GetName() + " moved to (" + std::to_string(PCharacter.GetXPosition()) + ", " + std::to_string(PCharacter.GetYPosition()) + ")" << std::endl;
			std::cout << MapGenerator.BuildMap(PMap) << std::endl;
		}
		else if (MoveCommand.compare("Back") == 0 || MoveCommand.compare("back") == 0)
		{
			MovementCancelled = true;
		}
		else
		{
			std::cout << "Please type one character (W,A,S, or D) per command, and then press enter." << std::endl;
			
		}
		if (CharacterMoveDistance <= 0) 
		{
			if (!MovementCancelled)
			{
				std::string Confirm;
				std::cout << PCharacter.GetName() + " has " + std::to_string(CharacterMoveDistance) + " movement remaining." << std::endl;
				std::cout << "Confirm " + PCharacter.GetName() + "'s new location? Type Y to confirm or N to cancel, the press Enter." << std::endl;
				do
				{
					std::cin >> Confirm;
					if (Confirm.compare("Y") == 0 || Confirm.compare("y") == 0)
					{
						std::cout << PCharacter.GetName() + " moved to (" + std::to_string(PCharacter.GetXPosition()) + ", " + std::to_string(PCharacter.GetYPosition()) + ")" << std::endl;
						MoveCompleted = true;
					}
					else if (Confirm.compare("N") == 0 || Confirm.compare("n") == 0)
					{
						MovementCancelled = true;
					}
					else
					{
						std::cout << "Please type one character (Y or N) per command, and then press enter." << std::endl;
					}
				} while (Confirm.compare("Y") != 0 && Confirm.compare("N") != 0 && Confirm.compare("y") != 0 && Confirm.compare("n") != 0);
			}
		}
	}

	return true;
}