#include <iostream>
#include <string>

#include "MapGenerator.h"

std::string Generators::MapGenerator::GetMapBorder()
{
	return MapBorder;
}

std::string Generators::MapGenerator::DrawMap()
{
	std::cout << GetMapBorder() << std::endl;
	std::cout << GetMapBorder() << std::endl;
	return "";
}