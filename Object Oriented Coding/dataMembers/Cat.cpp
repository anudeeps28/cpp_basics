#include<iostream>
#include "Cat.hpp"

using namespace std;

void Cat::speak(){
    if (happy){
        cout << "Meoww!" << endl;
    }
    else {
        cout << "ssss" << endl;
    }
    

}

void Cat:: makeHappy() {
    happy = true;
}

void Cat::makeSad() {
    happy = false;
}