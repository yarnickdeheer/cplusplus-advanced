#include "Decorator.h"
#include <iostream>

Decorator::Decorator(Character* w) {
	role = w;
}
Decorator::~Decorator() {
	if (role) delete role;
}
void Decorator::Render() {
	role->Render();
}