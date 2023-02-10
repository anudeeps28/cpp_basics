#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    vector<int> v;
    int N;
    cin >> N;
    
    // inserting elements in the vector
    for (int i = 0; i < N; i++) {
        int n; 
        cin >> n;
        v.push_back(n);
    }
    
    // sorting the vector
    sort(v.begin(), v.end());
    
    // taking queries
    int Q;
    cin >> Q;
    
    for (int i = 0; i < Q; i++) {
        int q;
        cin >> q;
        auto it = lower_bound(v.begin(), v.end(), q);
        if (q == *it) {
            cout << "Yes" << " " << it - v.begin() + 1 << endl;
        } else {
            cout << "No" << " " << it - v.begin() +1 << endl;
        }
    }
    return 0;
}
