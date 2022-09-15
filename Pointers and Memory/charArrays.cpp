#include <iostream>
using namespace std;

int main() {

    // this is very common to store characters in a char array than to use the string class
    char text[] = "hello";
    cout << text << endl;

    for (int i = 0; i < sizeof(text); i++) {
        cout << i << ": " << text[i] << endl;

    }
    

    // last element of the char array is 0, which is not printed but is there showing that the string has ended     
    for (int i = 0; i < sizeof(text); i++) {
     
        cout << i << ": " << int(text[i]) << endl;
    }
    
    // iterating over the char array using while loop
    int k = 0;
    while (true) {
        if (text[k] == 0) {
            break;
        }
        cout << text[k] << flush;
        k++;
        
    }

    return 0;
}