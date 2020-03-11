#include <iostream>
#include <string>
#include <vector>

#include "GameLoop.h"
#include "../levels/TestFiveXFive.h"
#include "../player/Player.h"

bool Game::GameLoop::GetIsGamePlaying()
{
	return IsGamePlaying;
}
void Game::GameLoop::SetIsGamePlaying(bool PIsGamePlaying)
{
	IsGamePlaying = PIsGamePlaying;
}

void Game::GameLoop::PlayGame(Game::GameLoop& PGame)
{
	//First we need a Player
	Player::Player Player;

	Levels::TestFiveXFive TestLevel;
	Generators::MapGenerator MapGenerator;
	std::string IsPlayingResponse;

	Geography::Map GameMap = TestLevel.setUpAMap();
	std::vector<Entities::BaseCharacter> CharacterVector = TestLevel.setUpCharacters();
	GameMap.GetSquareVector().at(22).SetOccupant(CharacterVector.at(0));
	GameMap.GetSquareVector().at(2).SetOccupant(CharacterVector.at(1));

	Player.GetCharacterList().push_back(CharacterVector.at(0));

	std::cout << "Let's start with something basic.\n\n";

	GameMap.CheckSquareLeft(GameMap.GetSquareVector().at(22));

	while (PGame.GetIsGamePlaying())
	{
		std::cout << "It is your turn.\n\n";
		std::cout << MapGenerator.BuildMap(GameMap) << std::endl;

		//TODO:Use the Player character to begin moving Roxas around the board


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