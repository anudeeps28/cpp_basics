#include <iostream>
using namespace std;

class Animal{
private:
    string name;
public:
    Animal() {
        cout << "Animal created" << endl;
    }
    Animal(const Animal& other): name(other.name) {
        cout << "Animal created by copying" << endl;
    }

    /*

    As soon as the program reaches the closing curley bracked of the main function, 
    the objects of the class are destroyed by the destructor

    */

    ~Animal() {
        cout << "Animal Destroyed" << endl;
    } 

    void setName(string name) {
        this->name = name;
    }

    void speak() {
        cout << "My name is: " << name << endl;
    }

};

int main() {

    Animal cat;
    cat.setName("Jhon");
    cat.speak();

    // another way of instantiating an object = using the new keyword and using the pointer
    Animal *pDog = new Animal();
    pDog->setName("Bob");
    pDog->speak();
    delete pDog; // destructor is not called for pointers, so we need to delete manually EVERY TIME to avoid memory leak

    return 0;
}