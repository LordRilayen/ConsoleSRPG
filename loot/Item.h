#pragma once
#include <string>
#include <iostream>

#include "EWeapons.h"

namespace Loot
{
	class Item
	{
	public:
		//Getters and Setters-------------------------------------
		std::string GetName();
		void SetName(std::string Name);

		int GetLevel();
		void SetLevel(int Lvl);
		int GetTier();
		void SetTier(int Tier);
		int GetHealthPoints();
		void SetHealthPoints(int HP);
		int GetManaPoints();
		void SetManaPoints(int MP);
		int GetTotalExperience();
		void SetTotalExperience(int TXp);
		int GetNeededExperience();
		void SetNeededExperience(int NXp);
		int GetStrength();
		void SetStrength(int Str);
		int GetDefense();
		void SetDefense(int Def);
		int GetIntelligence();
		void SetIntelligence(int Int);
		int GetResistence();
		void SetResistence(int Res);
		int GetAccuracy();
		void SetAccuracy(int Acc);
		int GetSpeed();
		void SetSpeed(int Spd);
		int GetMovement();
		void SetMovement(int Move);
		int GetCriticalChance();
		void SetCriticalChance(int CritCh);
		int GetCriticalBonus();
		void SetCriticalBonus(int CritBn);

	private:
		std::string Name = "Default";

		//Basic stats
		int Level;
		int Tier;
		int HealthPoints;
		int ManaPoints;
		int TotalExperience;
		int NeededExperience;
		int Strength;
		int Defense;
		int Intelligence;
		int Resistance;
		int Accuracy = 0;
		int Speed;
		int Movement;
		int CriticalChance;
		int CriticalBonus;
	};
}