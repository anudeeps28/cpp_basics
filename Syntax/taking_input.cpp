#include <iostream>
using namespace std;

int main()
{
    cout << "Enter a string: " << endl;
    string text; // declaring the variable where we will be storing user input
    cin >> text; // taking the user input in that variable so that we can display/manipulate it in our program
    cout << "You Entered: " << text << endl;

    cout << "Enter a number: " << endl;
    string number; 
    cin >> number; 
    cout << "You Entered: " << number << endl;

    return 0;
}