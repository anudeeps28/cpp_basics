#include <iostream>
#include <set>
#include<unordered_set>

using namespace std;

void print(set<string> &s) {
    for (auto value: s) {
        cout << value << endl;
    }
}

void print(unordered_set<int> &s2) {
    for (auto value: s2) {
        cout << value << endl;
    }
}
int main() {
    set<string> s; // we can make a set of anything, just like a map/vector
    s.insert("abc");
    s.insert("zsfds");
    s.insert("bycdf");

    unordered_set<int> s2;
    s2.insert(1); 
    s2.insert(4);
    s2.insert(2);
    s2.insert(7);
    s2.insert(5);

    print(s);
    print(s2);

    auto it = s.find("abc"); 
    s.erase(it);
    print(s);

    // .erase can take iterator as well as the value 
    s.erase("bycdf");
    print(s);

    auto itt = s.find("fsdg");
    if (itt != s.end()) { // this if condition is present to prevent segmentation fault so that if iterator does not find any value and jumps to the end, it exits out of loop and does and perform the earse operation
        s.erase(itt);       

    }
    print(s);
    // all the same method that apply on maps, will apply on sets also
        // like - erase, etc.
}