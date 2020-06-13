#pragma once
#include <string>
#include <iostream>

#include "EClasses.h"
#include "GenericClass.h"

namespace Entities
{
	class BaseCharacter
	{
	public:
		//Getters and Setters-------------------------------------
		int GetCreationId();
		void SetCreationId(int PCreationId);
		std::string GetName();
		void SetName(std::string Name);
		Entities::GenericClass* GetClass();
		void SetClass(EClasses Class);
		std::string GetSymbol();
		void SetSymbol(std::string Symbol);
		std::string GetAffiliation();
		void SetAffiliation(std::string Affiliation);

		int GetLevel();
		void SetLevel(int Lvl);
		int GetCurrentHealthPoints();
		void SetCurrentHealthPoints(int CHP);
		int GetMaxHealthPoints();
		void SetMaxHealthPoints(int MHP);
		int GetCurrentManaPoints();
		void SetCurrentManaPoints(int CMP);
		int GetMaxManaPoints();
		void SetMaxManaPoints(int MMP);
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
		int GetAlembicProficiency();
		void SetAlembicProficiency(int AlmPro);
		int GetChapterProficiency();
		void SetChapterProficiency(int ChtPro);
		int GetHammerProficiency();
		void SetHammerProficiency(int HamPro);
		int GetSickleProficiency();
		void SetSickleProficiency(int SklPro);
		int GetPickaxeProficiency();
		void SetPickaxeProficiency(int PkxPro);
		int GetBrushProficiency();
		void SetBrushProficiency(int BrsPro);

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

		int GetXPosition();
		void SetXPosition(int PXPosition);
		int GetYPosition();
		void SetYPosition(int PYPosition);
		bool GetIsPlaceholder();
		void SetIsPlaceholder(bool PIsPlaceholder);
		bool GetIsActive();
		void SetIsActive(bool PIsActive);
		//---------------------------------------------------

		//Practical functions--------------------------------
		void GetCompleteStatus();
		void AttackTarget(Entities::BaseCharacter& target);
		int Crit(int CriticalChance, int DamageDealt);
		void LevelUp();
		//---------------------------------------------------

		//Overloads------------------------------------------
		friend bool operator== (const Entities::BaseCharacter& PCharacter1, const Entities::BaseCharacter& PCharacter2);
		//---------------------------------------------------
	private:
		std::string Name = "Replica";
		EClasses Class = PLACEHOLDER;
		
		//The symbol to be placed on the game map to represent this character
		std::string Symbol = " ";
		std::string Affiliation = " ";

		//Basic stats
		int Level = 1;
		int CurrentHealthPoints = 10;
		int MaxHealthPoints = 10;
		int CurrentManaPoints = 3;
		int MaxManaPoints = 3;
		int TotalExperience = 0;
		int NeededExperience = 15;
		int Strength = 1;
		int Defense = 1;
		int Intelligence = 1;
		int Resistance = 1;
		int Accuracy = 1;
		int Speed = 1;
		int Movement = 5;
		int CriticalChance = 1;
		int CriticalBonus = 1;

		//Resistances
		int FireResistance = 0;
		int IceResistance = 0;
		int ThunderResistance = 0;
		int WaterResistance = 0;

		//Weapon Proficiencies
		int FistProficiency = 0;
		int SwordProficiency = 0;
		int ShieldProficiency = 0;
		int SpearProficiency = 0;
		int BowProficiency = 0;
		int GunProficiency = 0;
		int AxeProficiency = 0;
		int StaffProficiency = 0;
		int AlembicProficiency = 0;
		int ChapterProficiency = 0;
		int HammerProficiency = 0;
		int SickleProficiency = 0;
		int PickaxeProficiency = 0;
		int BrushProficiency = 0;

		//Current Equipment
		//TODO: Make classes for these
		std::string RightWeapon = "";
		std::string LeftWeapon = "";
		std::string Helmet = "";
		std::string Armor = "";
		std::string Gloves = "";
		std::string AccessoryOne = "";
		std::string AccessoryTwo = "";

		//Technical
		int CreationId = 0;
		int XPosition = 0;
		int YPosition = 0;
		bool IsPlaceholder = true;
		bool IsActive = false;
	};
}