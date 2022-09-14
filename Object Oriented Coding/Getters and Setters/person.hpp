#pragma once
#include <iostream>

using namespace std;

class Person {
private:
    string name;
public:
    Person();
    string toString(); // function toString returns a string
    void setName(string newName); // setter
    string getName();
};