#pragma once

#include "Decorator.h"

class Farmer : public Decorator {
public:
    Farmer(Character* w);
    virtual ~Farmer();

    void Render();
};
