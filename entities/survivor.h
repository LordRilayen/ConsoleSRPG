#pragma once
#include <string>
#include <iostream>

namespace Entities
{
	class Survivor
	{
	public:
		std::string GetName();
		void SetName(std::string Name);
		std::string GetClass();
		void SetClass(std::string Class);

		int GetLevel();
		void SetLevel(int Lvl);
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

		int GetFireResistence();
		void SetFireResistence(int Fire);
		int GetIceResistence();
		void SetIceResistence(int Ice);
		int GetThunderResistence();
		void SetThunderResistence(int Thn);
		int GetWaterResistence();
		void SetWaterResistence(int Wtr);

		int GetFistProficiency();
		void SetFistProficiency(int FistPro);
		int GetSwordProficiency();
		void SetSwordProficiency(int SwdPro);
		int GetSpearProficiency();
		void SetSpearProficiency(int SprPro);
		int GetBowProficiency();
		void SetBowProficiency(int BowPro);
		int GetGunProficiency();
		void SetGunProficiency(int GunPro);
		int GetAxeProficiency();
		void SetAxeProficiency(int AxePro);
		int GetStaffProficiency();
		void SetStaffProficiency(int StfPro);

		std::string GetRightWeapon();
		void SetRightWeapon(std::string RW);
		std::string GetLeftWeapon();
		void SetLeftWeapon(std::string LW);
		std::string GetHelmet();
		void SetHelmet(std::string Hlm);
		std::string GetArmor();
		void SetArmor(std::string Arm);
		std::string GetGloves();
		void SetGloves(std::string Glv);
		std::string GetAccessoryOne();
		void SetAccessoryOne(std::string Acs1);
		std::string GetAccessoryTwo();
		void SetAccessoryTwo(std::string Acs2);

	private:
		std::string Name = "Default";
		std::string Class;

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
		int FistProficiency;
		int SwordProficiency;
		int ShieldProficiency;
		int SpearProficiency;
		int BowProficiency;
		int GunProficiency;
		int AxeProficiency;
		int StaffProficiency;

		//Current Equipment
		//TODO: Make classes for these
		std::string RightWeapon;
		std::string LeftWeapon;
		std::string Helmet;
		std::string Armor;
		std::string Gloves;
		std::string AccessoryOne;
		std::string AccessoryTwo;
	};
}