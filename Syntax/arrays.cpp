#include<iostream>
using namespace std;

int main() {

    int value[3]; // declaring the array

    value[0] = 88;
    // value[1] = 123;
    value[2] = 7;

    cout << "Array of Integers:" << endl;
    cout << "------------------" << endl;
    cout << value[0] << endl;

    double numbers[4] = {4.5, 2.4, 5.6, 8.7};

    cout << "Array of floats:" << endl;
    cout << "------------------" << endl;
    cout << numbers[0] << endl;

    // iterating through an array using a for loop
    for (int i = 0; i < 4; i++) {
        cout << "Element at index" << i << ":" << numbers[i] << endl;
    }

    // initializing with 0 values
    cout << "initializing with 0 values:" << endl;
    cout << "------------------" << endl;
    int number_array[8] = {};

    for (int i = 0; i < 7; i++) {
        cout << "Element at index" << i << ":" << number_array[i] << endl;
    }

    // array of strings
    string texts[] = {"apple", "banana", "orange"};
    for (int i = 0; i < 3; i++) {
        cout << "Element at index" << i << ":" << texts[i] << endl;
    }
    return 0;
}