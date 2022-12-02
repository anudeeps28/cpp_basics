#include<iostream>
#include<algorithm>
#include<vector>
#include<numeric> // accumulate

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    cout << "///////////";
    
    // ALGORITHMS
    
    // min
    auto min = min_element(v.begin(), v.end()); // this will return an iterator
    cout << (*min) << endl;

    // max
    int max = *max_element(v.begin(), v.end());
    cout << max << endl;

    //sum
    int sum = accumulate(v.begin(), v.end(), 0); // 0 = initial sum given
    cout << sum << endl;

    // count
    int ct = count(v.begin()+2, v.end(), 3);
    cout << ct << endl;

    // find
    auto element = find(v.begin(), v.end(), 2); // returns the iterator of the element to be found
    if (element != v.end()) {
        cout << (*element) << endl;
    }
    else cout << "element not found" << endl;

    // reverse
    reverse(v.begin(), v.end());
    for (auto i: v) {
        cout << i << " ";
    }
    cout << endl;

    string s = "sfhsahs;s";
    reverse(s.begin(), s.end());
    cout << s << endl;
}