#include<iostream>
#include "Cat.hpp"

using namespace std;

int main() {
    cout << "starting program..." << endl;

    {
        Cat bob; // Making object bob of Class Cat = constructor runs automatically = this line prints "cat created..." and makes variable happy = true
        bob.speak(); // this line prints meow because the cat is happy
    }

    /*
    
    * if we put curley brackets around the above 2 lines, cat is destroyed before ending program
    * this so because bob will be destroyed after the closing curley bracked by the destructor
    * scope of the object created is inside the curley brackets that it is put in

    */

    cout << "ending program..." << endl;
    
    return 0;
}