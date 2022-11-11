/***
 * Given N strings, print unique strings in 
 * lexiographical order
*/

#include <iostream>
#include<set>

using namespace std;

int main() {
    // because frequency or any other thing is not asked for, we will not use map as it wil consume high computation
    // we can use sets

    set<string> s;
    int n;
    cin >> n;

    for (int i = 0 ; i < n; i++) {
        string str;
        cin >> str;
        s.insert(str);
    }

    cout << "/////////////" << endl;

    for (auto itr: s) { // printing the elements of the set
        cout << itr << endl;
    }

    // and because it is a set, it is going to print alphabetically

    // without STL, this code will be more than 150 lines. STL makes it this simple!
    
}