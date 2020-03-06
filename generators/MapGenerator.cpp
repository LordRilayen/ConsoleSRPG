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

std::string Generators::MapGenerator::DrawMap(Geography::Map& PMap)
{

	//draw the map
	std::string MapString = GetMapBorder();

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

	int index = 0;
	for (auto i = PMap.GetSquareVector().begin(); i != PMap.GetSquareVector().end(); i++)
	{
		Geography::MapSquare CurrentSquare = PMap.GetSquareVector().at(index);
		int CurrentX = CurrentSquare.GetXPosition();
		int CurrentY = CurrentSquare.GetYPosition();
		Entities::BaseCharacter CurrentOccupant = CurrentSquare.GetOccupant();

		//is this a new row?
		if (CurrentX == 0)
		{
			MapString += "{|";
		}
		else
		{
			MapString += "|";
		}

		//is the square occupied?
		if (CurrentOccupant != nullptr)
		{
			MapString += " " + CurrentOccupant.GetSymbol() + CurrentOccupant.GetAffiliation() + " ";
		}
		else
		{
			MapString += "    ";
		}

		index++;
	}
	MapString += GetMapBorder();
	return MapString;
}