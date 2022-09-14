
#pragma once

#include <iostream>
using namespace std;

class Person {
private:
    string name;
    int age;    
public:
    Person();
    Person(string name, int age);

    string toString();
};