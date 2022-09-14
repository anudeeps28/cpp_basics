#include<iostream>
#include "Cat.hpp"

using namespace std;

int main() {

    cout << "Hello World" << endl;

    Cat jim;
    jim.makeHappy();
    // jim.happy = false; // to prevent this (others to set values to our data members from outside of the class), we make private variables
    // but then, what can we set to happy? -> this is where the constructor comes into play
    jim.speak();

    Cat bob;
    bob.makeSad();
    bob.speak();
    
    // if we don't use makeHappy or makeSad, we will get a random value because the happy variable has not been given any initial value in .hpp file
    return 0;
}