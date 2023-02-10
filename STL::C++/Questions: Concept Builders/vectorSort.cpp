#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    vector<int> V;
    int N;
    cin >> N;
    for (int i = 0; i < N; i++) {
        int n;
        cin >> n;
        V.push_back(n);
    }
    
    sort(V.begin(), V.end());
    
    for (auto i: V) {
        cout << i << " ";
    }
    return 0;
}
