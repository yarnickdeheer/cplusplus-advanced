//rollen / farmer/ soldier / shaman
#include "Elfs.h"
#include <iostream>
Elfs::Elfs(std::string n) {
	this->name = n;
}
void Elfs::Render() {
	std::cout << "elf character: " << this->name << std::endl;
}
Elfs::~Elfs() {
}
