
#pragma once

#include <iostream>

class Student {
public:
    Student(std::string name);
    std::string getName();
    void setEc(int ec);
    int getEc();
    
private:
    int studentEc;
    std::string name;
};