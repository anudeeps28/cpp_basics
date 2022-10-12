#include <iostream>
using namespace std;

int main() {
    // pair is a class in C++ stl that pairs 2 different types of data types/containers
    pair<int, string> p;

    // 1. adding value in pair using make_pair
    p = make_pair(2, "abc");
    cout << p.first << " " << p.second << endl;

    // 2. declaring pair using curley brackets
    pair<int, string> p2;
    p2 = {2, "lkdf"};
    cout << p2.first << " " << p2.second << endl;

    // copying pairs
    pair<int, string> p3 = p;
    cout <<  p3.first << " " << p3.second << endl;
    cout << p.first << endl;

    // passing by reference = same as variables
    pair<int, string> &p4 = p;
    p4.first = 6;
    cout << p.first << endl;

    // uses of pair = relation between 2 arrays
    pair<int,int> p_array[3];
    p_array[0] = {1,2};
    p_array[1] = {3,4};
    p_array[2] = {5,6};

    for (size_t i = 0; i < 3; i++) {
        cout << p_array[i]. first << " " << p_array[i].second << endl;
    }

    // for swapping, we don't need to write long loops
    swap(p_array[1], p_array[2]);
    for (size_t i = 0; i < 3; i++) {
        cout << p_array[i]. first << " " << p_array[i].second << endl;
    }
    
    pair<int, int> p8;
    cin >> p8.first;

    cout << p8.first;
}
