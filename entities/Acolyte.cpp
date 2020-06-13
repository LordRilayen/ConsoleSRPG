#include <string>

#include "Acolyte.h"

//getters and setters-----------------
std::string Entities::Acolyte::GetMapSymbol()
{
	return MapSymbol;
}
//------------------------------------

//practical functions-----------------
void Entities::Acolyte::LevelUp(Entities::BaseCharacter* PtrCharacter)
{
	PtrCharacter->SetMaxHealthPoints(PtrCharacter->GetMaxHealthPoints() + 8);
	PtrCharacter->SetMaxManaPoints(PtrCharacter->GetMaxManaPoints() + 4);
	PtrCharacter->SetStrength(PtrCharacter->GetStrength() + 4);
	PtrCharacter->SetDefense(PtrCharacter->GetDefense() + 6);
	PtrCharacter->SetSpeed(PtrCharacter->GetSpeed() + 3);
}
int Entities::Acolyte::GetStatAtLevel(Entities::BaseCharacter* PtrCharacter, std::string PStat, int PLevels)
{
	int StatModification = 0;
	if (PStat.compare("HP") == 0)
	{
		StatModification = 8 * PLevels;
	}
	else if (PStat.compare("MP") == 0)
	{
		StatModification = 4 * PLevels;
	}
	else if (PStat.compare("Str") == 0)
	{
		StatModification = 4 * PLevels;
	}
	else if (PStat.compare("Def") == 0)
	{
		StatModification = 6 * PLevels;
	}
	else if (PStat.compare("Spd") == 0)
	{
		StatModification = 3 * PLevels;
	}

	return StatModification;
}
{

}
void SetParameters();
//------------------------------------