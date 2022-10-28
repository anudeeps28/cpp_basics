/**
 Given N strings, print the unique strings 
 in lexiographical order with their frequency
 */

#include <iostream>
#include<string>
#include <map>

using namespace std;

int main() {
    map<string, int> m;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        m[s]++;
    }

    for (auto pair:m) {
        cout << pair.first << " " << pair.second<< endl;
    }
}