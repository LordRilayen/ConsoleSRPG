#include <string>
#include <iostream>

#include "Item.h"

//Getters and Setters------------------------------------------------
std::string Loot::Item::GetName()
{
	return Name;
}
void Loot::Item::SetName(std::string PName)
{
	Name = PName;
}
int Loot::Item::GetLevel()
{
	return Level;
}
void Loot::Item::SetLevel(int PLvl)
{
	Level = PLvl;
}
int Loot::Item::GetHealthPoints()
{
	return HealthPoints;
}
void Loot::Item::SetHealthPoints(int PHP)
{
	HealthPoints = PHP;
}
int Loot::Item::GetManaPoints()
{
	return ManaPoints;
}
void Loot::Item::SetManaPoints(int PMP)
{
	ManaPoints = PMP;
}
int Loot::Item::GetTotalExperience()
{
	return TotalExperience;
}
void Loot::Item::SetTotalExperience(int PTXp)
{
	TotalExperience = PTXp;
}
int Loot::Item::GetNeededExperience()
{
	return NeededExperience;
}
void Loot::Item::SetNeededExperience(int PNXp)
{
	NeededExperience = PNXp;
}
int Loot::Item::GetStrength()
{
	return Strength;
}
void Loot::Item::SetStrength(int PStr)
{
	Strength = PStr;
}
int Loot::Item::GetDefense()
{
	return Defense;
}
void Loot::Item::SetDefense(int PDef)
{
	Defense = PDef;
}
int Loot::Item::GetIntelligence()
{
	return Intelligence;
}
void Loot::Item::SetIntelligence(int PInt)
{
	Intelligence = PInt;
}
int Loot::Item::GetResistence()
{
	return Resistance;
}
void Loot::Item::SetResistence(int PRes)
{
	Resistance = PRes;
}
int Loot::Item::GetAccuracy()
{
	return Accuracy;
}
void Loot::Item::SetAccuracy(int PAcc)
{
	Accuracy = PAcc;
}
int Loot::Item::GetSpeed()
{
	return Speed;
}
void Loot::Item::SetSpeed(int PSpd)
{
	Speed = PSpd;
}
int Loot::Item::GetMovement()
{
	return Movement;
}
void Loot::Item::SetMovement(int PMove)
{
	Movement = PMove;
}
int Loot::Item::GetCriticalChance()
{
	return CriticalChance;
}
void Loot::Item::SetCriticalChance(int PCritCh)
{
	CriticalChance = PCritCh;
}
int Loot::Item::GetCriticalBonus()
{
	return CriticalBonus;
}
void Loot::Item::SetCriticalBonus(int PCritBn)
{
	CriticalBonus = PCritBn;
}