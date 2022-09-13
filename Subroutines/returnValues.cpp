#include<iostream>
using namespace std;

void showMenu() {
    cout << "1. Add New Record" << endl;
    cout << "3. View New Record" << endl;
    cout << "5. Quit" << endl;
}

int ProcessSelection() {
    int input;
    cin >> input;

    return input; // returning the value
    
}

int main() {

    showMenu(); // this will call the above function and perform all the tasks in it

    int selection = ProcessSelection(); // variable 'selection' will store the value returned by ProcessSelection() function

    if (selection == 1){
        cout << "Adding new record" << endl;
    } else if (selection == 2)
    {
        cout << "deleting new record" << endl;
    } else if (selection == 3)
    {
        cout << "Viewing..." << endl;
    }

    else {
        cout << "Invalid option" << endl;
    }
    
    return 0;
}  