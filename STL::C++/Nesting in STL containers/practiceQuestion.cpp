/***
 * The Monk and Class Marks - HackerEarth Problem:
 * https://www.hackerearth.com/problem/algorithm/the-monk-and-class-marks/
*/
#include <iostream>
#include <map>
#include<set>
#include <string>

using namespace std;

int main () {
    // map<int, set<string>> m; -> using sets will remove duplicates, so we use multisets
    map<int, multiset<string>> m;

    // if you want to use the 2nd printing loop, enter the marks in -ve
    // m[78].insert("Eve");
    // m[99].insert("Bob");
    // m[78].insert("Alice");
    // m[78].insert("Alice");

    // we can also take inputs for the map instead of hardcoding the input 
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int marks;
        string name;
        cin >> name >> marks;
        m[-marks].insert(name);
    }

    cout << "------------" << endl;

    auto i = --m.end(); 

    // Method - 1: printing the values
    // while(true) {
    //     auto students = (*i).second;
    //     auto marks = (*i).first;

    //     for (auto student: students) {
    //         cout << student << " " << marks << endl;
    //     }

    //     if (i == m.begin()) break;
    //     i--;
    // }

    // Method - 2: another way of writing the printing loop (clearner way)
    // NOTE: store the negative of marks and print in normal default way
    for (auto marks_students_pair: m) {
        auto marks = marks_students_pair.first;
        auto students = marks_students_pair.second;
        for (auto i: students) {
            cout << i << -1*marks << endl;
    }
    }

    
} 