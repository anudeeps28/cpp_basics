#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	// Complete this function
    vector<int> ints;
    stringstream ss(str);
    int a;
    while (ss >> a) {
        ints.push_back(a);
        if (ss.peek() == ',') { // sees the next element
            ss.ignore(); // ignores it and moves to the next
        }
    }
    
    return ints;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
