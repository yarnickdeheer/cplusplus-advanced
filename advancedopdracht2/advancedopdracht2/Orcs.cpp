//rollen / farmer/ soldier / shaman

#include "Orcs.h"
#include <iostream>
Orcs::Orcs(std::string n) {
	this->name = n;
}
void Orcs::Render() {
	std::cout << "Orcs character: " << this->name << std::endl;
}

Orcs::~Orcs() {
}
