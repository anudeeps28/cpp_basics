#include<iostream>
#include<stack>
#include<vector>
using namespace std;

template<typename T>
stack<T> stackTemplate(vector<T> vec) {
    stack<T> s;
    for (int i = 0; i < vec.size(); i++) {
        s.push(vec[i]);
    }
    return s;
}


int main() {
    vector<int> v = {1,2,3,4,5};
    stack<int> int_x = stackTemplate(v);

    vector<float> v_f = {1.2,2.2,3.4,3.5};
    stack<float> int_f = stackTemplate(v_f);

    while(!int_x.empty()) {
        cout << int_x.top() << endl;
        int_x.pop();
    }

    cout << endl;

     while(!int_f.empty()) {
        cout << int_f.top() << endl;
        int_f.pop();
    }
    
}