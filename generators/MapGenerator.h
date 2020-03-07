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
		std::string GetMapBorder();
		std::string GetMapEdge();

		std::string DrawMap(Geography::Map& PMap);
	private:
		const std::string MapBorder = "=====";
		const std::string MapEdge = "---- ";

		void DrawBorder(int PWidth, std::string& PMapString, std::string PBorderType);
	};
}
