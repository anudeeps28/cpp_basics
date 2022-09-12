#include<iostream>
using namespace std;

int main() {
    string animals[2][3] = {
        {"fos", "dog", "cat"},
        {"mouse", "squirrel","parrot"}
    };
    
    // you can access this using a nested for loop

    for (int i = 0; i<2; i++) {
        for (int j = 0; i < 3; j++)
        {
            cout << animals[i][j] << " " << flush;
        }
        cout << endl;
    }
    return 0;
}