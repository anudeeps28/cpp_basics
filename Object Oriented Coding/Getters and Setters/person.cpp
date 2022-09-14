#include<iostream>
#include "person.hpp"

using namespace std;

Person::Person(){
    name = "George";
}

string Person::toString(){
    return "Person's name is: " + name;
}

// implementing the setter method 
void Person::setName(string newName) { 
    name = newName;
}

// implementing the getter method to get the name
string Person::getName() {
    return name;
}