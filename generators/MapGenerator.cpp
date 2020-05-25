#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>
#include <vector>

#include "MapGenerator.h"
#include "EnemyGenerator.h"
#include "../geography/Map.h"
#include "../geography/MapSquare.h"
#include "../entities/BaseCharacter.h"

//Getters and Setters-------------------------------------------
std::string Generators::MapGenerator::GetMapBorder()
{
	return MapBorder;
}
std::string Generators::MapGenerator::GetMapEdge()
{
	return MapEdge;
}
//--------------------------------------------------------------

//Practical functions-------------------------------------------
//Public-------------
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
		}
		else
		{
			MapString += " " + CurrentOccupant.GetSymbol() + CurrentOccupant.GetAffiliation() + " ";
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

//GenerateMap with no parameters creates a default, 8x8 map of difficulty 1
Geography::Map Generators::MapGenerator::GenerateMap()
{
	srand(time(0));
	Geography::Map GameMap;
	Generators::EnemyGenerator EnemyGenerator;
	bool IsDeploymentCenterSet = false;
	

	GameMap.SetHeight(8);
	GameMap.SetWidth(8);
	int MaxForces = CalculateEnemyForces(GameMap.GetHeight() * GameMap.GetWidth());
	int TotalForces = 0;
	GameMap.SetDifficulty(1);

	//build a board
	std::vector<Geography::MapSquare> SquareVector;
	for (int Height = 0; Height < GameMap.GetHeight(); Height++)
	{
		for (int Width = 0; Width < GameMap.GetWidth(); Width++)
		{
			Geography::MapSquare NewSquare;
			NewSquare.SetXPosition(Width);
			NewSquare.SetYPosition(Height);
			Entities::BaseCharacter Placeholder;
			NewSquare.SetOccupant(Placeholder);
			SquareVector.push_back(NewSquare);
		}
	}

	//populate the board
	Entities::BaseCharacter NewEnemy;
	std::cout << std::to_string(MaxForces) << std::endl;
	for (int i = 0; i < MaxForces; i++)
	{
		for (int j = 0; j < SquareVector.size(); j++)
		{
			if (SquareVector.at(j).GetOccupant().GetIsPlaceholder())
			{
				if (rand() % 2 == 1)
				{
					//TODO: Enemy creation will need to be expanded
					NewEnemy = EnemyGenerator.CreateNewCharacter(GameMap.GetEnemyVector());
					NewEnemy.SetIsPlaceholder(false);
					NewEnemy.SetAffiliation("E");
					GameMap.GetEnemyVector().push_back(NewEnemy);
					SquareVector.at(j).SetOccupant(NewEnemy);
					TotalForces++;
					if (TotalForces >= MaxForces) break;
				}
				//give the player somewhere to start placing their units
				if ((!IsDeploymentCenterSet) && (rand() % 5 == 1))
				{
					SquareVector.at(j).SetIsDeploymentCenter(true);
					IsDeploymentCenterSet = true;
				}
			}
		}
		if (TotalForces >= MaxForces) break;
	}

	//make sure the player has somewhere to place their units if it never happened in the previous loops
	if (!IsDeploymentCenterSet)
	{
		Entities::BaseCharacter Placeholder;
		SquareVector.at(SquareVector.size() - 1).SetOccupant(Placeholder);
		SquareVector.at(SquareVector.size() - 1).SetIsDeploymentCenter(true);
		IsDeploymentCenterSet = true;
	}

	//just in case RNG gave me an empty board
	if (GameMap.GetEnemyVector().size() == 0)
	{
		NewEnemy = EnemyGenerator.CreateNewCharacter(GameMap.GetEnemyVector());
		NewEnemy.SetIsPlaceholder(false);
		NewEnemy.SetAffiliation("E");
		GameMap.GetEnemyVector().push_back(NewEnemy);
		SquareVector.at((rand() % (SquareVector.size() - 1))).SetOccupant(NewEnemy);
	}

	GameMap.SetSquareVector(SquareVector);

	return GameMap;
}

//Private------------
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
int Generators::MapGenerator::CalculateEnemyForces(int PSize)
{
	int TotalForces = 0;
	int StartingValue = (rand() % (PSize / 2)) + 1;
	int SecondValue = (rand() % (StartingValue / 2)) + 1;
	int HeadsOrTails = (rand() % 2);
	if (HeadsOrTails == 1)
	{
		TotalForces = StartingValue + SecondValue;
	}
	else
	{
		TotalForces = StartingValue - SecondValue;
	}
	if (HeadsOrTails = (rand() % 2) == 1)
	{
		TotalForces += 2;
	}
	else
	{
		TotalForces -= 2;
	}
	if (TotalForces <= 0)
	{
		TotalForces = 1;
	}
	return TotalForces;
}
//--------------------------------------------------------------