#include<iostream>
#include<stdexcept>

using namespace std;

int main() {
    try {

        // throw "some exception"; // this will call 1st catch block
        throw 20; // this will catch 2nd catch block
        // throw runtime_error ("runtime error");
    
    // each catch block has one of the possibility on how to handle the exception occured in the try block
    } 
    // catch(const char* err) {
    //     cout << err << endl; 
    // } 

    catch(int error) {
        cout << error << endl; 
    } 
    // catch(const char* err) {
    //     cout << err << endl; 
    // } catch(runtime_error e) {
    //     cout << e.what() << endl; 
    // }
    catch (...) { // this will catch all the exceptions occuring (remaining ones)
        cout << "some exception occured" << endl;
    }
}