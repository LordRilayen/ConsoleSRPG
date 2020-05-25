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
		bool GetIsDeploymentCenter();
		void SetIsDeploymentCenter(bool PIsDeploymentCenter);
		Entities::BaseCharacter GetOccupant();
		void SetOccupant(Entities::BaseCharacter POccupant);

		//overloads
		friend bool operator== (const Geography::MapSquare& PSquare1, const Geography::MapSquare& PSquare2);
	private:
		int XPosition;
		int YPosition;
		bool IsDeploymentCenter;
		Entities::BaseCharacter Occupant;
		//Geography::Feature LikeAWallOrTreesOrSomething idk I haven't made these yet
	};
}