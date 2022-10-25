#include<iostream>
#include<vector>
using namespace std;

int main () {
    vector<int> v = {2,3,5,6,7};    
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }

    cout << endl;
    
    // printing using the iterators
    vector<int>::iterator it; // this is how we declare an iterator
    for(it = v.begin(); it != v.end(); it++) {
        cout << (*it) << endl; // iterator is a pointer, so we get its value using '*' as we do in pointers
    }

    // special iterator used to access pairs
    vector<pair<int,int>> v_p = {{1,2}, {3,4}, {5,6}};
    vector<pair<int,int>>::iterator vpit; // declaring the iterator
    
    for (vpit = v_p.begin(); vpit != v_p.end(); vpit++) {
        cout << (*vpit).first << " " << (*vpit).second << endl;
    }

    cout << endl;

    // another way to write this for loop
    for (vpit = v_p.begin(); vpit != v_p.end(); vpit++) {
        cout << vpit->first << " " << vpit->second << endl;
    }
    // basically (*it).first <=> it->first
    return 0; 
}