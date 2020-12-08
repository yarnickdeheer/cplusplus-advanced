#include <iostream>
#include "Soldier.h"

Soldier::Soldier(Character* w) : Decorator(w) {
}

Soldier::~Soldier() {
}

void Soldier::Render() {
    Decorator::Render();
    std::cout << "- toegevoegd: Soldier class" << std::endl;
}
