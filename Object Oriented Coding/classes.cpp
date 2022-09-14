#include<iostream>
using namespace std;

// all we have to do in this function after making .cpp and .hpp file is: to include the header file in this main function
#include "Cat.hpp"


int main() {

    cout << "Hello World" << endl;

    // making object (instance of the class Cat)
    Cat cat1; // variable 'cat1' of class 'Cat'; this is like saying int a

    // calling functions
    cat1.speak();
    cat1.jump();
    return 0;
}