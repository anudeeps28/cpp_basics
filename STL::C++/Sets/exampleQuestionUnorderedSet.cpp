/**
 * @file exampleQuestionUnorderedSet.cpp
 * @author anudeep
 * @brief Given N strings and Q queries, In each querey you are given 
 * a string.Pring yes if the string is present else print no
 * @version 0.1
 * @date 2022-11-01
 */

#include <iostream>
#include<unordered_set>

using namespace std;

int main() {

    unordered_set<string> s;
    int n;
    cin >> n;

    for (int i = 0 ; i < n; i++) {
        string str;
        cin >> str;
        s.insert(str);
    }

    cout << "/////////////" << endl;

    cout << "Enter the string (queries) to compare" << endl;
    
    int q;
    cin >> q;

    while (q--) { // the loop will run until q becomes false i.e. 0
        string queries;
        cin >> queries;
        // using the find function in set
        if (s.find(queries) == s.end()) {
            cout << "no\n";
        } else {
            cout << "yes\n";
        }
    }
}

    