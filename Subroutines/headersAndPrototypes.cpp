#include<iostream>
#include "headersAndPrototypes.hpp" // this is a header file (equivallent to copying and pasting the contents of that file into this)
using namespace std;


int main() {

    doSomething();
    return 0;
}


void doSomething() {
    cout << "Hello" << endl;
}