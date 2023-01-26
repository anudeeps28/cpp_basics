#include<iostream>
using namespace std;

class Complex {
    double real, imag;

public:
    Complex(double r, double i) : real(r), imag(i) {}

    // Overload + operator to add two Complex objects
    Complex operator+(const Complex &c) const {
        return Complex(real + c.real, imag + c.imag);
    }
};

// here the '+' operator is being used to add a complex data type, because we have modified the behaviour of '+'.
int main() {
    Complex c1(1, 2), c2(3, 4);
    Complex c3 = c1 + c2; // c3 is now (4, 6)
    return 0;
}
