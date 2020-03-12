#include <iostream>
#include <string>
#include <vector>

#include "GameLoop.h"
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

	Levels::TestFiveXFive TestLevel;//test setup
	Generators::MapGenerator MapGenerator;
	std::string IsPlayingResponse;

	Geography::Map GameMap = TestLevel.setUpAMap();//test setup
	std::vector<Entities::BaseCharacter> CharacterVector = TestLevel.setUpCharacters();//test setup
	GameMap.GetSquareVector().at(22).SetOccupant(CreateNewCharacterFromTemplate(CharacterVector.at(0)));//test setup
	GameMap.GetSquareVector().at(22).GetOccupant().SetXPosition(GameMap.GetSquareVector().at(22).GetXPosition());
	GameMap.GetSquareVector().at(2).SetOccupant(CreateNewCharacterFromTemplate(CharacterVector.at(1)));//test setup
	GameMap.GetSquareVector().at(2).GetOccupant().SetXPosition(GameMap.GetSquareVector().at(2).GetXPosition());
	GameMap.GetSquareVector().at(1).SetOccupant(CreateNewCharacterFromTemplate(CharacterVector.at(1)));//test setup
	GameMap.GetSquareVector().at(1).GetOccupant().SetXPosition(GameMap.GetSquareVector().at(1).GetXPosition());

	Player.GetCharacterList().push_back(CharacterVector.at(0));//test setup

	std::cout << "Let's start with something basic.\n\n";

	std::cout << std::to_string(GameMap.CheckSquareUp(GameMap.GetSquareVector().at(7)).GetXPosition()) << std::endl;

	while (PGame.GetIsGamePlaying())
	{
		std::cout << "It is your turn.\n\n";
		std::cout << MapGenerator.BuildMap(GameMap) << std::endl;

		Player.MoveCharacter(GameMap, 22, GameMap.GetSquareVector().at(22));


		//determine whether to end the game--maybe its own function later?
		std::cout << "Are you done playing the game? y/n\n";
		std::cin >> IsPlayingResponse;
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
Entities::BaseCharacter Game::GameLoop::CreateNewCharacter()
{
	Entities::BaseCharacter NewCharacter;
	return CreateNewCharacterFromTemplate(NewCharacter);
}
Entities::BaseCharacter Game::GameLoop::CreateNewCharacterFromTemplate(Entities::BaseCharacter PTemplate)
{
	//Get the last character in AllGameCharacters (which should have everyone), get their CreationId, increment it, and set that for the new character
	if (AllGameCharacters.size() == 0)
	{
		PTemplate.SetCreationId(1);
	}
	else
	{
		PTemplate.SetCreationId(AllGameCharacters.at(AllGameCharacters.size() - 1).GetCreationId() + 1);
	}
	AllGameCharacters.push_back(PTemplate);

	return PTemplate;
}


//---------------------------------------------------------------------------------