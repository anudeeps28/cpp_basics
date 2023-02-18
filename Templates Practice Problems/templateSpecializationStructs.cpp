#include <iostream>
using namespace std;

template <typename T>
struct MyClass {
  void print() {
    cout << "This is a generic MyClass." << endl;
  }
};

// Template specialization for int type
template <>
struct MyClass<int> {
  void print() {
    cout << "This is a specialized MyClass for int." << endl;
  }
};

int main() {
  MyClass<double> myDouble;
  myDouble.print(); // outputs "This is a generic MyClass."

  MyClass<int> myInt;
  myInt.print(); // outputs "This is a specialized MyClass for int."
}
