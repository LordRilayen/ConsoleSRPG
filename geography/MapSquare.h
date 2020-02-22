#pragma once

#include <iostream>
#include <string>

#include "../entities/BaseCharacter.h"

namespace Geography
{
	class MapSquare
	{
	public:
		int GetXPosition();
		void SetXPosition(int PXPosition);
		int GetYPosition();
		void SetYPosition(int PYPosition);
		Entities::BaseCharacter GetOccupant();
		void SetOccupant(Entities::BaseCharacter POccupant);
	private:
		int XPosition;
		int YPosition;
		Entities::BaseCharacter Occupant;
		//Geography::Feature LikeAWallOrTreesOrSomething idk I haven't made these yet
	};
}