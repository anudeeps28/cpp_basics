#include <iostream>
#include <sstream>

#include "person.hpp"



// fast way to define the constructor
Person::Person(string name, int age): name(name), age(age) { // you can do this in hpp file also (as I have done there in the first constructor)
   // this will do the same work as this following code does
   // this -> name = name
   // this -> age = age

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