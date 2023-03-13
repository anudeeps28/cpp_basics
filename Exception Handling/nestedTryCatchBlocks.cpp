#include<iostream>
#include<stdexcept>

using namespace std;

int main() {
    try {
        try { // we can have nested try blocks.
            throw "a const character exception";
        } catch(const char* e) {
            cout << "character type in inner block ->" << e << endl;
            cout << "rethrowing exception" << endl;
            throw runtime_error("fsdkfsd"); // this will rethrow this in the outer block
        }

    } catch (const char* e) {
        cout << "character type in outer block ->" << e << endl;

    } catch (...) {
        cout << "unexpected exception in outer block -->" << endl;
    }

    return 0;
}