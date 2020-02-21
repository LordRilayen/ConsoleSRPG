#pragma once
#include <iostream>
#include <string>
#include <vector>

#include "../entities/BaseCharacter.h"

namespace Generators
{
	class MapGenerator
	{
	public:
		std::string GetMapBorder();
		std::string GetMapEdge();

		std::string DrawMap(std::vector<Entities::BaseCharacter> PDeployedCharacters);
	private:
		const std::string MapBorder = "======================================================================================================\n";
		const std::string MapEdge = "  ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ---- ----\n";
	};
}
