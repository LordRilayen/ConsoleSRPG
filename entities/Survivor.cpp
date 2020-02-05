#include "survivor.h"
#include <string>
#include <iostream>

//Getters and Setters------------------------------------------------
std::string Entities::Survivor::GetName()
{
	return Name;
}
void Entities::Survivor::SetName(std::string PName)
{
	Name = PName;
}
std::string Entities::Survivor::GetClass()
{
	return Class;
}
void Entities::Survivor::SetClass(std::string PClass)
{
	Class = PClass;
}
int Entities::Survivor::GetLevel()
{
	return Level;
}
void Entities::Survivor::SetLevel(int PLvl)
{
	Level = PLvl;
}
int Entities::Survivor::GetCurrentHealthPoints()
{
	return CurrentHealthPoints;
}
void Entities::Survivor::SetCurrentHealthPoints(int PCHP)
{
	CurrentHealthPoints = PCHP;
}
int Entities::Survivor::GetMaxHealthPoints()
{
	return MaxHealthPoints;
}
void Entities::Survivor::SetMaxHealthPoints(int PMHP)
{
	MaxHealthPoints = PMHP;
}
int Entities::Survivor::GetCurrentManaPoints()
{
	return CurrentManaPoints;
}
void Entities::Survivor::SetCurrentManaPoints(int PCMP)
{
	CurrentManaPoints = PCMP;
}
int Entities::Survivor::GetMaxManaPoints()
{
	return MaxManaPoints;
}
void Entities::Survivor::SetMaxManaPoints(int PMMP)
{
	MaxManaPoints = PMMP;
}
int Entities::Survivor::GetTotalExperience()
{
	return TotalExperience;
}
void Entities::Survivor::SetTotalExperience(int PTXp)
{
	TotalExperience = PTXp;
}
int Entities::Survivor::GetNeededExperience()
{
	return NeededExperience;
}
void Entities::Survivor::SetNeededExperience(int PNXp)
{
	NeededExperience = PNXp;
}
int Entities::Survivor::GetStrength()
{
	return Strength;
}
void Entities::Survivor::SetStrength(int PStr)
{
	Strength = PStr;
}
int Entities::Survivor::GetDefense()
{
	return Defense;
}
void Entities::Survivor::SetDefense(int PDef)
{
	Defense = PDef;
}
int Entities::Survivor::GetIntelligence()
{
	return Intelligence;
}
void Entities::Survivor::SetIntelligence(int PInt)
{
	Intelligence = PInt;
}
int Entities::Survivor::GetResistence()
{
	return Resistance;
}
void Entities::Survivor::SetResistence(int PRes)
{
	Resistance = PRes;
}
int Entities::Survivor::GetAccuracy()
{
	return Accuracy;
}
void Entities::Survivor::SetAccuracy(int PAcc)
{
	Accuracy = PAcc;
}
int Entities::Survivor::GetSpeed()
{
	return Speed;
}
void Entities::Survivor::SetSpeed(int PSpd)
{
	Speed = PSpd;
}
int Entities::Survivor::GetMovement()
{
	return Movement;
}
void Entities::Survivor::SetMovement(int PMove)
{
	Movement = PMove;
}
int Entities::Survivor::GetCriticalChance()
{
	return CriticalChance;
}
void Entities::Survivor::SetCriticalChance(int PCritCh)
{
	CriticalChance = PCritCh;
}
int Entities::Survivor::GetCriticalBonus()
{
	return CriticalBonus;
}
void Entities::Survivor::SetCriticalBonus(int PCritBn)
{
	CriticalBonus = PCritBn;
}
int Entities::Survivor::GetFireResistence()
{
	return FireResistance;
}
void Entities::Survivor::SetFireResistence(int PFire)
{
	FireResistance = PFire;
}
int Entities::Survivor::GetIceResistence()
{
	return IceResistance;
}
void Entities::Survivor::SetIceResistence(int PIce)
{
	IceResistance = PIce;
}
int Entities::Survivor::GetThunderResistence()
{
	return ThunderResistance;
}
void Entities::Survivor::SetThunderResistence(int PThn)
{
	ThunderResistance = PThn;
}
int Entities::Survivor::GetWaterResistence()
{
	return WaterResistance;
}
void Entities::Survivor::SetWaterResistence(int PWtr)
{
	WaterResistance = PWtr;
}

int Entities::Survivor::GetFistProficiency()
{
	return FistProficiency;
}
void Entities::Survivor::SetFistProficiency(int PFistPro)
{
	FistProficiency = PFistPro;
}
int Entities::Survivor::GetSwordProficiency()
{
	return SwordProficiency;
}
void Entities::Survivor::SetSwordProficiency(int PSwdPro)
{
	SwordProficiency = PSwdPro;
}
int Entities::Survivor::GetSpearProficiency()
{
	return SpearProficiency;
}
void Entities::Survivor::SetSpearProficiency(int PSprPro)
{
	SpearProficiency = PSprPro;
}
int Entities::Survivor::GetBowProficiency()
{
	return BowProficiency;
}
void Entities::Survivor::SetBowProficiency(int PBowPro)
{
	BowProficiency = PBowPro;
}
int Entities::Survivor::GetGunProficiency()
{
	return GunProficiency;
}
void Entities::Survivor::SetGunProficiency(int PGunPro)
{
	GunProficiency = PGunPro;
}
int Entities::Survivor::GetAxeProficiency()
{
	return AxeProficiency;
}
void Entities::Survivor::SetAxeProficiency(int PAxePro)
{
	AxeProficiency = PAxePro;
}
int Entities::Survivor::GetStaffProficiency()
{
	return StaffProficiency;
}
void Entities::Survivor::SetStaffProficiency(int PStfPro)
{
	StaffProficiency = PStfPro;
}

std::string Entities::Survivor::GetRightWeapon()
{
	return RightWeapon;
}
void Entities::Survivor::SetRightWeapon(std::string PRW)
{
	RightWeapon = PRW;
}
std::string Entities::Survivor::GetLeftWeapon()
{
	return LeftWeapon;
}
void Entities::Survivor::SetLeftWeapon(std::string PLW)
{
	LeftWeapon = PLW;
}
std::string Entities::Survivor::GetHelmet()
{
	return Helmet;
}
void Entities::Survivor::SetHelmet(std::string PHlm)
{
	Helmet = PHlm;
}
std::string Entities::Survivor::GetArmor()
{
	return Armor;
}
void Entities::Survivor::SetArmor(std::string PArm)
{
	Armor = PArm;
}
std::string Entities::Survivor::GetGloves()
{
	return Gloves;
}
void Entities::Survivor::SetGloves(std::string PGlv)
{
	Gloves = PGlv;
}
std::string Entities::Survivor::GetAccessoryOne()
{
	return AccessoryOne;
}
void Entities::Survivor::SetAccessoryOne(std::string PAcs1)
{
	AccessoryOne = PAcs1;
}
std::string Entities::Survivor::GetAccessoryTwo()
{
	return AccessoryTwo;
}
void Entities::Survivor::SetAccessoryTwo(std::string PAcs2)
{
	AccessoryTwo = PAcs2;
}
//------------------------------------------------------------------

//Practical functions-----------------------------------------------
void Entities::Survivor::GetCompleteStatus()
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
		"CURRENT EQUIPMENT" << std::endl <<
		"Right Weapon: " << RightWeapon << std::endl <<
		"Left Weapon: " << LeftWeapon << std::endl <<
		"Helmet: " << Helmet << std::endl <<
		"Armor: " << Armor << std::endl <<
		"Gloves: " << Gloves << std::endl <<
		"Accessory One: " << AccessoryOne << std::endl <<
		"Accessory Two: " << AccessoryTwo << std::endl;


}
//------------------------------------------------------------------