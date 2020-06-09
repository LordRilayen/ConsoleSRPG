#pragma once
#include <string>

#include "GenericClass.h"

namespace Entities
{
	class Disciple : public GenericClass
	{
	public:
		//getters and setters-----------------
		std::string GetMapSymbol();
		//------------------------------------

		//practical functions-----------------
		void LevelUp();
		void GetStatAtLevel();
		void SetParameters();
		//------------------------------------
	private:
		std::string MapSymbol = "d";
	};
}