#include <iostream>
#include "person.hpp"

using namespace std;

int main() {
    Person person;
    Person person2("Bob", 43);
    Person person3("Sue", 23);


    cout << person.toString() << endl;
    cout << person2.toString() << endl;
    cout << person3.toString() << endl;

    cout << person2.toString() << "memory location" << &person2 << endl;
    cout << person3.toString() << "memory location" << &person3 << endl;

    // therefore, this has the same memory location as memory address of variables

    return 0;
}
 