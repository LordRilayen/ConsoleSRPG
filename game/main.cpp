#include <string>
#include <iostream>
#include <vector>

#include "../entities/BaseCharacter.h"
#include "../generators/MapGenerator.h"
#include "GameLoop.h"

//some private testing functions--delete later as they become unnecessary
#include "../levels/TestFiveXFive.h"


int main()
{
	Game::GameLoop Game;
	Game.PlayGame(Game);

	return 0;
}

