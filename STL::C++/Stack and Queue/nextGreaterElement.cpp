/***
 * Question Statement: hackerearth.com/problem/algorithm/next-greater-1/
*/
#include<iostream>
#include<stack>
#include<vector>

using namespace std;

vector<int> nextGreaterElement(vector<int> v) {
    // we are using indeces instead of values as values make complex code. 
    // if we have index, we can anyway find values from those indeces

    vector<int> nge(v.size());
    stack<int> st;

    for (int i = 0; i < v.size(); i++) { // not using range based for loops because we have to deal with indeces
        while (!st.empty() && v[i] > v[st.top()]) {
            nge[st.top()] = i;
            st.pop();
        }
        st.push(i);
    }
    while (!st.empty()) {
        nge[st.top()] = -1;
        st.pop();
    }
    return nge;

}

int main() {
    int n;
    cin >> n;

    vector<int> v(n); // pre-defining how many elements does the vector have
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    vector<int> NGE = nextGreaterElement(v);
    for (int i = 0; i < n; i++) {
        cout << v[i] << " " << (NGE[i] == -1 ? -1 : v[NGE[i]]) << endl; // what is inside square brackets is basically a for condition
        // condition = if NGE[i] = -1, then print -1, otherwise print v[NGE[i]]
    }
}