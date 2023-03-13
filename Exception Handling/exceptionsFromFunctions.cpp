#include<iostream>
#include<stdexcept>

using namespace std;

void test() throw (int, char, runtime_error){ // these are the type of exceptions that this function can throw
    // throw 20;
    // throw 'c';
    throw runtime_error("what the heck!?");
} 

int main() {

    try {
        test();
    } catch (int e) {
        cout << "integer type error: " << e << endl;
    } catch (char ecc) {
        cout << "character type error: " << ecc << endl;
    } catch (runtime_error err) {
        cout << "runtime error " << err.what() << endl;
    }
    
    
    return 0;
}