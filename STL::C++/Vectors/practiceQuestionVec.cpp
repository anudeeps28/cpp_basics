#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n, q;
    cin >> n >> q;
    
    vector<int> a[n];
    
    for (int i = 0; i < n; i++) {
        int k, element;
        cin >> k;
        while (k--) {
            cin >> element;
            a[i].push_back(element);
        }
    }
    
    while (q--) {
        int i,j;
        cin >> i >> j;
        cout << a[i][j] << endl;
    }
    
    return 0;
}
 
