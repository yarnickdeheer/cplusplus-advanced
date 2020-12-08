#include <iostream>
#include "Farmer.h"

Farmer::Farmer(Character* w) : Decorator(w) {
}

Farmer::~Farmer() {
}

void Farmer::Render() {
    Decorator::Render();
    std::cout << "- toegevoegd: Farmer class" << std::endl;
}
