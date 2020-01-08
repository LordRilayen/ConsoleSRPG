#pragma once
#include <string>

namespace Entities
{
	class Survivor
	{
		private:
			string Name;
			string Class;

			//Basic stats
			int Level;
			int HealthPoints;
			int ManaPoints;
			int TotalExperience;
			int NeededExperience;
			int Strength;
			int Defense;
			int Intelligence;
			int Resistance;
			int Accuracy;
			int Speed;
			int Movement;
			int CriticalChance;
			int CriticalBonus;

			//Resistances
			int FireResistance;
			int IceResistance;
			int ThunderResistance;
			int WaterResistance;

			//Weapon Proficiencies
			int Fist;
			int Sword;
			int Shield;
			int Spear;
			int Bow;
			int Gun;
			int Axe;
			int Staff;

			//Current Equipment
			//TODO: Make classes for these
			string RightWeapon;
			string LeftWeapon;
			string Helmet;
			string Armor;
			string Gloves;
			string AccessoryOne;
			string AccessoryTwo;
		
		public:
			string GetName();
			void SetName();

			int GetLevel();
			void SetLevel();
			int GetHealthPoints();
			void SetHealthPoints();
			int GetManaPoints();
			void SetManaPoints();
			int GetTotalExperience();
			void SetTotalExperience();
			int GetNeededExperience();
			void SetNeededExperience();
			int GetStrength();
			void SetStrength();
			int GetDefense();
			void SetDefense();
			int GetIntelligence();
			void SetIntelligence();
			int GetResistence();
			void SetResistence();
			int GetAccuracy();
			void SetAccuracy();
			int GetSpeed();
			void SetSpeed();
			int GetMovement();
			void SetMovement();
			int GetCriticalChance();
			void SetCriticalChance();
			int GetCriticalBonus();
			void SetCriticalBonus();

			int GetFireResistence();
			void SetFireResistence();
			int GetIceResistence();
			void SetIceResistence();
			int GetThunderResistence();
			void SetThunderResistence();
			int GetWaterResistence();
			void SetWaterResistence();

			int GetFist();
			void SetFist();
			int GetSword();
			void SetSword();
			int GetSpear();
			void SetSpear();
			int GetBow();
			void SetBow();
			int GetGun();
			void SetGun();
			int GetAxe();
			void SetAxe();
			int GetStaff();
			void SetStaff();

			string GetRightWeapon();
			void SetRightWeapon();
			string GetLeftWeapon();
			void SetRightWeapon();
			string GetHelmet();
			void SetHelmet();
			string GetArmor();
			void SetArmor();
			string GetGloves();
			void SetGloves();
			string GetAccessoryOne();
			void SetAccessoryOne();
			string GetAccessoryTwo();
			void SetAccessoryTwo();
	};
}