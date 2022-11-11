#include<iostream>
#include<queue>

using namespace std;

int main() {
    queue<string> q; // queue can also be made from any data structure
    q.push("abc");
    q.push("slgfjsd");
    q.push("l;stjg");
    q.push("oqsd");
    q.push("slch");

    // accessing = the same as stack
    while (!q.empty()) {
        cout << q.front() << endl; // front will give the value of the front most element of the queue
        q.pop();

        // this will follow FIFO! (unlike stack)
    }
    
}