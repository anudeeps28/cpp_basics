#pragma once

#include<iostream>

using namespace std;

class Person {
private:
    string name;
    int age;
public:
    Person(); // 1st constructor
    Person(string newName) {name = newName; age = 0;}; // 2nd constructor | we can define the implementation of the constructor in .cpp source file also
    Person(string newName, int newAge); // 3rd constructor
    string toString();
};