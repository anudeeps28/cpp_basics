#include <iostream>
using namespace std;

template <typename T>
bool are_equal(T a, T b) {
    return a == b;
}

int main() {
    int x = 5;
    int y = 7;
    double a = 3.14;
    double b = 3.14;
    
    bool intEqual = are_equal(x, y);
    bool doubleEqual = are_equal(a, b);
    
    if (intEqual) {
        cout << x << " and " << y << " are equal." << endl;
    } else {
        cout << x << " and " << y << " are not equal." << endl;
    }
    
    if (doubleEqual) {
        cout << a << " and " << b << " are equal." << endl;
    } else {
        cout << a << " and " << b << " are not equal." << endl;
    }
    
    return 0;
}
