#include <iostream>
using namespace std;

int main() {

    // break
    for(int i = 0; i <5; i++) {
        cout << "i is: " << i << endl;

        if (i == 3) {
            break;
    }
    }
    cout << "quitting .." << endl;    

    // continue
    for(int i = 0; i <5; i++) {
            cout << "i is: " << i << endl;

            if (i == 3) {
                continue;;
        }
    
        cout << "looping .." << endl;  

        }

    cout << "Quitting .." << endl;  
}