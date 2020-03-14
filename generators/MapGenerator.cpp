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

std::string Generators::MapGenerator::BuildMap(Geography::Map& PMap)
{

	//build the map
	std::string MapString = "";
	DrawBorder(PMap.GetWidth(), MapString, GetMapBorder());

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
		if (CurrentOccupant.GetCreationId() == 0)
		{
			MapString += "    ";
			std::cout << "Hi there" << std::endl;
		}
		else
		{
			MapString += " " + CurrentOccupant.GetSymbol() + CurrentOccupant.GetAffiliation() + " ";
			std::cout << "Whoa there" << std::endl;
		}

		//are you at the end of the row?
		if (CurrentX == (PMap.GetWidth() - 1))
		{
			MapString += "}\n";
			DrawBorder(PMap.GetWidth(), MapString, GetMapEdge());
		}

		index++;
	}
	DrawBorder(PMap.GetWidth(), MapString, GetMapBorder());
	return MapString;
}

void Generators::MapGenerator::DrawBorder(int PWidth, std::string& PMapString, std::string PBorderType)
{
	if (PBorderType == GetMapBorder())
	{
		PMapString += "==";
	}
	else
	{
		PMapString += "  ";
	}
	for (int i = 0; i < PWidth; i++)
	{
		PMapString += PBorderType;
	}
	PMapString += "\n";
}