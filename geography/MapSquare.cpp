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