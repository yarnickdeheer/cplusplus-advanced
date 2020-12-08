#include "Module.h"
#include <iostream>
Module::Module(std::string n, int ec){
	name = n;
	Ec = ec;
}

void Module::addStudent(Student s) {
	students.push_back(s);
}
void Module::addDocent(Docent d) {
	docenten.push_back(d);
}
void Module::list() {

	std::cout << "---- module: " << name <<std::endl;
	std::cout << "---- in de klas: " << std::endl;
	std::cout << "---- docent(en): " << std::endl;
	for (int i = 0; i < docenten.size(); ++i) {
		std::cout << docenten[i].getName() << std::endl;
	}
	std::cout << "---- studenten: " << std::endl;
	for (int i = 0; i < students.size(); ++i) {
		students[i].setEc(Ec);
		std::cout << students[i].getName() << " - " << students[i].getEc() << std::endl;
	}
	std::cout << "------------" << std::endl;
}
void Module::setEc(int newEc) {
	Ec = newEc;
	std::vector<Student>::iterator it = students.begin();
	std::cout << "-----------------------------" << std::endl;
	std::cout << "verander ec naar: " << newEc << std::endl;
	while (it != students.end()) {
		it->setEc(Ec);
		std::cout << "student: " << it->getName() << " ec is nu: " << it->getEc() << std::endl;
		it++;
	}
	std::cout << "-----------------------------" << std::endl;
}
void Module::deleteStudent() {
	std::cout << "-----------------------------" << std::endl;
	std::cout << "verwijder de 4e student uit de lijst: "  << std::endl;
	std::vector<Student>::iterator it = students.begin();

	while (it != students.end()) {
		if (it== students.begin()+3) {

			it = students.erase(it);
		}

		else { it++; }
	}

	std::cout << "-----------------------------" << std::endl;
}