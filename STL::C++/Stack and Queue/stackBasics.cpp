#include <iostream>
#include <stack>

using namespace std;

int main() {
    stack<int> s; // you can make a stack of any data structure

    // adding element in stack
    s.push(2);
    s.push(3);
    s.push(6);
    s.push(10);

    // emptying the stack
    while (!s.empty()) { // s.empty returns a boolean
        cout << s.top() << endl; // s.top gives the value of the top element of the stack
        s.pop(); // then we remove that element from the stack

        // LIFO will be followed
    }

    
    

}