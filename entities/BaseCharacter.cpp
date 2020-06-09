#include <string>
#include <iostream>
#include <cstdlib>
#include <time.h>

#include "BaseCharacter.h"
#include "EClasses.h"

//Getters and Setters------------------------------------------------
int Entities::BaseCharacter::GetCreationId()
{
	return CreationId;
}
void Entities::BaseCharacter::SetCreationId(int PCreationId)
{
	CreationId = PCreationId;
}
std::string Entities::BaseCharacter::GetName()
{
	return Name;
}
void Entities::BaseCharacter::SetName(std::string PName)
{
	Name = PName;
}
Entities::GenericClass* Entities::BaseCharacter::GetClass()
{
	switch (Class)
	{
	case ACOLYTE:
		Entities::Acolyte* Acolyte;
		return Acolyte;
	case ALCHEMIST:
		Entities::Alchemist* Alchemist;
		return Alchemist;
	case ANCHORITE:
		Entities::Anchorite* Anchorite;
		return Anchorite;
	case ASTROLOGER:
		Entities::Astrologer* Astrologer;
		return Astrologer;
	case BLACKSMITH:
		Entities::Blacksmith* Blacksmith;
		return Blacksmith;
	case BOTANIST:
		Entities::Botanist* Botanist;
		return Botanist;
	case CONJURER:
		Entities::Conjurer* Conjurer;
		return Conjurer;
	case DISCIPLE:
		Entities::Disciple* Disciple;
		return Disciple;
	case ENCHANTER:
		Entities::Enchanter* Enchanter;
		return Enchanter;
	case MINER:
		Entities::Miner* Miner;
		return Miner;
	case PAINTER:
		Entities::Painter* Painter;
		return Painter;
	case PIERCER:
		Entities::Piercer* Piercer;
		return Piercer;
	case RUFFIAN:
		Entities::Ruffian* Ruffian;
		return Ruffian;
	case SHAMAN:
		Entities::Shaman* Shaman;
		return Shaman;
	case SQUIRE:
		Entities::Squire* Squire;
		return Squire;
	case SURVIVOR:
		Entities::Survivor* Survivor;
		return Survivor;
	case UPHOLDER:
		Entities::Upholder* Upholder;
		return Upholder;
	case YEOMAN:
		Entities::Yeoman* Yeoman;
		return  Yeoman;
	case PLACEHOLDER:
	default:
		Entities::Placeholder* Placeholder;
		return Placeholder;
	}
}
void Entities::BaseCharacter::SetClass(EClasses PClass)
{
	Class = PClass;
}
std::string Entities::BaseCharacter::GetSymbol()
{
	return Symbol;
}
void Entities::BaseCharacter::SetSymbol(std::string PSymbol)
{
	Symbol = PSymbol;
}
std::string Entities::BaseCharacter::GetAffiliation()
{
	return Affiliation;
}
void Entities::BaseCharacter::SetAffiliation(std::string PAffiliation)
{
	Affiliation = PAffiliation;
}

int Entities::BaseCharacter::GetLevel()
{
	return Level;
}
void Entities::BaseCharacter::SetLevel(int PLvl)
{
	Level = PLvl;
}
int Entities::BaseCharacter::GetCurrentHealthPoints()
{
	return CurrentHealthPoints;
}
void Entities::BaseCharacter::SetCurrentHealthPoints(int PCHP)
{
	CurrentHealthPoints = PCHP;
}
int Entities::BaseCharacter::GetMaxHealthPoints()
{
	return MaxHealthPoints;
}
void Entities::BaseCharacter::SetMaxHealthPoints(int PMHP)
{
	MaxHealthPoints = PMHP;
}
int Entities::BaseCharacter::GetCurrentManaPoints()
{
	return CurrentManaPoints;
}
void Entities::BaseCharacter::SetCurrentManaPoints(int PCMP)
{
	CurrentManaPoints = PCMP;
}
int Entities::BaseCharacter::GetMaxManaPoints()
{
	return MaxManaPoints;
}
void Entities::BaseCharacter::SetMaxManaPoints(int PMMP)
{
	MaxManaPoints = PMMP;
}
int Entities::BaseCharacter::GetTotalExperience()
{
	return TotalExperience;
}
void Entities::BaseCharacter::SetTotalExperience(int PTXp)
{
	TotalExperience = PTXp;
}
int Entities::BaseCharacter::GetNeededExperience()
{
	return NeededExperience;
}
void Entities::BaseCharacter::SetNeededExperience(int PNXp)
{
	NeededExperience = PNXp;
}
int Entities::BaseCharacter::GetStrength()
{
	return Strength;
}
void Entities::BaseCharacter::SetStrength(int PStr)
{
	Strength = PStr;
}
int Entities::BaseCharacter::GetDefense()
{
	return Defense;
}
void Entities::BaseCharacter::SetDefense(int PDef)
{
	Defense = PDef;
}
int Entities::BaseCharacter::GetIntelligence()
{
	return Intelligence;
}
void Entities::BaseCharacter::SetIntelligence(int PInt)
{
	Intelligence = PInt;
}
int Entities::BaseCharacter::GetResistence()
{
	return Resistance;
}
void Entities::BaseCharacter::SetResistence(int PRes)
{
	Resistance = PRes;
}
int Entities::BaseCharacter::GetAccuracy()
{
	return Accuracy;
}
void Entities::BaseCharacter::SetAccuracy(int PAcc)
{
	Accuracy = PAcc;
}
int Entities::BaseCharacter::GetSpeed()
{
	return Speed;
}
void Entities::BaseCharacter::SetSpeed(int PSpd)
{
	Speed = PSpd;
}
int Entities::BaseCharacter::GetMovement()
{
	return Movement;
}
void Entities::BaseCharacter::SetMovement(int PMove)
{
	Movement = PMove;
}
int Entities::BaseCharacter::GetCriticalChance()
{
	return CriticalChance;
}
void Entities::BaseCharacter::SetCriticalChance(int PCritCh)
{
	CriticalChance = PCritCh;
}
int Entities::BaseCharacter::GetCriticalBonus()
{
	return CriticalBonus;
}
void Entities::BaseCharacter::SetCriticalBonus(int PCritBn)
{
	CriticalBonus = PCritBn;
}
int Entities::BaseCharacter::GetFireResistence()
{
	return FireResistance;
}
void Entities::BaseCharacter::SetFireResistence(int PFire)
{
	FireResistance = PFire;
}
int Entities::BaseCharacter::GetIceResistence()
{
	return IceResistance;
}
void Entities::BaseCharacter::SetIceResistence(int PIce)
{
	IceResistance = PIce;
}
int Entities::BaseCharacter::GetThunderResistence()
{
	return ThunderResistance;
}
void Entities::BaseCharacter::SetThunderResistence(int PThn)
{
	ThunderResistance = PThn;
}
int Entities::BaseCharacter::GetWaterResistence()
{
	return WaterResistance;
}
void Entities::BaseCharacter::SetWaterResistence(int PWtr)
{
	WaterResistance = PWtr;
}

int Entities::BaseCharacter::GetFistProficiency()
{
	return FistProficiency;
}
void Entities::BaseCharacter::SetFistProficiency(int PFistPro)
{
	FistProficiency = PFistPro;
}
int Entities::BaseCharacter::GetSwordProficiency()
{
	return SwordProficiency;
}
void Entities::BaseCharacter::SetSwordProficiency(int PSwdPro)
{
	SwordProficiency = PSwdPro;
}
int Entities::BaseCharacter::GetSpearProficiency()
{
	return SpearProficiency;
}
void Entities::BaseCharacter::SetSpearProficiency(int PSprPro)
{
	SpearProficiency = PSprPro;
}
int Entities::BaseCharacter::GetBowProficiency()
{
	return BowProficiency;
}
void Entities::BaseCharacter::SetBowProficiency(int PBowPro)
{
	BowProficiency = PBowPro;
}
int Entities::BaseCharacter::GetGunProficiency()
{
	return GunProficiency;
}
void Entities::BaseCharacter::SetGunProficiency(int PGunPro)
{
	GunProficiency = PGunPro;
}
int Entities::BaseCharacter::GetAxeProficiency()
{
	return AxeProficiency;
}
void Entities::BaseCharacter::SetAxeProficiency(int PAxePro)
{
	AxeProficiency = PAxePro;
}
int Entities::BaseCharacter::GetStaffProficiency()
{
	return StaffProficiency;
}
void Entities::BaseCharacter::SetStaffProficiency(int PStfPro)
{
	StaffProficiency = PStfPro;
}
int Entities::BaseCharacter::GetAlembicProficiency()
{
	return AlembicProficiency;
}
void Entities::BaseCharacter::SetAlembicProficiency(int PAlmPro)
{
	AlembicProficiency = PAlmPro;
}
int Entities::BaseCharacter::GetChapterProficiency()
{
	return ChapterProficiency;
}
void Entities::BaseCharacter::SetChapterProficiency(int PChtPro)
{
	ChapterProficiency = PChtPro;
}
int Entities::BaseCharacter::GetHammerProficiency()
{
	return HammerProficiency;
}
void Entities::BaseCharacter::SetHammerProficiency(int PHamPro)
{
	HammerProficiency = PHamPro;
}
int Entities::BaseCharacter::GetSickleProficiency()
{
	return SickleProficiency;
}
void Entities::BaseCharacter::SetSickleProficiency(int PSklPro)
{
	SickleProficiency = PSklPro;
}
int Entities::BaseCharacter::GetPickaxeProficiency()
{
	return PickaxeProficiency;
}
void Entities::BaseCharacter::SetPickaxeProficiency(int PPkxPro)
{
	PickaxeProficiency = PPkxPro;
}
int Entities::BaseCharacter::GetBrushProficiency()
{
	return BrushProficiency;
}
void Entities::BaseCharacter::SetBrushProficiency(int PBrsPro)
{
	BrushProficiency = PBrsPro;
}

std::string Entities::BaseCharacter::GetRightWeapon()
{
	return RightWeapon;
}
void Entities::BaseCharacter::SetRightWeapon(std::string PRW)
{
	RightWeapon = PRW;
}
std::string Entities::BaseCharacter::GetLeftWeapon()
{
	return LeftWeapon;
}
void Entities::BaseCharacter::SetLeftWeapon(std::string PLW)
{
	LeftWeapon = PLW;
}
std::string Entities::BaseCharacter::GetHelmet()
{
	return Helmet;
}
void Entities::BaseCharacter::SetHelmet(std::string PHlm)
{
	Helmet = PHlm;
}
std::string Entities::BaseCharacter::GetArmor()
{
	return Armor;
}
void Entities::BaseCharacter::SetArmor(std::string PArm)
{
	Armor = PArm;
}
std::string Entities::BaseCharacter::GetGloves()
{
	return Gloves;
}
void Entities::BaseCharacter::SetGloves(std::string PGlv)
{
	Gloves = PGlv;
}
std::string Entities::BaseCharacter::GetAccessoryOne()
{
	return AccessoryOne;
}
void Entities::BaseCharacter::SetAccessoryOne(std::string PAcs1)
{
	AccessoryOne = PAcs1;
}
std::string Entities::BaseCharacter::GetAccessoryTwo()
{
	return AccessoryTwo;
}
void Entities::BaseCharacter::SetAccessoryTwo(std::string PAcs2)
{
	AccessoryTwo = PAcs2;
}

int Entities::BaseCharacter::GetXPosition()
{
	return XPosition;
}
void Entities::BaseCharacter::SetXPosition(int PXPosition)
{
	XPosition = PXPosition;
}
int Entities::BaseCharacter::GetYPosition()
{
	return YPosition;
}
void Entities::BaseCharacter::SetYPosition(int PYPosition)
{
	YPosition = PYPosition;
}
bool Entities::BaseCharacter::GetIsPlaceholder()
{
	return IsPlaceholder;
}
void Entities::BaseCharacter::SetIsPlaceholder(bool PIsPlaceholder)
{
	IsPlaceholder = PIsPlaceholder;
}
bool Entities::BaseCharacter::GetIsActive()
{
	return IsActive;
}
void Entities::BaseCharacter::SetIsActive(bool PIsActive)
{
	IsActive = PIsActive;
}
//------------------------------------------------------------------

//Practical functions-----------------------------------------------
void Entities::BaseCharacter::GetCompleteStatus()
{
	std::cout <<
		"Name: " << Name << std::endl <<
		"Class: " << Class << std::endl <<
		"STATS " << std::endl <<
		"Level: " << Level << std::endl <<
		"HP: " << CurrentHealthPoints << "/" << MaxHealthPoints << std::endl <<
		"MP: " << CurrentManaPoints << "/" << MaxManaPoints << std::endl <<
		"EXP: " << TotalExperience << "/" << NeededExperience << std::endl <<
		"Str: " << Strength << std::endl <<
		"Def: " << Defense << std::endl <<
		"Int: " << Intelligence << std::endl <<
		"Res: " << Resistance << std::endl <<
		"Acc: " << Accuracy << std::endl <<
		"Spd: " << Speed << std::endl <<
		"Mov: " << Movement << std::endl <<
		"CrC: " << CriticalChance << std::endl <<
		"CrB: " << CriticalBonus << std::endl <<
		"ELEMENTAL RESISTANCES" << std::endl <<
		"Fire: " << FireResistance << std::endl <<
		"Ice: " << IceResistance << std::endl <<
		"Thunder: " << ThunderResistance << std::endl <<
		"Water: " << WaterResistance << std::endl <<
		"WEAPON PROFICIENCIES" << std::endl <<
		"Fist: " << FistProficiency << std::endl <<
		"Sword: " << SwordProficiency << std::endl <<
		"Shield: " << ShieldProficiency << std::endl <<
		"Spear: " << SpearProficiency << std::endl <<
		"Bow: " << BowProficiency << std::endl <<
		"Gun: " << GunProficiency << std::endl <<
		"Axe: " << AxeProficiency << std::endl <<
		"Staff: " << StaffProficiency << std::endl <<
		"Alembic: " << AlembicProficiency << std::endl <<
		"Chapter: " << ChapterProficiency << std::endl <<
		"Hammer: " << HammerProficiency << std::endl <<
		"Hatchet: " << SickleProficiency << std::endl <<
		"Pickaxe: " << PickaxeProficiency << std::endl <<
		"Brush: " << BrushProficiency << std::endl <<
		"CURRENT EQUIPMENT" << std::endl <<
		"Right Weapon: " << RightWeapon << std::endl <<
		"Left Weapon: " << LeftWeapon << std::endl <<
		"Helmet: " << Helmet << std::endl <<
		"Armor: " << Armor << std::endl <<
		"Gloves: " << Gloves << std::endl <<
		"Accessory One: " << AccessoryOne << std::endl <<
		"Accessory Two: " << AccessoryTwo << std::endl;


}

void Entities::BaseCharacter::AttackTarget(Entities::BaseCharacter& PTarget)
{
	//TODO:create weapon classes
	//weapon strength set to 3/weapon set to sword until I create actual weapon classes
	int PhysicalDamageDealt = ((Strength + 3) * (1 + SwordProficiency / 100)) - PTarget.GetDefense();
	PhysicalDamageDealt = Crit(PTarget.GetCriticalChance(), PhysicalDamageDealt);
	//elemental damage calculation here

	PTarget.SetCurrentHealthPoints(PTarget.GetCurrentHealthPoints() - PhysicalDamageDealt);
	std::cout << Name << " attacked " << PTarget.GetName() << " for " << PhysicalDamageDealt << "." << std::endl;
	std::cout << PTarget.GetName() << " HP: " << PTarget.GetCurrentHealthPoints() << "/" << PTarget.GetMaxHealthPoints() << std::endl;

}

int Entities::BaseCharacter::Crit(int PCriticalChance, int PDamageDealt)
{
	srand(time(NULL));
	if ((rand() % 100 + 1) <= PCriticalChance)
	{
		PDamageDealt += CriticalBonus;
		std::cout << "CRIT!" << std::endl;
	}
	return PDamageDealt;
}
//------------------------------------------------------------------

//Overloads---------------------------------------------------------
bool Entities::operator== (const Entities::BaseCharacter& PCharacter1, const Entities::BaseCharacter& PCharacter2)
{
	if (PCharacter1.CreationId == PCharacter2.CreationId)
	{
		return true;
	}
	return false;
}
//------------------------------------------------------------------