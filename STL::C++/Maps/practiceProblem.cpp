/**
 * @file practiceProblem.cpp
 * @author anudeepSharma
 * 
 * @brief Hackerrank Practice Problem: 
 * https://www.hackerrank.com/challenges/cpp-maps/problem?isFullScreen=true
 * 
 * @version 0.1
 * @date 2023-02-03
 */

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int Q;
    cin >> Q;
    map<string, int> m;

    for (int i = 0; i < Q; i++) {
        int type;
        cin >> type;
        string name;
        int marks;

        if (type == 1) {
            cin >> name >> marks;

            auto it = m.find(name);
            if (it == m.end()) {
                m[name] = marks;
            } else {
                m[name] = m[name] + marks;
            }
        } else if (type == 2) {
            cin >> name;
            m.erase(name);
        } else if (type == 3) {
            cin >> name;
            auto it = m.find(name);
            if (it == m.end()) {
                cout << 0 << endl;
            } else {
                cout << m[name] << endl;
            }
            
        }

    }
    return 0;
}



