#include <iostream>
using namespace std;

class Animal {
private:
    string name;
public:
    void setName(string name) {this->name = name;}
    void Speak() const {cout << "My name is: " << name << endl;} // we don't want the name to change, so we lock it with const
};

int main() {

    const double PI = 3.141592;
    cout << PI << endl;

    // PI = 4343; this will give error because we have declared PI is const but still we are trying to change it

    Animal aninal;
    aninal.setName("Freddy");
    aninal.Speak();

    int value = 8;

    // const int* const pValue = &value - this gives error
    int* pValue = &value;

    cout << *pValue << endl;

    int number = 12; 
    pValue = &number; // Error with this: int* const pValue = &value
    *pValue = 15; // Error with this: const int* pValue = &value

    cout << *pValue << endl;

    return 0;
}