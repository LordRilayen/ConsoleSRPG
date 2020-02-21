#include <iostream>
#include <string>
#include <vector>

#include "MapGenerator.h"
#include "../entities/BaseCharacter.h"

std::string Generators::MapGenerator::GetMapBorder()
{
	return MapBorder;
}
std::string Generators::MapGenerator::GetMapEdge()
{
	return MapEdge;
}

std::string Generators::MapGenerator::DrawMap(std::vector<Entities::BaseCharacter> PDeployedCharacters)
{

	//draw the map
	std::string Map = GetMapBorder() + GetMapEdge();

	int row = 0;
	int column = 0;
	while (row < 20)
	{
		Map += "{|";
		while (column < 20)
		{
			Map += "    |";
			column++;
		}
		column = 0;
		Map += "}\n";
		Map += GetMapEdge();
		row++;
	}
	Map += GetMapBorder();
	return Map;
}