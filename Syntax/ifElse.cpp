#include <iostream>
using namespace std;

int main() {
    cout << "1. Add New Record" << endl;
    cout << "2. Delete New Record" << endl;
    cout << "3. View New Record" << endl;
    cout << "4. Search Record" << endl;
    cout << "5. Quit" << endl;
    
    cout << "enter your selection" << endl;

    int value;
    cin >> value;

    // if - else loop
    if(value < 3) {
        cout << "Insufficient priviledges to use these menu options";
    }

    else {
        cout << "priviledges levels sufficient" << endl;
    }


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