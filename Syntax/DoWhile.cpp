#include <iostream>
using namespace std;

int main() {
    int value = 7;
    int i;

    do // this will execute the program at least once, because it checks the condition after that
    {
        cout << "Hello" << endl;
        i++;
    } while (i < 8);

    // -------------------------------------------------------------------------------------//

    const string password = "hello"; // const means that this value cannot be changed

    // cout << "Enter your password" << endl;

    string input;
    // cin >> input;

    // if (input == password) {
    //     cout << "accepted";
    // } else {
    //     cout << "denied";
    // }

    // using while
    // -------------------------------------------------------------------------------------//
    
    while (input != password)
    {
        cout << "Access Deined" << endl;

        cout << "enter your password" << endl;
        cin >> input;

    }
    cout << "password accepted" << endl;
    
    // here, some code is duplicated. So, we can do better

    // even better way: using do while
    // -------------------------------------------------------------------------------------//

    do
    {
        cout << "enter your password" << endl;
        cin >> input;

        if (input != password){
            cout << "Acces Denied" << endl;
        } 
    } while (input != password);
    

}