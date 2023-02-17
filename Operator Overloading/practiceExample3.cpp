#include<iostream>
#include<vector>
using namespace std;

class Vector {
public:
    Vector();
    void addElements();
    void showElements(); 
    vector<int> addVectors(vector<int> A, vector<int> B);
private: 
    vector<int> v;
};

// Vector::Vector() {
//     vector<int> numbers;

// }

vector<int> operator+(vector<int> va, vector<int> vb) {
    vector<int> addedVector;
    for (int i = 0; i < va.size(); i++) {
        int x = va[i] + vb[i];
        addedVector.push_back(x);
    }
    return addedVector;
}

void Vector::addElements() {
    int numberOfElements;
    cin >> numberOfElements;
    for (int i = 0; i < numberOfElements; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }
}

void Vector::showElements() {
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << endl;
    }
}


int main() {
    vector<int> x = {1,2,3,4};
    vector<int> y = {1,2,3,4};

    vector<int> answer = x + y;

    for (auto i: answer) {
        cout << i << " ";
    }
}