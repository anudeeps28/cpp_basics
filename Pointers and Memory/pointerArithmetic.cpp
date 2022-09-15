#include <iostream>
using namespace std;

int main() {

    const int NSTRINGS = 5;
    string texts[NSTRINGS] {"One", "two", "three", "four", "five"};

    string * ptexts = texts; // a pointer to first element of the array
    cout << *ptexts << " ";

    // we can increment the pointer
    ptexts+= 3;
    cout << *ptexts << " ";

    // we can decrement the pointer as well
    ptexts -= 2;
    cout << *ptexts << " ";

    cout << endl;

    // making a new pointer point at the end of the string
    string *pEnd = &texts[NSTRINGS];
    ptexts = &texts[0]; // setting ptexts to initial

    // while loop to increment the pointer
    while (ptexts != pEnd) {
        cout << *ptexts << " ";
        ptexts++;
    }

    // set ptexts back to start
    ptexts = &texts[0];

    // calculating the number of elements by subtracting front and back pointers
    long elements = long(pEnd - ptexts);
    cout << elements;    
    return 0;
}