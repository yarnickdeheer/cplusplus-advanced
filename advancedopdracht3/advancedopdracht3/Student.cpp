#include "Student.h"

Student::Student(std::string name) : name(name){

}
std::string Student::getName() {
	return name;
}
void Student::setEc(int ec) {
	studentEc = ec;
}
int Student::getEc() {
	return studentEc;
}