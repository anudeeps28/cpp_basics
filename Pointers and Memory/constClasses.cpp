#include<iostream>
#include<string>
using namespace std;

class Entity {
private:
    int m_X, m_Y;
    mutable int var;
public:
    int GetX() const { // writing const after the method means that this function will not be modifying the class (member variables)
        return m_X;
        var = 2; // can be modified inside a const function as its data type is mutable.
        // m_X = 2; -> this will give an error
    } 

    void SetX(int x) { // cannot declare this function as const because we are changing priavte member variables
        m_X = x;
    }

    // const int* const GetX() const -> we are returning a pointer that cannot be modified, the contents of the pointer cannot be modified,
    // and also the function cannot change the private member variables of the class. 

};

int main() {
    return 0;
}