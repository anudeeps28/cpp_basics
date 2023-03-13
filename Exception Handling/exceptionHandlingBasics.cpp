#include<iostream>
using namespace std;

int main() {
    int a = 10;
    int b = 0;
    int c;

    try {
        if (b == 0) {
            throw "divide by 0 error";
        }
        c = a/b;
        cout << c << endl;

    } catch(const char* e) {
        cout << "exception occured" << endl << e;
    }
    return 0;
}