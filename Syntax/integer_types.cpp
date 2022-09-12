#include<iostream>
using namespace std;

int main()
{
    int value = -84743;
    cout << value << endl;

    cout << "Max limit of int: " << INT16_MAX << endl;
    cout << "Min limit of int: " << INT16_MIN << endl;

    //this will give error -> int lValue = 5679347594754875348023;

    // used to store large variables values
    long int lValue = 567934759434508023;
    cout << lValue << endl;


    // used to save some memory in a program
    short int sValue = 4343;
    cout << sValue;

    // we can use sizeof to find the size of the type of variable (in bytes) that we are using
    cout << "Size of int: " << sizeof(int) << endl;
    cout << "Size of short int: " << sizeof(short int) << endl;

    return 0;
}