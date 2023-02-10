#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    set<int> s;
    int Q;
    cin >> Q;
    
    for (int i = 0; i < Q; i++) {
        int x,y;
        cin >> x >> y;
        
        if (x == 1) {
            s.insert(y);
        } else if (x == 2) {
            s.erase(y);
        } else if (x == 3) {
            auto it = s.find(y);
            if (it == s.end()) {
                cout << "No" << endl;
            } else {
                cout << "Yes" << endl;
            }
        }
        
        
    }
    return 0;
}



