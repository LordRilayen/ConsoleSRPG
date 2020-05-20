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

		bool MoveCharacterLeft(Entities::BaseCharacter& PCharacter);//returns true if character successfully moved left 1 square
		bool MoveCharacterRight(Entities::BaseCharacter& PCharacter);//returns true if character successfully moved right 1 square
		bool MoveCharacterUp(Entities::BaseCharacter& PCharacter);//returns true if character successfully moved up 1 square
		bool MoveCharacterDown(Entities::BaseCharacter& PCharacter);//returns true if character successfully moved down 1 square
	private:
		int Width;
		int Height;
		std::vector<Geography::MapSquare> SquareVector;
	};
}