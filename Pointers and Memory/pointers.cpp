#include <iostream>
using namespace std;

void manipulate(double value) { // this function will not change the actual value; but will create a copy of value and change it
    cout << "2. Value of double via manipulate: " << value << endl;
    value = 10;
    cout << "3. Value of double via manipulate: " << value << endl;
}

void manipulate2(double* pvalue) { // this function will change the actual value
    cout << "2. Value of double via manipulate: " << *pvalue << endl;
    *pvalue = 10; // change the value at location where the pointer is pointing
    cout << "3. Value of double via manipulate: " << *pvalue << endl;
}

int main() {

    int nValue = 8; // a variable
    int* pnValue = &nValue; // type of variable pnValue = pointer to an int 

    /*

    type of pointer basically has no significance. 
    type of pointer indicates the type of data that that pointer is pointing to.

    */

    cout << "Int value: " << nValue << endl;
    cout << "Pointer to int address: " << pnValue << endl;
    cout << " Int value via pointer: " << *pnValue << endl; // this is called dereferencing = gives the value where pointer is pointing

    cout << "----------------------" << endl;
    double dValue = 123.4;
    cout << "1. dValue: " << dValue << endl;
    manipulate(dValue);
    cout << "4. dValue: " << dValue << endl;

    cout << "----------------------" << endl;
    double dValue2 = 123.4;
    cout << "1. dValue: " << dValue2 << endl;
    manipulate2(&dValue2);
    cout << "4. dValue: " << dValue2 << endl;
    
    return 0;
}