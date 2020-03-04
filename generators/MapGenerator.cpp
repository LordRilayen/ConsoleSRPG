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
		std::cout << *i.g << std::endl;
		/*int CurrentX = PMap.GetSquareVector().at(*i).GetXPosition();
		int CurrentY = PMap.GetSquareVector().at(i*).GetYPosition();
		std::cout << "(" << CurrentX << "," << CurrentY << ")" << std::endl;*/

		//CURRENT TASK: FIGURING OUT HOW TO ACCESS THE INDEX OF THE ITERATOR TO DETERMINE WHEN TO DROP TO THE NEXT LINE DRAWING SQUARES--THE CODE CURRENTLY HAS COMPILER ERRORS
	}
	Map += GetMapBorder();
	return Map;
}