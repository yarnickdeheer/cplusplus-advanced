// advancedopdracht2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Character.h"
#include "Orcs.h"
#include "Elfs.h"
#include "Farmer.h"
#include "Soldier.h"
#include "Shaman.h"
int main()
{
	Character* test = new Elfs("jack");
	test->Render();
	Character* test2 = new Orcs("peter");
	test2->Render();
	Character* test3 = new Elfs("jacob");
	test3->Render();
	std::cout << "// ==================" << std::endl;
	std::cout << "// en nu met classes" << std::endl;
	std::cout << "// ==================" << std::endl;
	Character* test4 = new Farmer(new Orcs("jack"));
	test4->Render();
	Character* test5 = new Soldier(new Elfs("jacob"));
	test5->Render();
	Character* test6 = new Shaman(new Orcs("peter"));
	test6->Render();
	delete test;
	delete test2;
	delete test3;
	delete test4;
	delete test5;
	delete test6;
}