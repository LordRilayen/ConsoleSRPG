#pragma once
#include <iostream>
#include <string>

namespace Generators
{
	class MapGenerator
	{
	public:
		std::string GetMapBorder();

		std::string DrawMap();
	private:
		const std::string MapBorder = "==================================================================================================";
	};
}
