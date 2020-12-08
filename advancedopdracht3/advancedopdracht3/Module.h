#pragma once
#include <vector>
#include <iostream>
#include "Docent.h"
#include "Student.h"

class Module {
public:
    Module(std::string n , int ec);
    void addStudent(Student s);
    void addDocent(Docent d);
    void list();
    void setEc(int ec);
    void deleteStudent();
    
private:
    std::vector<Student> students;
    std::vector<Docent> docenten;
    std::string name;
    int Ec;
};
