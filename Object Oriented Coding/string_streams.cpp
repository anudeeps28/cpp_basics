#include<iostream>
#include<sstream>

using namespace std;

int main() {
    int age = 23;
    string name = "bob";

    stringstream ss;

    ss << "name is: ";
    ss << name;
    ss << "; Age is: ";
    ss << age;

    string info = ss.str();
    // now we can pass around this object

    cout << info << endl;

}