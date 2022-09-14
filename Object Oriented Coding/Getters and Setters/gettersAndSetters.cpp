#include<iostream>
#include "person.hpp"
using namespace std;

int main() {
    
    Person person; // person object of class Person

    cout << person.toString() << endl;

    // changing the name using a setter  
    person.setName("Georgina");
    cout << person.toString() << endl;

    cout << "name of person with get method:" << person.getName() << endl;

    return 0;
}