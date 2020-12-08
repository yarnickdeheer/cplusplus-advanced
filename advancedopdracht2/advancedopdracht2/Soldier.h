#pragma once

#include "Decorator.h"

class Soldier : public Decorator {
public:
    Soldier(Character* w);
    virtual ~Soldier();

    void Render();
};
