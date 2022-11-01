#include <iostream>
#include <set>

using namespace std;

void print(set<string> &s) {
    for (auto value: s) {
        cout << value << endl;
    }
}

int main() {
    set<string> s; // we can make a set of anything, just like a map/vector
    s.insert("abc");
    s.insert("zsfds");
    s.insert("bycdf");

    print(s);

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