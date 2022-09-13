#include<iostream>
using namespace std;

void showMenu() {
    cout << "1. Add New Record" << endl;
    cout << "3. View New Record" << endl;
    cout << "5. Quit" << endl;
}

int getInput() {
    int input;
    cin >> input;

    return input; // returning the value
    
}

void processSelection(int option) { // void because it does not return any kind of value that can be taken by any other function
    if (option == 1){
        cout << "Adding new record" << endl;
    } else if (option == 2)
    {
        cout << "deleting new record" << endl;
    } else if (option == 3)
    {
        cout << "Viewing..." << endl;
    }

    else {
        cout << "Invalid option" << endl;
    }
}

int main() {

    showMenu(); // this will call the above function and perform all the tasks in it

    int selection = getInput(); // variable 'selection' will store the value returned by getInput() function

    processSelection(selection);  

    /* 
    
    selection variable in main function and in processSelection function (now I have changed it to 'option') are 2 different variables.
    this is so because variables declared inside the function has domain inside them only
    they are not valid outside the function

    */ 
    
    return 0;
}  