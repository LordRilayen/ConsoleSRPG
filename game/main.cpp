#include <string>
#include <iostream>
#include <vector>

#include "../entities/BaseCharacter.h"
#include "../loot/Helmet.h"
#include "../loot/Axe.h"
#include "../generators/MapGenerator.h"


int main()
{
	Generators::MapGenerator MapGenerator;
	Entities::BaseCharacter Roxas;

	std::vector<Entities::BaseCharacter> DeployedCharacters;
	DeployedCharacters.push_back(Roxas);

	std::cout << MapGenerator.DrawMap(DeployedCharacters);

	return 0;
}