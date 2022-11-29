#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    int A[n];
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    // inbuilt sort in C++ = nLog(n) worst case complexity
    // syntax: sort(address from where you want to sort, (address till where you want to sort)+1)
    sort(A, A+n); // array's name is a pointer pointing to the first element of the array
    // use sort(A+2, A+n) to start sorting from 3rd element 

    // printing the sort array
    for (auto i: A) {
        cout << i << endl;
    }

    cout << "/////////" << endl;
    // the same is true for using this sort on vectors as well
    int n2;
    cin >> n2;
    vector<int> V(n2);
    
    for (int i = 0; i < n2; i++) {
        cin >> V[i];
    }

    sort(V.begin(), V.end()); // same addresses as passed in the case of arrays
    // use V.begin()+2 if you want to start sorting from 3rd element

    for (auto i: V) {
        cout << i << endl;
    }

    return 0;
}