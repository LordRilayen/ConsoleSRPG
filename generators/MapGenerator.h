#pragma once
#include <iostream>
#include <string>
#include <vector>

#include "../geography/Map.h"

namespace Generators
{
	class MapGenerator
	{
	public:
		//Getters and Setters-------------------------------------------
		std::string GetMapBorder();
		std::string GetMapEdge();
		//--------------------------------------------------------------

		//Practical functions-------------------------------------------
		std::string BuildMap(Geography::Map& PMap);
		Geography::Map GenerateMap();
		//--------------------------------------------------------------
	private:
		const std::string MapBorder = "=====";
		const std::string MapEdge = "---- ";

		//Practical functions-------------------------------------------
		void DrawBorder(int PWidth, std::string& PMapString, std::string PBorderType);
		int CalculateEnemyForces(int PSize);
		//--------------------------------------------------------------
	};
}
