#include <string>
#include <iostream>
#include <vector>

#include "../entities/BaseCharacter.h"
#include "../loot/Helmet.h"
#include "../loot/Axe.h"
#include "../generators/MapGenerator.h"

//some private testing functions--delete later as they become unnecessary
void setUpAndTestAMap();


int main()
{
	std::string Test = "";
	std::cout << "Type something: ";
	std::cin >> Test;
	std::cout << Test;

	return 0;
}

void setUpAndTestAMap()
{
	Geography::Map Map;
	Generators::MapGenerator MapGenerator;
	Entities::BaseCharacter Roxas;
	Roxas.SetIsPlaceholder(false);
	Entities::BaseCharacter Vanitas;
	Vanitas.SetIsPlaceholder(false);
	Vanitas.SetAffiliation("E");

	Map.SetHeight(5);
	Map.SetWidth(5);

	Geography::MapSquare Square1;
	Square1.SetXPosition(0);
	Square1.SetYPosition(0);
	Geography::MapSquare Square2;
	Square2.SetXPosition(1);
	Square2.SetYPosition(0);
	Geography::MapSquare Square3;
	Square3.SetXPosition(2);
	Square3.SetYPosition(0);
	Geography::MapSquare Square4;
	Square4.SetXPosition(3);
	Square4.SetYPosition(0);
	Geography::MapSquare Square5;
	Square5.SetXPosition(4);
	Square5.SetYPosition(0);
	Geography::MapSquare Square6;
	Square6.SetXPosition(0);
	Square6.SetYPosition(1);
	Square6.SetOccupant(Roxas);
	Geography::MapSquare Square7;
	Square7.SetXPosition(1);
	Square7.SetYPosition(1);
	Geography::MapSquare Square8;
	Square8.SetXPosition(2);
	Square8.SetYPosition(1);
	Geography::MapSquare Square9;
	Square9.SetXPosition(3);
	Square9.SetYPosition(1);
	Geography::MapSquare Square10;
	Square10.SetXPosition(4);
	Square10.SetYPosition(1);
	Geography::MapSquare Square11;
	Square11.SetXPosition(0);
	Square11.SetYPosition(2);
	Geography::MapSquare Square12;
	Square12.SetXPosition(1);
	Square12.SetYPosition(2);
	Geography::MapSquare Square13;
	Square13.SetXPosition(2);
	Square13.SetYPosition(2);
	Geography::MapSquare Square14;
	Square14.SetXPosition(3);
	Square14.SetYPosition(2);
	Geography::MapSquare Square15;
	Square15.SetXPosition(4);
	Square15.SetYPosition(2);
	Geography::MapSquare Square16;
	Square16.SetXPosition(0);
	Square16.SetYPosition(3);
	Geography::MapSquare Square17;
	Square17.SetXPosition(1);
	Square17.SetYPosition(3);
	Geography::MapSquare Square18;
	Square18.SetXPosition(2);
	Square18.SetYPosition(3);
	Geography::MapSquare Square19;
	Square19.SetXPosition(3);
	Square19.SetYPosition(3);
	Geography::MapSquare Square20;
	Square20.SetXPosition(4);
	Square20.SetYPosition(3);
	Geography::MapSquare Square21;
	Square21.SetXPosition(0);
	Square21.SetYPosition(4);
	Geography::MapSquare Square22;
	Square22.SetXPosition(1);
	Square22.SetYPosition(4);
	Geography::MapSquare Square23;
	Square23.SetXPosition(2);
	Square23.SetYPosition(4);
	Square23.SetOccupant(Vanitas);
	Geography::MapSquare Square24;
	Square24.SetXPosition(3);
	Square24.SetYPosition(4);
	Geography::MapSquare Square25;
	Square25.SetXPosition(4);
	Square25.SetYPosition(4);

	Map.GetSquareVector().push_back(Square1);
	Map.GetSquareVector().push_back(Square2);
	Map.GetSquareVector().push_back(Square3);
	Map.GetSquareVector().push_back(Square4);
	Map.GetSquareVector().push_back(Square5);
	Map.GetSquareVector().push_back(Square6);
	Map.GetSquareVector().push_back(Square7);
	Map.GetSquareVector().push_back(Square8);
	Map.GetSquareVector().push_back(Square9);
	Map.GetSquareVector().push_back(Square10);
	Map.GetSquareVector().push_back(Square11);
	Map.GetSquareVector().push_back(Square12);
	Map.GetSquareVector().push_back(Square13);
	Map.GetSquareVector().push_back(Square14);
	Map.GetSquareVector().push_back(Square15);
	Map.GetSquareVector().push_back(Square16);
	Map.GetSquareVector().push_back(Square17);
	Map.GetSquareVector().push_back(Square18);
	Map.GetSquareVector().push_back(Square19);
	Map.GetSquareVector().push_back(Square20);
	Map.GetSquareVector().push_back(Square21);
	Map.GetSquareVector().push_back(Square22);
	Map.GetSquareVector().push_back(Square23);
	Map.GetSquareVector().push_back(Square24);
	Map.GetSquareVector().push_back(Square25);

	std::cout << MapGenerator.DrawMap(Map) << std::endl;

	std::cout << "It didn't explode" << std::endl;
}