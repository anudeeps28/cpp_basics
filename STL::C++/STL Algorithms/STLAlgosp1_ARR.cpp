#include<iostream>
#include<algorithm>
#include<vector>
#include<numeric> // accumulate

using namespace std;

int main() {
    int n;
    cin >> n;
    int v[n];
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    cout << "///////////";
    
    // ALGORITHMS
    
    // min
    auto min = min_element(v,v+n); // this will return an iterator
    cout << (*min) << endl;

    // max
    int max = *max_element(v, v+n);
    cout << max << endl;

    //sum
    int sum = accumulate(v, v+n, 0); // 0 = initial sum given
    cout << sum << endl;

    // count
    int ct = count(v+2, v+n, 3);
    cout << ct << endl;

    // find
    auto element = find(v, v+n, 2); // returns the iterator of the element to be found
    if (element != v+n) {
        cout << (*element) << endl;
    }
    else cout << "element not found" << endl;

    // reverse
    reverse(v, v+n);
    for (auto i: v) {
        cout << i << " ";
    }
    cout << endl;

}