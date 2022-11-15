/***
 * Given N strings and Q queries
 * in each query you are given a string
 * print the frequency of that string
*/

#include <iostream>
#include <unordered_map>

using namespace std;

// here order is not mattering, so we will use the unordered map

int main() {
    unordered_map<string,int> m;
    int n;
    cin >> n;

    // entering the strings
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        m[s]++;
    }

    int q; // entering how many strings do we need to find frequency of 
    cin >> q;
    while(q--) {
        string s;
        cin >> s;
        cout << m[s] << endl;
    }
}