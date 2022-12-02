#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

bool cmp(int a, int b) { // this is similar to lambda function
    return a > b; // return the condition that you want to implement
}

int main() {
    int n2;
    cin >> n2;
    vector<int> V(n2);
    
    for (int i = 0; i < n2; i++) {
        cin >> V[i];
    }

    sort(V.begin(), V.end(), cmp); 

    for (auto i: V) {
        cout << i << endl;
    }
}