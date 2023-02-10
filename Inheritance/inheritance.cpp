#include <iostream>
using namespace  std; 

class Animal { // this is the super class (parent class)
public:
    void speak() {cout << "Grrrr" << endl;}
}; 
 
class Cat: public Animal {  // class Cat is a child class (or a sub class) of Animal Class
public:
    void jump() {cout << "Cat jumping!" << endl;} // additional method jump of cat
};

// multi-level inheritance 
class Tiger: public Cat { // tiger is a sub class of cat, and also a sub class of animal
public:
    void attack() {cout << "Attacking...!" << endl;}
};

int main() {
    Animal a;
    a.speak();

    Cat c;
    c.speak(); // cat still has the speak method that animal (parent) has, but it also has additional methods
    c.jump();

    Tiger t;
    t.speak();
    t.jump();
    t.attack();

    return 0;
}
 


