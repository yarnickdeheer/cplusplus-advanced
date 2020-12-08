#pragma once

#include "Decorator.h"

class Shaman : public Decorator {
public:
    Shaman(Character* w);
    virtual ~Shaman();

    void Render();
};
