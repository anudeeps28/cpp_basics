#include <iostream>
using namespace std;

int main()
{
    string password = "hello";

    cout << "Enter your password >" << endl;

    string input;
    cin >> input;
    cout << "'" << input << "'" << endl;

    // checking if the input matches the password
    if(input == password) { // if gives a boolean true or false
        cout << "password accepted" << endl;
    }

    if(input != password){
        cout << "Access deined" << endl;
    }

    return 0;
}