#pragma once
#include <iostream>
#include "Character.h"
class Elfs : public Character {

public:
	Elfs(std::string name);
	virtual ~Elfs();
    void Render();
};