/*
This is the cpp file (source file) which contains:
1. All the functions that we will use in the program

Prototpye of this function will be available in hpp file
*/

#include <iostream>
#include "Cat.hpp"

using namespace std;

void Cat::speak() { // making a function that is of class Cat
    cout << "Meowww!!!" << endl;
}

void Cat::jump() {
    cout << "jumping on the top" << endl;

}