// vector basics
#include <iostream>
#include <vector>
using namespace std;

// vectors = arrays + dynamic size

void printVector(vector<int> vec) { // we are passing by value, so we are copying, hence it is an expensive operation
    cout << "Size of vector" << vec.size() << endl;

    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << endl;
    }
}

void printVectorByReference(vector<int> &vec) { 
    cout << "Size of vector" << vec.size() << endl;

    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << endl;
    }
    vec.push_back(2);
}

int main() {
    vector<int> v; // current size = 0, but it is changable
    vector<pair<int, int>> v1; // vector of pair of integers

    // adding values in vector
    int n;
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        printVector(v); // -> this will show how the size of the vector is changing!
        v.push_back(x); // adding the value of x in the end of the vector; complexity = O(1)
    }

    printVector(v);

    // we can change the length of the vector
    // even if we declare it with some other size
    vector<int> v11(10); // vector of size 10
    vector<int> sfsd(10, 3); // vector of size 10 all of whose values are 3
    v11.push_back(7);
    printVector(v11);
    v11.pop_back(); // removes value from the back; complexity = O(1)
    printVector(v11);
    
    // copying the vector; complexity = O(n)
    vector<int> v100 = v; // we cannot do this arrays
    v100.push_back(5);
    printVector(v);
    printVector(v100) ;

    // not making a copy, but assigning a different name to same stuff
    vector<int> &v101 = v; // v101 and v are same

    // passing by reference passes the same vector, does not make a copy, hence changes the original vector
    printVectorByReference(v);
    printVectorByReference(v);

    // any data type can be given inside 
    vector<string> vecstr = {"str1", "str2"};
    for (auto i: vecstr) {
        cout << i << endl;
    }
    
}