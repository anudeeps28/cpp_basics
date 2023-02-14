#include<iostream>
using namespace std;

template<typename T>
bool isEqual(T x, T y) {
    return x == y;
}

int main() {
    int a = 2;
    int b = 3;
    bool intEqual = isEqual(a,b);
    cout << intEqual << endl;

    float c = 2.3;
    float d = 4.6;
    bool floatEqual = isEqual(c,d);
    cout << floatEqual << endl;

}