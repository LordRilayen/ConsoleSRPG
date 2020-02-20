#include <string>
#include <iostream>

#include "../entities/Survivor.h"
#include "../loot/Helmet.h"
#include "../loot/Axe.h"
#include "../generators/MapGenerator.h"


int main()
{
	Generators::MapGenerator MapGenerator;

	MapGenerator.DrawMap();

	return 0;
}