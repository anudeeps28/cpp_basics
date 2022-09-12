#include <iostream>
using namespace std;

/*
* == equality test 
* != not equal
* < less than
* > greater than
* <= less than equal to
* >= greater than or equal to
* & -> bitwoise 
* && -> AND
* || -> OR
*/

int main() {
    int value1 = 7;
    int value2 = 4;

    if (value1 > 8){
        cout << "Condition 1: true" << endl;
    }
    else{
        cout << "Condition 1: false" << endl;
    }

    if (value1 == 7 && value2 == 4){ 
            cout << "Condition 2: true" << endl;
        }
    else{
        cout << "Condition 2: false" << endl;
    }

    if (value1 == 7 || value2 == 4){ 
            cout << "Condition 2: true" << endl;
        }
    else{
        cout << "Condition 2: false" << endl;
    }


    if (value2 != 8 && value1 == 7 || value1 < 10) { // conditions as complicated like this are hard to read, try to make them easy to understand when you code
        cout << "Condition 4: true" << endl;

    } else {
        cout << "Condition 4: false" << endl;
    }

    // another (better) way to write this
    bool condition1 = (value2 != 8) && (value1 == 7); 
    cout << condition1 << endl;

    bool condition2 = value1 < 10;

    if (condition1 || condition2) { // this is simpler to work out with
        cout << "true";
    }else {
        cout << "false";
    }

    return 0;
}