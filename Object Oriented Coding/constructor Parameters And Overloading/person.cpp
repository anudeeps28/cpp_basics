#include <iostream>
#include "person.hpp"
#include <sstream>

Person::Person() { 
    name = "undefined";
    age = 0;
}

Person::Person(string newName, int newAge) {
    name = newName;
    age = newAge;
}
string Person::toString() {
    stringstream ss;

    ss << "Name: ";
    ss << name;
    ss << "Age: "; 
    ss << age;

    return ss.str();
}
