#pragma once

#include "Character.h"
#include "Orcs.h"

#include <iostream>

class Decorator : public Character {
private:
    Character* role;
 
public:
    Decorator(Character* w);
    virtual ~Decorator();

    virtual void Render();
};