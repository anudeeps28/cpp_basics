#include<iostream>
// #include<exception> // used for standard exceptions: exception class defined in this header
#include<stdexcept> // derived from exception class (runtime error and logic error - both present in stdexcept -> has exception in itself)

using namespace std;

int main() {

    int a = 10;
    int b = 0;

    int c;

    try {
        if (b == 0) {
            throw runtime_error("divide by 0 error");
        }
        c = a/b;
        cout << c << endl;
    } catch(runtime_error &error) {
        cout << "exception occured" << endl;
        cout << error.what();
    }
    

    return 0;
}