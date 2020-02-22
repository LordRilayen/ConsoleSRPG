#include <iostream>
#include <string>
#include <vector>

#include "MapGenerator.h"
#include "../geography/Map.h"
#include "../geography/MapSquare.h"
#include "../entities/BaseCharacter.h"

std::string Generators::MapGenerator::GetMapBorder()
{
	return MapBorder;
}
std::string Generators::MapGenerator::GetMapEdge()
{
	return MapEdge;
}

std::string Generators::MapGenerator::DrawMap(Geography::Map PMap)
{

	//draw the map
	std::string Map = GetMapBorder();

	/*Map += GetMapEdge();
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
	}*/

	for (auto i = PMap.GetSquareVector().begin(); i != PMap.GetSquareVector().end(); i++)
	{
		PMap.GetSquareVector();
	}
	Map += GetMapBorder();
	return Map;
}