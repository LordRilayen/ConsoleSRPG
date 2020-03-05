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
		int GetWidth();
		void SetWidth(int PWidth);
		int GetHeight();
		void SetHeight(int PHeight);
		std::vector<Geography::MapSquare>& GetSquareVector();
		void SetSquareVector(std::vector<Geography::MapSquare>& PSquareVector);
	private:
		int Width;
		int Height;
		std::vector<Geography::MapSquare> SquareVector;
	};
}