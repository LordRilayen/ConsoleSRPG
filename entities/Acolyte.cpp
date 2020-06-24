#include <string>

#include "Acolyte.h"

//getters and setters-----------------
std::string Entities::Acolyte::GetMapSymbol()
{
	return MapSymbol;
}
//------------------------------------

//practical functions-----------------
void Entities::Acolyte::LevelUp(Entities::BaseCharacter PtrCharacter)
{
	std::cout << "Here 5" << std::endl;
	PtrCharacter.SetMaxHealthPoints(PtrCharacter.GetMaxHealthPoints() + 8);
	std::cout << "Here 6" << std::endl;
	PtrCharacter.SetMaxManaPoints(PtrCharacter.GetMaxManaPoints() + 4);
	PtrCharacter.SetStrength(PtrCharacter.GetStrength() + 4);
	PtrCharacter.SetDefense(PtrCharacter.GetDefense() + 6);
	PtrCharacter.SetSpeed(PtrCharacter.GetSpeed() + 3);
	std::cout << "Here 7" << std::endl;
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

void Entities::Acolyte::SetParameters(Entities::BaseCharacter* PtrCharacter)
{
	if (!PtrCharacter->GetUsableWeapons().empty())
	{
		PtrCharacter->GetUsableWeapons().clear();
	}
	PtrCharacter->GetUsableWeapons().push_back(AXE);
	PtrCharacter->GetUsableWeapons().push_back(STAFF);

	if (!PtrCharacter->GetUsableMagic().empty())
	{
		PtrCharacter->GetUsableMagic().clear();
	}
	PtrCharacter->GetUsableMagic().push_back(GEOMANCY);

	PtrCharacter->SetFunctionalStaffProMod(.5);
}
//------------------------------------