#pragma once
#include <iostream>
#include "Character.h"
class Orcs : public Character {

public:
	Orcs(std::string name);
	virtual ~Orcs();
	void Render();
};