#pragma once
#include <iostream>
class Character {

protected:
	std::string name;
public:
	Character();
	virtual ~Character();
	virtual void Render() = 0;
};