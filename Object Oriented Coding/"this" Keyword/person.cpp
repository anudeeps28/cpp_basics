#include <iostream>
#include <sstream>

#include "person.hpp"

Person::Person() {
    age = 0;
    name = "-";

}

Person::Person(string name, int age) {
   this->name = name; // this -> name = denoting private variables in .hpp; RHS = denoting the input that will be given in .cpp main file
   this->age = age;

   cout << "Memory Location of this: " << this << endl;
}

string Person::toString() {
    
    stringstream ss;

    ss << "name";
    ss << name;
    ss << "age:";
    ss << age;

    return ss.str();
}