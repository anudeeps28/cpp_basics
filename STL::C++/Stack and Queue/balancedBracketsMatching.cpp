/***
 * Question - https://www.hackerearth.com/problem/algorithm/balanced-parathesis/
 * "Balanced Brackets Matching"
*/

#include <iostream>
#include<stack>
#include<string>
#include<unordered_map>

using namespace std;

// globally declaring unordered map
unordered_map<char, int> symbols = {{'[', -1}, {']', 1},{'(', -2}, {')', 2}, {'{', -3}, {'}', 3} };

string isBalanced(string s) {
    stack<char> st;
    // you can do if (st[i] == '[' || st[i] == '{' ...)
    // also if (st[i] == '[' && st.top() == ']')

    // but we can do with the help of unordered maps also (we can use maps also, but that will unnecessarily increase complexity)
    for (char bracket: s) {
        if (symbols[bracket] < 0) {
            st.push(bracket);
        } else {
            if (st.empty()) return "NO";
            char top = st.top(); 
            st.pop();

            if (symbols[top] + symbols[bracket] != 0) {
                return "NO";
            }
        }
    }
    if (st.empty()) return "YES"; 
    return "NO";
     
}


// taking input of test cases
int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;
        cout << isBalanced(s) << endl;
    }

}