#include<iostream>
#include "Cat.hpp"

using namespace std;

Cat::Cat() { // this is the constructor (first -> name of class, second -> name of constructor defined in hpp file)
    cout << "Cat created." << endl;
    happy = true;
}

Cat::~Cat(){
    cout << "Cat destroyed." << endl;

}

void Cat::speak(){
    if (happy){
        cout << "Meoww!" << endl;
    }
    else {
        cout << "ssss" << endl;
    }
}