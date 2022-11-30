#include <iostream>
#include <set>
#include<unordered_set>

using namespace std;

void print(set<string> &s) {
    for (auto value: s) {
        cout << value << endl;
    }
}

/***
 * Another method of printing
 * for (auto it = s.begin(); it != s.end(); it++) {
 *      cout << (*it) << endl;
 * } 
*/


void print2(unordered_set<int> &s) {
    for (auto value: s) {
        cout << value << endl;
    }
}

void print3(multiset<int> &s) {
    for (auto value: s) {
        cout << value << endl;
    }
}

int main() {
    set<string> s; // we can make a set of anything, just like a map/vector
    s.insert("abc"); // O(lon(n))
    s.insert("zsfds");
    s.insert("bycdf");

    unordered_set<int> s2;
    s2.insert(1); // O(1)
    s2.insert(4);
    s2.insert(2);
    s2.insert(7);
    s2.insert(5);

    multiset<int> s3;
    s3.insert(1); // O(lon(n))
    s3.insert(4);
    s3.insert(1);
    s3.insert(7);
    s3.insert(5);
    s3.insert(4);

    print(s);
    print2(s2);
    print3(s3);

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

    auto ittt = s3.find(1);
    s3.erase(ittt);
    print3(s3);

    // s3.erase(1) -> this will erase all 1 in the set
    // the same functions apply to set as do in maps: .size(), .clear, 
    // these are all the common functions that we can use for all containers
}