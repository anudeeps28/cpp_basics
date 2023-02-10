#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int N;
    cin >> N;
    vector<int> V;
    
    for (int i = 0; i < N; i++) {
        int n;
        cin >> n;
        V.push_back(n);
    }
    
    int q1;
    cin >> q1;
    
    auto it = V.begin()+q1-1;
    V.erase(it);
    
    int q21, q22;
    cin >> q21 >> q22;
    
    V.erase(V.begin()+q21-1, V.begin()+q22-1);
    
    cout << V.size() << endl;
    for (auto i: V) {
        cout << i << " ";
    }

    
    return 0;
}
