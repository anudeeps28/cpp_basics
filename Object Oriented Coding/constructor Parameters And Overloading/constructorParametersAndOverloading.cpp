#include<iostream>
#include "person.hpp"

using namespace std;

int main() {

    cout << "Hello World!" << endl;

    Person person1; // takes the first constructor
    cout << person1.toString() << endl;

    Person person2("Bob"); // because the parametrized constructor (2nd one) takes string as input
    cout << person2.toString() << endl;

    Person person3("sue", 43); // takes the 3rd constructor
    cout << person3.toString() << endl;
    /*
    - person1 takes the constructor which has no parameters 
    - person2 takes the constructor which has parameters inside it (which takes string as input)
    */

    return 0;
}

