#include <iostream>
#include <string>
#include <vector>

#include "GameLoop.h"
#include "../entities/GenericClass.h"
#include "../generators/CharacterGenerator.h"
#include "../levels/TestFiveXFive.h"
#include "../player/Player.h"


//Getters and setters-------------------------------------------------------------
bool Game::GameLoop::GetIsGamePlaying()
{
	return IsGamePlaying;
}
void Game::GameLoop::SetIsGamePlaying(bool PIsGamePlaying)
{
	IsGamePlaying = PIsGamePlaying;
}
std::vector<Entities::BaseCharacter> Game::GameLoop::GetAllGameCharacters()
{
	return AllGameCharacters;
}
void Game::GameLoop::SetAllGameCharacters(std::vector<Entities::BaseCharacter>& PAllGameCharacters)
{
	AllGameCharacters = PAllGameCharacters;
}
//---------------------------------------------------------------------------------

//Practical functions--------------------------------------------------------------
void Game::GameLoop::PlayGame(Game::GameLoop& PGame)
{
	//First we need a Player
	Player::Player Player;

	Generators::MapGenerator MapGenerator;
	Generators::CharacterGenerator CharacterGenerator;
	std::string IsPlayingResponse;

	std::cout << "Let's start with something basic.\n" << std::endl;

	while (PGame.GetIsGamePlaying())
	{
		Entities::BaseCharacter Replica = CharacterGenerator.CreateNewCharacter(AllGameCharacters);
		Replica.GetCompleteStatus();
		std::cout << "\n\n";
		Replica.SetClass(ACOLYTE);
		std::cout << "Here 1" << std::endl;
		Entities::GenericClass* Class = Replica.GetClass();
		std::cout << "Here 2" << std::endl;
		Class->LevelUp(Replica);
		std::cout << "Here 3" << std::endl;
		Replica.GetCompleteStatus();
		std::cout << "Here 4" << std::endl;

		//determine whether to end the game--maybe its own function later?
		std::cout << "Are you done playing the game? y/n\n";
		std::cout << "====================" << std::endl;
		std::cin >> IsPlayingResponse;
		std::cout << "====================\n" << std::endl;
		if (IsPlayingResponse == "y")
		{
			PGame.SetIsGamePlaying(false);
		}
		else if (IsPlayingResponse == "n")
		{
			std::cout << "\nGreat!" << std::endl;
		}
	}
}


//---------------------------------------------------------------------------------

//JUST PUT ALL THIS DOWN THERE FOR NOW JUST IN CASE
//Geography::Map GameMap = TestLevel.setUpAMap();//test setup
	//std::vector<Entities::BaseCharacter> CharacterVector = TestLevel.setUpCharacters();//test setup
	//GameMap.GetSquareVector().at(22).SetOccupant(CharacterGenerator.CreateNewCharacterFromTemplate(AllGameCharacters, CharacterVector.at(0)));//test setup
	//GameMap.GetSquareVector().at(22).GetOccupant().SetXPosition(GameMap.GetSquareVector().at(22).GetXPosition());
	//GameMap.GetSquareVector().at(2).SetOccupant(CharacterGenerator.CreateNewCharacterFromTemplate(AllGameCharacters, CharacterVector.at(1)));//test setup
	//GameMap.GetSquareVector().at(2).GetOccupant().SetXPosition(GameMap.GetSquareVector().at(2).GetXPosition());
	//GameMap.GetSquareVector().at(1).SetOccupant(CharacterGenerator.CreateNewCharacterFromTemplate(AllGameCharacters, CharacterVector.at(1)));//test setup
	//GameMap.GetSquareVector().at(1).GetOccupant().SetXPosition(GameMap.GetSquareVector().at(1).GetXPosition());

	//Player.GetCharacterList().push_back(CharacterVector.at(0));//test setup