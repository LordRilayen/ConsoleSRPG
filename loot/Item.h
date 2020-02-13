#pragma once
#include <string>
#include <iostream>

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
		int Level = 1;
		int Tier = 0;
		int HealthPoints = 0;
		int ManaPoints = 0;
		int TotalExperience = 0;
		int NeededExperience = 15;
		int Strength = 0;
		int Defense = 0;
		int Intelligence = 0;
		int Resistance = 0;
		int Accuracy = 0;
		int Speed = 0;
		int Movement = 0;
		int CriticalChance = 0;
		int CriticalBonus = 0;
	};
}