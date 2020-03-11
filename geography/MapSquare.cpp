#include <iostream>
#include <string>

#include "MapSquare.h"

int Geography::MapSquare::GetXPosition()
{
	return XPosition;
}
void Geography::MapSquare::SetXPosition(int PXPosition)
{
	XPosition = PXPosition;
}
int Geography::MapSquare::GetYPosition()
{
	return YPosition;
}
void Geography::MapSquare::SetYPosition(int PYPosition)
{
	YPosition = PYPosition;
}
Entities::BaseCharacter& Geography::MapSquare::GetOccupant()
{
	return Occupant;
}
void Geography::MapSquare::SetOccupant(Entities::BaseCharacter& POccupant)
{
	Occupant = POccupant;
}

//overloads
bool Geography::operator== (const Geography::MapSquare& PSquare1, const Geography::MapSquare& PSquare2)
{
	if (PSquare1.XPosition == PSquare2.XPosition &&
		PSquare1.YPosition == PSquare2.YPosition &&
		PSquare1.GetOccupant().GetCreationId() == PSquare2.GetOccupant().GetCreationId())
	{
		return true;
	}
	return false;
}