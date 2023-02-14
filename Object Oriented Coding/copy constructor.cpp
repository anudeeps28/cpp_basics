#include<iostream>
using namespace std;

/**
 * @brief copy constructor basics
 * In this example, MyClass has a default constructor and a copy constructor. 
 * The copy constructor takes a constant reference to another MyClass object 
 * and copies its x and y data members into the new object being created. 
 * In main(), we create two objects of MyClass, obj1 and obj2. 
 * obj2 is initialized by copying obj1, which triggers the copy constructor.
 */

class MyClass {
public:
    // default constructor
    MyClass() {
        // initialize data members
        x = 0;
        y = 0;
    }

    // copy constructor
    MyClass(const MyClass& other) {
        // copy data members from other object
        x = other.x;
        y = other.y;
    }

private:
    int x, y;
};

int main() {
    // create an object of MyClass
    MyClass obj1;

    // create a new object and copy obj1
    MyClass obj2 = obj1; // copy constructor is invoked

    return 0;
}

