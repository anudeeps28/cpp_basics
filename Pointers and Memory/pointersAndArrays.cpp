#include <iostream>
using namespace std;

int main() {

    string texts[] = {"one", "two", "three"};

    // iterating the normal way
    cout << sizeof(texts)/sizeof(string) << endl;
    
    for (int i = 0; i < sizeof(texts)/sizeof(string); i++) {
        cout << texts[i] << " " << flush;
    }

    cout << endl;
    
    // using pointer to access the array
    string* pTexts = texts; // pointer pTexts is pointing on the first element of the array texts
    /*
    
    The only difference here is that this pointer does not knows the length of the array
    It knows the type of variable it is pointing to, but does not know the length
    
    */

   for (int i = 0; i < sizeof(texts)/sizeof(string); pTexts++) { // loop is decided in the same way in which normal iteraation is done
        cout << *pTexts << " " << flush; 
    }

    cout << endl;

    // another way to do this
    string *pElement = texts; // pointer at the start of the array
    string *pEnd = &texts[2]; // pointer to the last element of the array

    while (true) {
        cout << *pElement << " " << flush;

        if(pElement == pEnd) {
            break;
        }

        pElement ++;

    }
    



    return 0;
}