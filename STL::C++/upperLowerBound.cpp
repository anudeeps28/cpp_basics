#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
#include<map>

using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];

    // input: [4 5 5 25 7 8]
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // upper and lower bound can be applied to only sorted data structures (otherwise time complexity is more)
    sort(arr, arr+n); 
    
    cout << endl;

    int *ptr = lower_bound(arr, arr+n, 5); // syntax: lower_bound(starting, ending, element which you need to find)
    cout << (*ptr) << endl;

    int *ptr2 = lower_bound(arr, arr+n, 26); 
    cout << (*ptr2) << endl;

    int *ptr3 = upper_bound(arr, arr+n, 7); 
    cout << (*ptr3) << endl;

    int *ptr4 = upper_bound(arr+4, arr+n, 7); 
    cout << (*ptr4) << endl;

    // in the case of vectors = preferred over arrays as vectors optimized in STL
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    cout << endl;

    auto it = upper_bound(v.begin(), v.end(), 5);
    cout << (*it) << endl;

    // in the case of maps and sets
    // syntax: s.lower_bound(x), m.lower_bound(x)

    set<int> s;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        s.insert(x);
    }

    auto itt = s.lower_bound(6);
    cout << (*itt) << endl;

    // there is no need of sorting in sets and maps
    // same is the case for map, just that the lower bound and upper bound in a map is applied on the key only, not the value
    // we can use lower and upper bound on pairs as well
    // we can use this in the case of strings also

    // internal implementation = binary search in the case of arrays and vectors, and trees (tree traversal) in the case of maps and sets.

    // if we don't have these, we might have to use entire binary searches 

}