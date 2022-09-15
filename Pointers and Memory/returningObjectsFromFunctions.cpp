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

Animal* createAnimal() { // a free standing function
    Animal* pAnimal = new Animal();
    pAnimal->setName("Bertie");
    return pAnimal;
}

int main() {
    Animal* pFrog = createAnimal();

    pFrog->speak();

    delete pFrog;

    return 0;
}