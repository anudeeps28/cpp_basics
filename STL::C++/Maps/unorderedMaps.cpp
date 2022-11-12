#include <iostream>
#include<string>

#include <map> // we have to include map to be able to use it
#include<unordered_map> // we have to include this to use the unordered map
using namespace std;

// function to print the map
void print(unordered_map<int, string> &m) { // O(nlog(n))
    // // printing the map = the same as vectors (using iterator)
    // unordered_map<int, string>::iterator it;
    // for(it = m.begin(); it != m.end(); it++) {
    //     cout << (*it).first << " " << it->second << endl;
    // } // this will print keys in sorted order as it is a sorted map

    // another way to print = using short iterator notation
    for (auto &pair: m) { // &pair just so that the copy of map is not created
        cout << pair.first << " " << pair.second << endl;
    }
}

int main() {
    unordered_map<int, string> m; // map declared

    // METHOD - 1: adding value in map
    m[1] = "abc"; // this insertion operation = O(log(n))
    m[2] = "cdc";
    m[3] = "acd";
    m[6]; // this will insert an empty string by default

//     // METHOD - 2: adding values in map
//     m.insert({4, "afg"}); // we have to insert a pair inside the map
//                         // we can make pair using the "make_pair" keyword also

    print(m); 

//     // all the "keys" (not values) of the map are unique, you cannot duplicate them
//     // m[3] = "cde" will make m[3] = 'cde' and will remove the previous 'acd' 

//     // some important function on map

    // 1. find = O(1)
    m.find(3); // this returns an iterator
    auto it = m.find(3);

    if (it == m.end()) {
        cout << "NO Value";
    } else {
        cout << (*it).first << " " << (*it).second << endl;
    }

//     auto itt = m.find(7);

//     if (itt == m.end()) {
//         cout << "NO Value";
//     } else {
//         cout << (*itt).first << " " << (*itt).second;
//     }

    // 2. erase  
    m.erase(3); // O(1)
    print(m);

    auto it2 = m.find(1);
    m.erase(it2);
    print(m);

//     // giving an iterator that does not exist (like m[7] will give segmentation fault)
//    // to avoid this, we can give a safety check before using erase
//     // if (it != m.end())
//     cout << "--------";
//     m.clear(); // clears the whole map
//     print(m);
//     cout << endl;
//     cout << "------";

//     // if the map is map<string, int>
//     // m["abcd"] = "cdef"; -> this will take m.size() * long(n) time as each key is being compared when added to the map     

// Multimap

}