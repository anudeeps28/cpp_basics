#include <iostream>
using namespace std;

void changeSomething(double& a) { // now a is just a reference to value in line 25 
    a = 123.4;
}

int main() {
    int value1 = 8;
    int &value2 = value1; // now value2 is a reference to value1 (value 2 is a nickname of value1)
    value2 = 10; // whatever we do to value 2 will happen to value1
    
    cout << "Value1: " << value1 << endl;
    cout << "Value2: " << value2 << endl;

    /*
    
    This can be done to strings or whatever. 
    Reference variables just create ailases to existing variables

    */

   // this can be useful to create functions where we want to change values, but we don't want to return anything
    double value = 4.321;
    changeSomething(value);
    cout << value << endl;

    return 0;
}