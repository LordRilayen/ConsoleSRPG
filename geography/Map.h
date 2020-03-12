#pragma once

#include <iostream>
#include <string>
#include <vector>

#include "MapSquare.h"

namespace Geography
{
	class Map
	{
	public:
		//Getters and Setters-----------------------------------------------------------
		int GetWidth();
		void SetWidth(int PWidth);
		int GetHeight();
		void SetHeight(int PHeight);
		std::vector<Geography::MapSquare>& GetSquareVector();
		void SetSquareVector(std::vector<Geography::MapSquare>& PSquareVector);
		
		//Practical Functions-----------------------------------------------------------
		Geography::MapSquare CheckSquareLeft(Geography::MapSquare& PMapSquare);
		Geography::MapSquare CheckSquareRight(Geography::MapSquare& PMapSquare);
		Geography::MapSquare CheckSquareUp(Geography::MapSquare& PMapSquare);
		Geography::MapSquare CheckSquareDown(Geography::MapSquare& PMapSquare);
	private:
		int Width;
		int Height;
		std::vector<Geography::MapSquare> SquareVector;
	};
}