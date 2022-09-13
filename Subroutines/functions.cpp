#include <iostream>
using namespace std;

void showMenu() {
    cout << "1. Add New Record" << endl;
    cout << "3. View New Record" << endl;
    cout << "5. Quit" << endl;
}

void ProcessSelection() {
    int value;
    cin >> value;

    // if else if else
    if (value == 1){
        cout << "Adding new record" << endl;
    } else if (value == 2)
    {
        cout << "deleting new record" << endl;
    } else if (value == 3)
    {
        cout << "Viewing..." << endl;
    }

    else {
        cout << "Invalid option" << endl;
    }
}

int main() {

    showMenu(); // this will call the above function and perform all the tasks in it

    ProcessSelection();
    
    return 0;
}