#include <iostream>
#include "Shaman.h"

Shaman::Shaman(Character* w) : Decorator(w) {
}

Shaman::~Shaman() {
}

void Shaman::Render() {
    Decorator::Render();
    std::cout << "- toegevoegd: Shaman class" << std::endl;
}
