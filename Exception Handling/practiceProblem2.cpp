#include<iostream>
using namespace std;

class zeroException {
public:
    string what() {
        return "Division by 0 is not allowed";
    }
};

float divideTwoInts(int x, int y) {
    if (y == 0) {
        throw zeroException();
    }
    float z = float(x)/float(y);
    return z;
}

int main() {
    int a,b;
    cin >> a >> b;
    try {
        float answer = divideTwoInts(a,b);
        cout << answer << endl;

    } catch(zeroException e)
    {
        std::cerr << e.what() << '\n';
    }

}